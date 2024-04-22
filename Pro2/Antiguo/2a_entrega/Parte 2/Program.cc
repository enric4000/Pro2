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
	cin >> M;
	CMensajes mensas(M, alfas);

	cin >> comand;
	while(comand != "fin"){

		if(comand == "nuevo_mensaje" or comand == "nm"){
            ida = mensas.nm();
            alfas.incrementa(ida);
		}
		else if(comand == "nuevo_alfabeto" or comand == "na") {
            alfas.na();
		}
		else if(comand == "borra_mensaje" or comand == "bm") {
			ida = mensas.bm();
			alfas.decrementa(ida);
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
		else if(comand == "codificar_sustitucion_guardado" or comand == "csg") {
			mensas.codisusguard(alfas);
		}
		else if(comand == "codificar_sustitucion" or comand == "cl") {
			mensas.codisus(alfas);
		}
		else if(comand == "decodificar_sustitución" or comand == "ds") {
            alfas.decosus();
		}
		else if(comand == "codificar_permutacion_guardado" or comand == "cpg") {
            mensas.codipermuguard();
		}
		else if(comand == "codificar_permutacion" or comand == "cp") {
            mensas.codipermu();
		}
		else if(comand == "decodificar_permutacion" or comand == "dp") {
			mensas.decopermu();
		}
		cin >> comand;
	}
}
#endif
