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
	string comand, clave, ida, idm;

    cin >> A;
	CAlfabetos alfas(A);
	cout << "Mensajes" << endl;
	getline(cin, clave);
	cin >> M;
	getline(cin, clave);
	CMensajes mensas(M, alfas);
	cout << "HE LLEGAO" << endl;
	cin >> comand;
	while(comand != "fin"){

		if(comand == "nuevo_mensaje" or comand == "nm"){
			cin >> idm >> ida;
            mensas.nm(idm, ida);
            alfas.incrementa(ida);
		}
		else if(comand == "nuevo_alfabeto" or comand == "na") {
            alfas.na();
		}
		else if(comand == "borra_mensaje" or comand == "bm") {
			cin >> idm;
            mensas.bm(idm, alfas);
		}
		else if(comand == "borra_alfabeto" or comand == "ba") {
            alfas.ba();
		}
		else if(comand == "listar_mensajes" or comand == "lm") {
			mensas.lm();
		}
		else if(comand == "listar_alfabetos" or comand == "la") {
			alfas.la();
		}
		
		getline(cin, clave);
		cin >> comand;
	}
}
#endif
