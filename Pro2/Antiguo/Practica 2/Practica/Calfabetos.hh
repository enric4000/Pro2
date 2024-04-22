/** @file Ccategorias.hh
    @brief Especificación de la clase conjunto de alfabetos
*/

#ifndef _CALFABETOS_HH_
#define _CALFABETOS_HH_


#include "alfabeto.hh"
#ifndef NO_DIAGRAM 
#include <set>
#endif
using namespace std;

class Calfabetos {

	private:

		int A;
		set<alfabeto> Calfabetos;
	public:

	//Constructoras 

  		/** @brief Constructora con número de alfabetos. 

      		Se ejecuta automáticamente al declarar un conjunto de alfabetos.
      		\pre <em>un numero inicial de alfabetos C</em>
      		\post El resultado es un conjunto de A alfabetos
      	*/
		Calfabetos(const int &A);

};
#endif