/** 
 * @mainpage Circuito de torneos
 * @file Mainp.cc
*/


#include "circuito.hh"
#include "Ccategorias.hh"
#include "ranking.hh"
#ifndef NO_DIAGRAM 
#include <utility>
#include <iostream>
#endif

using namespace std;

int main() {

	int C, K;
	cin >> C >> K;

	Ccategorias Ccat(C);
	Ccat.añadirpuntosnivel(C, K);
	
	int T;
	cin >> T;

	circuito circu(T);

	int P;
	cin >> P;
	string p;

	ranking rank;

	for (int l = 0; l < P; ++l){
		cin >> p;
		rank.aj(p);
	}

	string com;
	string t;
	cin >> com;
	while (com != "fin") {


		if (com == "nuevo_jugador" or com == "nj"){

			cin >> p;
			rank.aj(p);

		}
		else if(com == "nuevo_torneo" or com == "nt"){
			int c;
			cin >> t >> c;
			pair <string, int> par1;
			par1.first = t;
			par1.second = c;
			circu.at(par1);

		}
		else if(com == "baja_jugador" or com == "bj"){

			cin >> p;
			rank.bj(p);
		}
		else if(com == "baja_torneo" or com == "bt"){

			cin >> t;
			circu.bt(t);
		}
		else if(com == "iniciar_torneo" or com == "it"){

			cin >> t;
			circu.it(rank, t);
		}
		else if(com == "finalizar_torneo" or com == "ft"){

			cin >> t;
			circu.ft(rank, t);
		}
		else if(com == "listar_ranking" or com == "lr"){

			rank.lr();
		}
		else if(com == "listar_jugadores" or com == "lj"){

			rank.lj();
		}
		else if(com == "consultar_jugador" or com == "cj"){

			cin >> p;
			rank.cj(p);
		}
		else if(com == "listar_torneos" or com == "lt"){

			circu.lt();
		}
		else if(com == "listar_categorías" or com == "lc"){

			Ccat.lc();
		}
		cin >> com;
	}
}
