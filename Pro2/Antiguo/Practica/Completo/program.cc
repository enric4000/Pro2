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

	int M = 0;
	int A = 0;
	int b = 0;
	string commando ="";
	string clave = "";
	string ida = "";
	string idm = "";
	string m ="";

    cin >> A;
	CAlfabetos alfas(A);
	cin >> M;
	CMensajes mensas(M, alfas);

	cin >> commando;
	while(commando != "fin"){

		if(commando == "nuevo_mensaje" or commando== "nm"){
			cin >> idm >> ida;
			cout << '#' << commando << ' ' << idm << ' ' << ida << endl;
            if(alfas.existe(ida)){

				if(mensas.nm(idm, ida)) alfas.incrementa(ida);	
			}
			else{
        
        		cin.ignore();
        		getline(cin, idm);
    		}
		}

		else if(commando == "nuevo_alfabeto" or commando == "na") {
			cin >> ida;
			cout << '#' << commando << ' ' << ida << endl;
            alfas.na(ida);
		}
		else if(commando == "borra_mensaje" or commando == "bm") {
			cin >> idm;
			cout << '#' << commando << ' ' << idm << endl;;
            mensas.bm(idm, alfas);
		}
		else if(commando == "borra_alfabeto" or commando == "ba") {
    		cin >> ida;
			cout << '#' << commando << ' ' << ida << endl;
            alfas.ba(ida);
		}
		else if(commando == "listar_mensajes" or commando == "lm") {
			cout << '#' << commando << endl;
			mensas.lm();
		}
		else if(commando == "listar_alfabetos" or commando == "la") {
			cout << '#' << commando << endl;
			alfas.listar_alfabetos();
		}
		else if(commando == "codificar_sustitucion_guardado" or commando == "csg") {
			cin >> idm; 
			cin.ignore();
			getline(cin, clave);
			cout << '#' << commando << ' ' << idm << " \"" << clave << "\"" << endl; 
			mensas.codisusguard(alfas, idm, clave);
		}
		else if(commando == "codificar_sustitucion" or commando == "cs") {
			cin >> ida;
			cin.ignore();
			getline(cin, clave);
			getline(cin, m);
			cout << '#' << commando << ' ' << ida << " \"" << clave << '"' << endl; 
			mensas.codisus(alfas, ida, clave, m);
		}
		else if(commando == "decodificar_sustitucion" or commando == "ds") {
			cin >> ida;
			cin.ignore();
			getline(cin, clave);
			getline(cin, m);
			cout << '#' << commando << ' ' << ida << " \"" << clave << '"' << endl; 
            alfas.decosus(ida, clave, m);
		}

		else if(commando == "codificar_permutacion_guardado" or commando == "cpg") {
			cin >> idm;
			cin >> b;
			cout << '#' << commando << ' ' << idm << ' ' << b << endl; 
            mensas.codipermuguard(idm, b);
		}

		else if(commando == "codificar_permutacion" or commando == "cp") {
			cin >> b;
			cout << '#' << commando << ' ' << b << endl; 
            mensas.codipermu(b);
		}

		else if(commando == "decodificar_permutacion" or commando == "dp") {
			cin >> b;
			cout << '#' << commando << ' ' << b << endl; 
			mensas.decopermu(b);
		}

		cin >> commando;
	}
}
#endif
