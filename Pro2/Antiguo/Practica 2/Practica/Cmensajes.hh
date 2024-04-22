/** @file Cmensajes.hh
    @brief Especificación de la clase conjunto de mensajes
*/

#ifndef _CMENSAJES_HH_
#define _CMENSAJES_HH_


#include "mensaje.hh"
#ifndef NO_DIAGRAM 
#include <set>
#endif
using namespace std;

class Cmensajes {

	private:

		int M;
		set<mensaje> Cmensajes;
	public:

	//Constructoras 

  		/** @brief Constructora con número de mensajes. 

      		Se ejecuta automáticamente al declarar un conjunto de mensajes.
      		\pre <em>un numero inicial de mensajes C</em>
      		\post El resultado es un conjunto de M mensajes
      	*/
		Cmensajes(const int &M);
};
#endif