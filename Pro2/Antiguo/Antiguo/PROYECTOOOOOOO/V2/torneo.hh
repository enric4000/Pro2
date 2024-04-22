/** @file torneo.hh
    @brief Especificación de la clase torneo 
*/

#ifndef _TORNEO_HH_
#define _TORNEO_HH_


#include "ranking.hh"
#ifndef NO_DIAGRAM
#include "torneo.cc"
#include "BinTree.hh"
#include <iostream>
#include <utility>
#endif
using namespace std;

class torneo {

	private:

		int categoria;
		string nombre;
		BinTree<pair <jugador, jugador>> jtorneos;
	
	public:
	//Constructoras 

  		/** @brief Creadora por defecto. 

      		Se ejecuta automáticamente al declarar un torneo.
      		\pre <em>un pair con el nombre y categoria del circuito</em>
      		\post El resultado es un torneo de categoria c sin jugadores
  		*/  
		torneo(const pair<string, int> &par1);

	 //Modificadoras
		
		/** @brief empieza el torneo, entran y se tratan los resultados
			\pre ranking de jugadores
			\post actualiza el ranking y el torneo
		*/
		void iniciatorneo(ranking &rank);
		
		/** @brief consulta el torneo y saca los resultados
			\pre ranking de jugadores
			\post saca los resultados del torneo por la terminal
		*/
		void finalizatorneo(ranking &rank);
};
#endif
