/** @file CMensajes.hh
    @brief Especificación de la clase conjunto de mensajes
*/

#ifndef _CMENSAJES_HH_
#define _CMENSAJES_HH_

#include "CAlfabetos.hh"
#include "Mensaje.hh"
#ifndef NO_DIAGRAM 
#include <map>
#endif
using namespace std;

class CMensajes {

	private:

		int M;
		map<string, Mensaje> Cmensas;
	public:

	//Constructoras 

  		/** @brief Constructora con número de mensajes. 

      		Se ejecuta automáticamente al declarar un conjunto de mensajes.
      		\pre <em>un numero inicial de mensajes > 0 </em>
      		\post El resultado es un conjunto de M mensajes
      	*/
		CMensajes(const int &M);

    //Modificadoras
        /** @brief Lee y añade un mensaje.

      		\pre <em>Cert</em>
      		\post El map de Cmensajes con el nuevo mensaje incluido y devuelve el ida.
      	*/
        string nm();

         /** @brief Lee un idm, se guarda el ida y borra ese mensaje.

      		\pre <em>Cert</em>
      		\post El map de Cmensajes sin el mensaje de identificador idm y devuelve una string ida.
      	*/
        string bm();

        /** @brief Lista todos los mensajes.

      		\pre <em>Cert</em>
      		\post Saca por la terminal todos los mensajes.
      	*/
        void lm();

        /** @brief Lee el idm y entra a ese mensaje.

            \pre <em>Cert</em>
            \post Entra a codificar del mensaje idm por permutación.
        */
        void codipermuguard();

        /** @brief Lee un mensaje, declara un mensaje, y entra a él.

            \pre <em>Cert</em>
            \post Entra a codificar del mensaje leido por permutación.
        */
        void codipermu();

        /** @brief Lee una ida declara un mensaje, y entra a él.

            \pre <em>Cert</em>
            \post Entra a decodificar del mensaje leido por permutación.
        */
        void decopermu();

        /** @brief Lee el idm y entra a su clase a pedirle char por char y con el char de la misma posición de la clave entra a su alfabeto, lo codifica y los va imprimiendo.

            \pre <em>Existe CAlfabetos y no está vacío</em>
            \post Codifica el mensaje idm por sustitución y lo imprime por pantalla.
        */
        void codisusguard(const CAlfabetos &alfas);

        /** @brief Lee el mensaje y entra a su clase a pedirle char por char y con el char de la misma posición de la clave entra a su alfabeto, lo codifica y los va imprimiendo.

            \pre <em>Existe CAlfabetos y no está vacío</em>
            \post Codifica el mensaje leido por sustitución y lo imprime por pantalla.
        */
        void codisus(const CAlfabetos &alfas);

};
#endif
