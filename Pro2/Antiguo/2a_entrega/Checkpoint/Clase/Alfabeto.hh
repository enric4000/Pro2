/** @file Alfabeto.hh
    @brief Especificación de la clase alfabeto
*/

#ifndef _ALFABETO_HH_
#define _ALFABETO_HH_

#ifndef NO_DIAGRAM 
#include <vector>
#include <map>
#include <iostream>
#include <utility>
#endif
using namespace std;

class Alfabeto {

	private:
		string a;
        int Nummensa;
        bool especial = true;

	public:

	//Constructoras 

  		/** @brief Constructora de un alfabeto. 

      		Se ejecuta automáticamente al declarar un alfabeto.
      		\pre <em> Un alfabeto a</em>
      		\post El resultado es un alfabeto
      	*/
		Alfabeto();

	//Modificadoras

        /** @brief Incrementa en uno su número de mensajes.

            \pre <em>Cert</em>
            \post El alfabeto tiene un mensaje más.
        */
        void incrementa();

        /** @brief Decrementa en uno su número de mensajes.

            \pre <em>Cert</em>
            \post El alfabeto tiene un mensaje menos.
        */
        void decrementa();

        void la();

        bool esespecial();

        bool comprobarmens();

        char codisus(char m,char c);
        char codisusespe(char m,char c);

        char decodif(char m, char c);

        char decodifespe(char m, char c);
};
#endif
