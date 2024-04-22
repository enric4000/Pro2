/** @file circuito.hh
    @brief Especificación de la clase circuito
*/

#ifndef _CIRCUITO_HH_
#define _CIRCUITO_HH_


#include "torneo.hh"
#include "ranking.hh"
#include "Ccategorias.hh"
#ifndef NO_DIAGRAM
#include <utility>
#include <iostream>
#include <map>
#endif
using namespace std;

class circuito {

	private:

		map <string, torneo> torneos;
	public:    

	//Constructoras 

  		/** @brief Creadora por defecto. 

      		Se ejecuta automáticamente al declarar un circuito.
      		\pre <em>un numero inicial de torneos T</em>
      		\post El resultado es un circuito con T torneos
  		*/  
		circuito(int T);


	 //Modificadoras
		
		/** @brief añade t en la lista de torneos con nombre t y categoria c
			\pre nombre del torneo t
			\post el torneo añadido
		*/
		void at();
		
		/** @brief borra t de la lista de torneos
			\pre nombre del torneo t
			\post el torneo eleminado
		*/
		void bt(string t);
		
		/** @brief encuentra t en la lista y inicia el torneo llamando a la función de la clase torneo
			\pre ranking y nombre del torneo t 
			\post el torneo finalizado
		*/
		void it(ranking& rank, string t);

		
		/** @brief consulta cada torneo de la lista
			\pre cierto
			\post saca todos los torneos por la terminal
		*/
		void lt();
};
#endif
