/** @file ranking.hh
    @brief Especificación de la clase ranking
*/

#ifndef _RANKING_HH_
#define _RANKING_HH_


#include "jugador.hh"
#ifndef NO_DIAGRAM 
#include <list>
#include <iostream>
#endif
using namespace std;

class ranking {

	private:

		list <jugador> l;
	public:
	//Constructoras 

  		/** @brief Creadora por defecto. 

      		Se ejecuta automáticamente al declarar una ranking.
      		\pre <em>cierto</em>
      		\post El resultado es una ranking vacio
  		*/  
		ranking();



	 //Modificadoras

		/** @brief crea un jugador de nombre p
      		\pre un nombre p
      		\post el jugador añadido al ranking en último lugar
  		*/
		void aj(const string &p);


		/** @brief consulta el jugador de nombre p
      		\pre un nombre p
      		\post el nombre, la posicion del ranking y los puntos de p
  		*/
		void cj(const string &p);


		/** @brief elimina a p de la lista
      		\pre un nombre p
      		\post p no existe en el ranking
  		*/
		void bj(const string &p);


		/** @brief saca por la terminal la lista del ranking
      		\pre cierto
      		\post nombres, posiciones y puntos por orden del ranking
  		*/
		void lr();


		/** @brief crea una lista ordenada el orden alfabético y la saca por la terminal
      		\pre cierto
      		\post nombres, posiciones y puntos por orden alfabético
  		*/
		void lj();
};
#endif