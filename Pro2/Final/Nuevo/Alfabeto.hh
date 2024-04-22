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
      		\pre <em> Cert </em>
      		\post El resultado es un alfabeto con string a leído, el número de mensajes o Nummensa = 0 y el bool especial true o false según lo sea.
      	*/
		Alfabeto();

	//Modificadoras

        /** @brief Incrementa en uno su número de mensajes.

            \pre <em> Cert </em>
            \post El entero Nummensa se incrementa en 1.
        */
        void incrementa();

        /** @brief Decrementa en uno su número de mensajes.

            \pre <em> Cert </em>
            \post El entero Nummensa se decrementa en 1.
        */
        void decrementa();

        /** @brief Escribe el Alfabeto.

            \pre <em> La string a no está vacía </em>
            \post Escribe el alfabeto de una forma o otra según si es especial o no, y imprime también el entero Nummensa.
        */
        void escribir_alfabeto()const;

        /** @brief Devuelve si es especial o no.

            \pre <em> Cert </em>
            \post Retorna el valor del bool especial.
        */
        bool esespecial() const;

        /** @brief Devuelve un booleano dependiendo de si le quedan mensajes o no.

            \pre <em> Cert </em>
            \post Retorna si Nummensa > 0 o no.
        */
        bool comprobarmens() const;

        /** @brief Codifica el char m con c y la string a del alfabeto normal.

            \pre <em> La string a del alfabeto no está vacía y los char m y c no están vacíos y existen en a. </em>
            \post Retorna un char resultado de la codificación.
        */
        char codificar_sustitucion(char m,char c) const;

        /** @brief Codifica el char m con c y la string a del alfabeto especial.

            \pre <em> La string a del alfabeto no está vacía y los char m y c no están vacíos y existen en a. </em>
            \post Retorna un char resultado de la codificación.
        */
        char codificar_sustitucion_especial(char m,char c) const;

        /** @brief  Decodifica el char m con c y la string a del alfabeto normal.

            \pre <em> La string a del alfabeto no especial no está vacía y los char m y c no están vacíos y existen en a. </em>
            \post Retorna un char resultado de la decodificación.
        */
        char decodificar_sustitucion(char m, char c) const;

        /** @brief Decodifica el char m con c y la string a del alfabeto especial.

            \pre <em> La string a del alfabeto especial no está vacía y los char m y c no están vacíos y existen en a. </em>
            \post Retorna un char resultado de la decodificación.
        */
        char decodificar_sustitucion_especial(char m, char c) const;
};
#endif
