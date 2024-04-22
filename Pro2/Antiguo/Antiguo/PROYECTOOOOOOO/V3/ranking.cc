#include <iostream>
#include <vector>
#include <algorithm>
#include "ranking.hh"
using namespace std;

	ranking::ranking(){}
	
	void ranking::aj(const string &p){

		map<string, jugador>::const_iterator it = mj.find(p);
		if(it != mj.end()) cout << "error: ya existe un jugador con ese nombre" << endl;
		else {
			jugador jug (p);
			mj.insert(make_pair(p, jug));
			mp.insert(mp.end(), make_pair(p, 0));

		}
	}
	void ranking::cj(const string &p){

		map<string, jugador>::const_iterator it = mj.find(p);
		if(it == mj.end()) cout << "error: el jugador no existe" << endl;
		else {
			jugador jo = it->second;
			cout << p << " Rk:";
			map<string, jugador>::const_iterator it1 = mj.begin();
			int x = 1;
			while(it1 != it) {
				++it1;
				++x;
			}
			cout << x;
			jo.consulta();
		}

	}

	void ranking::bj(const string &p){

		if(mj.erase(p) == 0) cout << "error: el jugador no existe" << endl;
		else {

			for(int i = 0; i < mp.size(); ++i){

				if(mp[i].first == p) mp.erase(mp.begin()+i);
			}
		}

	}

	bool ordena(pair<string, int> o1, pair<string, int> o2){ 
		return o1.second < o2.second;
	}

	void ranking::lr(){


		sort(mp.begin(), mp.end(), ordena);

		for(int l = 0; l < mp.size(); ++l){

			cout << l + 1 << " " << mp[l].first << " " << mp[l].second << endl;
		}
	}

	void ranking::lj(){

		map<string, jugador>::const_iterator it = mj.begin();
		cout << mj.size() << endl;
		for(int i = 0; i < mj.size(); ++i){

			jugador jo = it->second;
			cout << it->first << " ";

			sort(mp.begin(), mp.end(), ordena);

			for(int j = 0; j < mp.size(); ++j){

				if(mp[j].first == it->first){

					cout << "Rk:" << j+1;
				}
			}
			jo.consulta();
			++it;
		}
	}