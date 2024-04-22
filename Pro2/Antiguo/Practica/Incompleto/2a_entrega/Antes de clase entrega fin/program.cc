/** @mainpage Codificación de mensajes.
  @file Program.cc
  @brief programa main.
*/

#ifndef _PROGRAM_CC_
#define _PROGRAM_CC_


#include "CAlfabetos.hh"
#include "CMensajes.hh"
#ifndef NO_DIAGRAM 
#include <iostream>
#endif
using namespace std;

int main(){

	int M, A;
	string commando, clave, ida, idm, m;

    cin >> A;
	CAlfabetos alfas(A);
	cin >> M;
	CMensajes mensas(M, alfas);
	while(cin >> commando and commando != "fin"){

		if(commando == "nuevo_mensaje" or commando== "nm"){
			cin >> idm >> ida;
			cout << "#" << commando << " " << idm << " " << ida << endl;
            mensas.nm(alfas, idm, ida);
		}
		else if(commando == "nuevo_alfabeto" or commando == "na") {
			cin >> ida;
			cout << "#" << commando << " " << ida << endl;
            alfas.na(ida);
		}
		else if(commando == "borra_mensaje" or commando == "bm") {
			cin >> idm;
			cout << "#" << commando << " " << idm << endl;;
            mensas.bm(idm, alfas);
		}
		else if(commando == "borra_alfabeto" or commando == "ba") {
    		cin >> ida;
			cout << "#" << commando << " " << ida << endl;
            alfas.ba(ida);
		}
		else if(commando == "listar_mensajes" or commando == "lm") {
			cout << "#" << commando << endl;
			mensas.lm();
		}
		else if(commando == "listar_alfabetos" or commando == "la") {
			cout << "#" << commando << endl;
			alfas.la();
		}
		else if(commando == "codificar_sustitucion_guardado" or commando == "csg") {
			cin >> idm; 
			getline(cin, clave);
			getline(cin, clave);
			cout << "#" << commando << " " << idm << " \"" << clave << "\"" << endl; 
			mensas.codisusguard(alfas, idm, clave);
		}
		else if(commando == "codificar_sustitucion" or commando == "cs") {
			cin >> ida;
			getline(cin, clave);
			getline(cin, clave);
			getline(cin, m);
			cout << "#" << commando << " " << ida << " \"" << clave << "\"" << endl; 
			mensas.codisus(alfas, ida, clave, m);
		}
		else if(commando == "decodificar_sustitucion" or commando == "ds") {
			cin >> ida;
			getline(cin, clave);
			getline(cin, clave);
			getline(cin, m);
			cout << "#" << commando << " " << ida << " \"" << clave << "\"" << endl; 
            alfas.decosus(ida, clave, m);
		}
	}
}
#endif
