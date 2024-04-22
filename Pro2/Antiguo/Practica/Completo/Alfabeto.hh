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
        bool especial;

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

        void escribir_alfabeto()const;

        bool esespecial() const;

        bool comprobarmens() const;

        char codificar_sustitucion(char m,char c) const;
        char codificar_sustitucion_especial(char m,char c) const;

        char decodificar_sustitucion(char m, char c) const;

        char decodificar_sustitucion_especial(char m, char c) const;
};
#endif
