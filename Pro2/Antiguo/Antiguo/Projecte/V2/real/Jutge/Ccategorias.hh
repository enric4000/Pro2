/** @file Ccategorias.hh
    @brief Especificación de la clase conjunto de categorias
*/

#ifndef _CCATEGORIAS_HH_
#define _CCATEGORIAS_HH_


#include "categoria.hh"
#ifndef NO_DIAGRAM
#include <vector>
#include <iostream>
#endif
using namespace std;

class Ccategorias {

	private:

		int c;
		vector<categoria> v;
	public:

	//Constructoras 

  		/** @brief Creadora por defecto. 

      		Se ejecuta automáticamente al declarar un conjunto de categorias.
      		\pre <em>un numero iunicial de categorias C</em>
      		\post El resultado es un conjunto de C categorias
      	*/
		Ccategorias(const int &C, const int &K);

	 //Modificadoras
		

		/** @brief lee la lista de categorias y las escribe
			\pre cierto
			\post saca todas las categorias por la terminal
		*/
		void lc();
		void sacacategoria(const int i);

		int C();
};
#endif
