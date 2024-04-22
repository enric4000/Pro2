/** @file alfabeto.hh
    @brief Especificación de la clase alfabeto
*/

#ifndef _ALFABETO_HH_
#define _ALFABETO_HH_

#ifndef NO_DIAGRAM 
#include <vector>
#include <iostream>
#endif
using namespace std;

class alfabeto {

	private:
		string a;
        vector<vector<char>> mat;
	public:

	//Constructoras 

  		/** @brief Constructora de un alfabeto. 

      		Se ejecuta automáticamente al declarar un alfabeto.
      		\pre <em> Un alfabeto a C</em>
      		\post El resultado es un alfabeto
      	*/
		alfabeto(string a);

	//Modificadoras



        /** @brief Lee la clave y codifica m.

      		\pre <em>Un mensaje m</em>
      		\post Saca por pantalla el mensaje m codificado con su clave.
      	*/
        void CAcs(string m);
};
#endif
