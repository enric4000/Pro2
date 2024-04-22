/** @file Mensaje.hh
    @brief Especificación de la clase mensaje
*/
#ifndef _MENSAJE_HH_
#define _MENSAJE_HH_

#ifndef NO_DIAGRAM 
#include "BinTree.hh"
#include<iostream>
#endif
using namespace std;

class Mensaje {

	private:

		string m, ida;
        BinTree<char> arboliko;

	public:

	//Constructoras 

  		/** @brief Constructora de un mensaje. 

      		Se ejecuta automáticamente al declarar un mensaje.
      		\pre <em> Un string del mensaje m</em>
      		\post El resultado es un mensaje de string m.
      	*/
		Mensaje(string ida1);

	//Modificadoras

		/** @brief Accede al string mensaje y devuelve su char de posición pos.

            \pre <em>Un mensaje no vacío y un entero pos >= 0</em>
            \post Devuelve el char de posición pos del mensaje con identificador idm.
        */
        char devolver_char(int pos);

        /** @brief Lee el número de bloques crea el árbol y codifica el mensaje por permutación.

      		\pre <em>El mensaje en el que estamos no está vacío</em>
      		\post Codifica el mensaje m por permutación y lo imprime.
      	*/
        void codipermu();

        /** @brief Lee el número de bloques crea el árbol y decodifica el mensaje por permutación.

      		\pre <em>El mensaje en el que estamos no está vacío</em>
      		\post Decodifica el mensaje m por permutación y lo imprime.
      	*/
        void decopermu();

        void lm();

        void codipermu(int b);

		string devuelveida();

    BinTree<char> creararbol(int inicio, int fin);

        void imprimearbol();

};
#endif
