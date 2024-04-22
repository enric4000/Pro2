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

	Ccategorias Ccat(C, K);
	
	int T;
	cin >> T;

	circuito circu(T);

	int P;
	cin >> P;
	string p;

	ranking rank(P);

	string com;
	string t;
	cin >> com;
	while (com != "fin") {


		if (com == "nuevo_jugador" or com == "nj"){

			cin >> p;
			cout << "#" << com << " " << p << endl;
			rank.aj(p);

		}
		else if(com == "nuevo_torneo" or com == "nt"){

			cout << "#" << com << " ";
			circu.at(Ccat);

		}
		else if(com == "baja_jugador" or com == "bj"){

			cin >> p;
			cout << "#" << com << " " << p << endl;
			rank.bj(p);
		}
		else if(com == "baja_torneo" or com == "bt"){


			cin >> t;
			cout << "#" << com << " " << t << endl;
			circu.bt(t);
		}
		else if(com == "iniciar_torneo" or com == "it"){

			cin >> t;
			cout << "#" << com << " " << t << endl;
			circu.it(rank, t);
		}

		else if(com == "listar_ranking" or com == "lr"){

			cout << "#" << com << endl;
			rank.lr();
		}
		else if(com == "listar_jugadores" or com == "lj"){

			cout << "#" << com << endl;
			rank.lj();
		}
		else if(com == "consultar_jugador" or com == "cj"){

			cin >> p;
			cout << "#" << com << " " << p << endl;
			rank.cj(p);
		}
		else if(com == "listar_torneos" or com == "lt"){

			cout << "#" << com << endl;
			circu.lt(Ccat);
		}
		else if(com == "listar_categorias" or com == "lc"){
			cout << "#" << com << endl << C << " " << K << endl;
			Ccat.lc();
		}
		cin >> com;
	}
}
