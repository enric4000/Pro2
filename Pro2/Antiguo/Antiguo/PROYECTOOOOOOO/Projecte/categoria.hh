/** @file categoria.hh
    @brief Especificación de la clase categoria
*/

#ifndef _CATEGORIA_HH_
#define _CATEGORIA_HH_

#ifndef NO_DIAGRAM 
#include <iostream>
#include <vector>
#endif
using namespace std;

class categoria {

	private:

		string nombre;
		int m;
        vector <int> puntnivel;
	public:

	//Constructoras 

  		/** @brief Creadora por defecto. 

      		Se ejecuta automáticamente al declarar una categoria.
      		\pre <em>un nombre y identificador de la categoria</em>
      		\post El resultado es un categoria con nombre y identificador
      	*/
		categoria(const string nombre, const int o);


	 //Modificadoras
		
		/** @brief añade a la lista los puntos de los niveles
			\pre entran los niveles de la categoria (K) 
			\post actualiza la categoria
		*/
		void añadirpuntosnivel(int K);
        
        void sacacategoria();
};
#endif	
