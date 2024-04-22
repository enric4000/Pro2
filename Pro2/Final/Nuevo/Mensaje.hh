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

	//Modificadoras
		
		/** @brief Crea un arbol ya con los nodos ya invertidos en posición.

            \pre <em> El mensaje no esta vacío. </em>
            \post Devuelve el arbol creado, ya sea el completo, una hoja o una rama dependiendo del caso.
        */
    	BinTree<char> crea_arbol(int valor, int posinicio, int posfinal) const;
		
		/** @brief Imprime el arbol creado anteriormente en inorden.

            \pre <em> El arbol tiene que existir. </em>
            \post El arbol se ha imprimido en inorden por la terminal.
        */
        void imprime_arbol(const BinTree<char> &arbol) const;

	public:

	//Constructoras 

  		/** @brief Constructora de un mensaje con ida. 

      		Se ejecuta automáticamente al declarar un mensaje con una string por parámetro.
      		\pre <em> Un string ida no vacío. </em>
      		\post El resultado es un mensaje de string m leído de la terminal y this->ida = ida.
      	*/
		Mensaje(string ida);

		/** @brief Constructora de un mensaje sin parámetros. 

      		Se ejecuta automáticamente al declarar un mensaje sin parámetros.
      		\pre <em> Cierto </em>
      		\post El resultado es un mensaje con la string m leído de la terminal y ida ="".
      	*/
		Mensaje();

	//Modificadoras

		/** @brief Accede al string m del mensaje y devuelve su size().

            \pre <em> Cierto </em>
            \post Devuelve el size de m.
        */
		int sice();

		/** @brief Escribe el mensaje por la terminal.

            \pre <em> Las strings m y ida no son vacías. </em>
            \post Saca por la terminal las strings ida y m.
        */
        void escribir_mensaje();


		/** @brief Devuelve el ida del mensaje.

            \pre <em> La string ida del mensaje no está vacía. </em>
            \post Retorna la string ida del mensaje.
        */
		string devuelve_ida();

		/** @brief Accede al string m de mensaje y devuelve su char de posición pos.

            \pre <em> La string m de mensaje no está vacía y el entero pos >= 0. </em>
            \post Retorna el char de m de posición pos del mensaje.
        */
        char devolver_char(int pos) const;

 		/** @brief Crea el árbol de la string m con b y lo imprime.

      		\pre <em> La string m del mensaje no está vacía y el entero b >= 0 . </em>
      		\post Imprime por la terminal el mensaje codificado o decodificado con comillas.
      	*/
        void codificar_permutacion(int b) const;

};
#endif
