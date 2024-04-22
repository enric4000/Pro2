#include <iostream>
#include <vector>
#include <algorithm>
#include "ranking.hh"
using namespace std;

	ranking::ranking(const int P){
		string p;
		for(int i = 0; i < P; ++i){
			cin >> p;
			jugador jug (p);
			mj.insert(make_pair(p, jug));
			mp.insert(mp.end(), make_pair(p, 0));
		}
	}

	bool ordena(pair<string, int> o1, pair<string, int> o2){ 
		return o1.second < o2.second;
    }


	void ranking::aj(const string &p){

		map<string, jugador>::const_iterator it = mj.find(p);
		if(it != mj.end()) cout << "error: ya existe un jugador con ese nombre" << endl;
		else {
			cout << mj.size() + 1 << endl;
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
			stable_sort(mp.begin(), mp.end(), ordena);
			int u = 1;
			for(int h = 0; mp[h].first != p; ++h){
				++u;
			}
			cout << u;
			jo.consulta();
		}

	}

	void ranking::bj(const string &p){

		if(mj.erase(p) == 0) cout << "error: el jugador no existe" << endl;
		else {
			cout << mj.size() << endl;
			for(int i = 0; i < mp.size(); ++i){

				if(mp[i].first == p) mp.erase(mp.begin()+i);
			}
		}

	}
	void ranking::lr(){
 	stable_sort(mp.begin(), mp.end(), ordena);
		for(int l = 0; l < mp.size(); ++l){

			cout << l + 1 << " " << mp[l].first << " " << mp[l].second << endl;
		}
	}

	void ranking::lj(){

		map<string, jugador>::const_iterator it = mj.begin();
		cout << mj.size() << endl;
		stable_sort(mp.begin(), mp.end(), ordena);
		map<string, int> mpm;

			for(int o = 0; o < mp.size(); ++o){
				mpm.insert(make_pair(mp[o].first, o + 1));
			}

		for(int i = 0; i < mj.size(); ++i){
			string l = it->first;
			jugador jo = it->second;
			cout << l << " ";
			map<string, int>::const_iterator itm = mpm.find(l);			
			cout << "Rk:" << itm->second;
			jo.consulta();
			++it;
		}
	}