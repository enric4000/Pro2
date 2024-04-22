/** @file jugador.hh
    @brief Especificación de la clase jugador
*/

#ifndef _JUGADOR_HH_
#define _JUGADOR_HH_

#ifndef NO_DIAGRAM 
#include <iostream>
#include <list>
#include <utility>
#endif
using namespace std;

class jugador {

	private:

		int puntos;
		string nombre;
		list <pair <string, int> > torneosdej;

	public:

		  //Constructoras 

  		/** @brief creadora con nombre 

      		Se ejecuta automáticamente al declarar un jugador
      		\pre <em>un nombre</em>
      		\post El resultado es un jugador con nombre y puntos 0
  		*/  
		jugador(int nombre);


	 //Modificadoras

		/** @brief consulta el torneo en la lista del jugador y si no esta, añade un pair a la lista con el nombre y puntos y suma los puntos al total de p
      		\pre el nombre del torneo del jugador y los puntos del torneo
      		\post el jugador con los puntos actualizados
  		*/
		void sumatorneo(string t, int p);


		/** @brief encuentra t en la lista de j, borra los puntos del torneo a p y borra el torneo de su lista
      		\pre nombre del torneo t
      		\post el jugador con los puntos actualizados
  		*/
		void restatorneo(const string t);
        
        
        int sacapuntos();

		/** @brief consulta el juegador
      		\pre cierto
      		\post treu el nom y punts per la terminal
  		*/
		void consulta();
};
#endif
