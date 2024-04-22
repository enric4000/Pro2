#include "Calfabetos.hh"
#include "Cmensajes.hh"
#include <iostream>

using namespace std;

int main(){

	int M, A;
	string comand, clave, ida, idm;

    cin >> A;
	Calfabetos alfas(A);
	cin >> M;
	Cmensajes mensas(M);

	cin >> comand;
	while(comand != "fin"){

		if(comand == "nuevo_mensaje" or comand == "nm"){
            mensas.nm();
		}
		else if(comand == "nuevo_alfabeto" or comand == "na") {
            alfas.na();
		}
		else if(comand == "borra_mensaje" or comand == "bm") {
			mensas.bm();
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
			mensas.csg();
		}
		else if(comand == "codificar_sustitucion" or comand == "cl") {
			mensas.cl();
		}
		else if(comand == "decodificar_sustitución" or comand == "ds") {
            mensas.ds();
		}
		else if(comand == "codificar_permutacion_guardado" or comand == "cpg") {
            mensas.cpg();
		}
		else if(comand == "codificar_permutacion" or comand == "cp") {
            mensas.cp();
		}
		else if(comand == "decodificar_permutacion" or comand == "dp") {
			mensas.dp();
		}
		cin >> comand;
	}
}
