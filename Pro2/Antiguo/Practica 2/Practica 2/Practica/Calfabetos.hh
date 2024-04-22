/** @file Calfabetos.hh
    @brief Especificación de la clase conjunto de alfabetos
*/

#ifndef _CALFABETOS_HH_
#define _CALFABETOS_HH_


#include "alfabeto.hh"
#ifndef NO_DIAGRAM 
#include <map>
#endif
using namespace std;

class Calfabetos {

	private:

		int A;
		map<string, alfabeto> Malfas;
	public:

	//Constructoras 

  		/** @brief Constructora con número de alfabetos. 

      		Se ejecuta automáticamente al declarar un conjunto de alfabetos.
      		\pre <em>un numero inicial de alfabetos C</em>
      		\post El resultado es un conjunto de A alfabetos
      	*/
		Calfabetos(const int &A);
    //Modificadoras

        /** @brief Lee y añade un alfabeto.

      		\pre <em>Cert C</em>
      		\post El map de Calfabetos con el nuevo alfabeto incluido.
      	*/
        void na();

        /** @brief Lee un ida y borra ese alfabeto.

      		\pre <em>Cert C</em>
      		\post El map de Calfabetos sin el alfabeto de identificador ida.
      	*/
        void ba();

        /** @brief Lista todos los alfabetos.

      		\pre <em>Cert C</em>
      		\post Saca por la terminal todos los alfabetos.
      	*/
        void la();

        /** @brief Entra al alfabeto ida a decodificar el mensaje.

      		\pre <em>Un mensaje m y un identificador de alfabeto ida C</em>
      		\post Entra a codificar el mensaje de alfabeto ida.
      	*/

        void CAcs(string m, string ida);

};
#endif
