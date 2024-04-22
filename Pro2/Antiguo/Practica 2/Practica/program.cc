#include "Calfabetos.hh"
#include "Cmensajes.hh"
#include <iostream>

using namespace std;

int main(){

	int M, A;
	string comand, clave, ida, idm;

	cin >> M;
	Cmensajes(M) Mensas;
	cin >> A;
	Calfabetos(A) Alfas;
	cin >> comand;
	while(comand != "fin"){

		if(comand == "nuevo_mensaje" or comand == "nm"){

		}
		else if(comand == "nuevo_alfabeto" or comand == "na") {
			
		}
		else if(comand == "borra_mensaje" or comand == "bm") {
			
		}
		else if(comand == "borra_alfabeto" or comand == "ba") {
			
		}
		else if(comand == "listar_mensajes" or comand == "lm") {
			
		}
		else if(comand == "listar_alfabetos" or comand == "la") {
			
		}
		else if(comand == "codificar_sustitucion_guardado" or comand == "csg") {
			
		}
		else if(comand == "codificar_sustitucion" or comand == "cl") {
			
		}
		else if(comand == "decodificar_sustitución" or comand == "ds") {
			
		}
		else if(comand == "codificar_permutacion_guardado" or comand == "cpg") {
			
		}
		else if(comand == "codificar_permutacion" or comand == "cp") {
			
		}
		else if(comand == "decodificar_permutacion" or comand == "dp") {
			
		}
		cin >> comand;
	}
}