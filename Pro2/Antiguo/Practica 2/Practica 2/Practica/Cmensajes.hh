/** @file Cmensajes.hh
    @brief Especificación de la clase conjunto de mensajes
*/

#ifndef _CMENSAJES_HH_
#define _CMENSAJES_HH_


#include "mensaje.hh"
#ifndef NO_DIAGRAM 
#include <map>
#endif
using namespace std;

class Cmensajes {

	private:

		int M;
		map<string, mensaje> Cmensas;
	public:

	//Constructoras 

  		/** @brief Constructora con número de mensajes. 

      		Se ejecuta automáticamente al declarar un conjunto de mensajes.
      		\pre <em>un numero inicial de mensajes C</em>
      		\post El resultado es un conjunto de M mensajes
      	*/
		Cmensajes(const int &M);

    //Modificadoras
        /** @brief Lee y añade un mensaje.

      		\pre <em>Cert C</em>
      		\post El map de Cmensajes con el nuevo mensaje incluido.
      	*/
        void nm();

         /** @brief Lee un idm y borra ese mensaje.

      		\pre <em>Cert C</em>
      		\post El map de Cmensajes sin el mensaje de identificador idm.
      	*/
        void bm();

        /** @brief Lista todos los mensajes.

      		\pre <em>Cert C</em>
      		\post Saca por la terminal todos los mensajes.
      	*/
        void lm();

        /** @brief Lee el idm y entra a su clase.

      		\pre <em>Cert C</em>
      		\post Entra a codificar del mensaje idm por permutación.
      	*/
        void csg();

        /** @brief Lee un mensaje y declara un mensaje, y entra a él.

      		\pre <em>Cert C</em>
      		\post Entra a codificar del mensaje leido por sustitución.
      	*/
        void cl();

        /** @brief Lee el idm y entra a su clase.

      		\pre <em>Cert C</em>
      		\post Entra a codificar del mensaje idm por permutación.
      	*/
        void cpg();

        /** @brief Lee un mensaje, declara un mensaje, y entra a él.

      		\pre <em>Cert C</em>
      		\post Entra a codificar del mensaje leido por permutación.
      	*/
        void cp();

        /** @brief Lee un mensaje codificado, declara un mensaje, y entra a él.

      		\pre <em>Cert C</em>
      		\post Entra a decodificar el mensaje leido por sustitución.
      	*/
        void ds();

        /** @brief Lee un mensaje codificado, declara un mensaje, y entra a él.

      		\pre <em>Cert C</em>
      		\post Entra a codificar del mensaje leido por permutación.
      	*/
        void dp();
};
#endif
