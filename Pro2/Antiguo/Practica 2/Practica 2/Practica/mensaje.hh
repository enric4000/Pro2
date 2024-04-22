/** @file mensaje.hh
    @brief Especificación de la clase mensaje
*/
#ifndef _MENSAJE_HH_
#define _MENSAJE_HH_
#include "Calfabetos.hh"

#ifndef NO_DIAGRAM 
#include "BinTree.hh"
#include<iostream>
#endif
using namespace std;

class mensaje {

	private:

		string m, ida;

	public:

	//Constructoras 

  		/** @brief Constructora de un mensaje. 

      		Se ejecuta automáticamente al declarar un mensaje.
      		\pre <em> Un string del mensaje m C</em>
      		\post El resultado es un mensaje de string m.
      	*/
		mensaje(string m, string ida);

	//Modificadoras

        /** @brief Entra a Calfabetos y le pasa el mensaje a decodificar.

      		\pre <em>Cert C</em>
      		\post Entra a codificar del mensaje leido con alfabeto ida.
      	*/
        void Mcs();

        /** @brief Lee el número de bloques crea el árbol y codifica el mensaje por permutación.

      		\pre <em>Cert C</em>
      		\post Codifica el mensaje m por permutación y lo imprime.
      	*/
        void Mcp();

        /** @brief Lee el número de bloques crea el árbol y codifica el mensaje por permutación.

      		\pre <em>Cert C</em>
      		\post Decodifica el mensaje m por sustitución y lo imprime.
      	*/
        void Mds();

        /** @brief Lee el número de bloques crea el árbol y decodifica el mensaje por permutación.

      		\pre <em>Cert C</em>
      		\post Decodifica el mensaje m por permutación y lo imprime.
      	*/
        void Mdp();

};
