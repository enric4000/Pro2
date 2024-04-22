#include <iostream>
#include <vector>
#include "circuito.hh"
using namespace std;

circuito::circuito(int T){
	u = T;
	string x;
	int y;
	pair<string, int> par;

	for(int i = 0; i < T; ++i){

		cin >> x >> y;
		par.first = x;
		par.second = y;
		torneo t(par);
		torneos.insert(make_pair(x, t));
	}
}

void circuito::at(Ccategorias &Ccat){


	string x;
	int y;
	pair<string, int> par;
	cin >> x >> y;
	cout << x << " " << y << endl;
	map<string, torneo>::const_iterator it1 = torneos.find(x);
	if(it1 != torneos.end()) cout << "error: ya existe un torneo con ese nombre" << endl;
	else if(y > Ccat.C()) cout << "error: la categoria no existe" << endl;
	else{
		++u;
		cout << u << endl;
		par.first = x;
		par.second = y;	
		torneo t(par);
		torneos.insert(make_pair(x, t));
	}
}

void circuito::bt(string t){

	if(torneos.erase(t) == 0) cout << "error: el torneo no existe" << endl;
	else {
		--u;
		cout << u << endl;
	}
}

void circuito::it(ranking& rank, string t){

	map<string, torneo>::const_iterator it1 = torneos.find(t);
	if(it1 == torneos.end()) cout << "error: el torneo no existe" << endl;
	else {
		
		torneo to = it1->second;
		to.iniciatorneo(rank);
		torneos.erase(it1);
		torneos.insert(make_pair(t, to));
	}
}



void circuito::lt(Ccategorias& Ccat){

	map<string, torneo>::const_iterator it1 = torneos.begin();
	cout << u << endl;
	for(int i = 0; i < torneos.size(); ++i){

		torneo to = it1->second;
		to.consultatorneo();
		Ccat.sacacategoria(to.sacacate());
		cout << endl;
		++it1;
	}
}


