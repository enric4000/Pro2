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
		map<string, Mensaje> Mmensas;
        
	public:

	//Constructoras 

  		/** @brief Constructora con un número de mensajes M. 

      		Se ejecuta automáticamente al declarar un conjunto de mensajes con parámetro M.
      		\pre <em> El entero M >= 0. </em>
      		\post El resultado es un conjunto de M mensajes.
      	*/
		CMensajes(const int &M, CAlfabetos &alfas);

    //Modificadoras

        /** @brief Lee y añade un mensaje con ida.

      		\pre <em> Las strings idm y ida no están vacías. </em>
      		\post El map de Cmensajes con el nuevo mensaje incluido o imprime un error si ya existía.
      	*/
        void nuevo_mensaje(CAlfabetos &alfas, string &idm, string &ida);

         /** @brief Borra el mensaje con identificador idm del map y decrementa el número de mensajes del alfabeto que tenía el mensaje.

      		\pre <em> El string idm y el CAlfabetos no están vacíos. </em>
      		\post El map de Cmensajes sin el mensaje de identificador idm, sino existe el mensaje con ese idm imprime un error.
      	*/
        void borrar_mensaje(string &idm, CAlfabetos &alfas);

        /** @brief Lista todos los mensajes.

      		\pre <em> Cert </em>
      		\post Saca por la terminal todos los mensajes.
      	*/
        void listar_mensajes();

        /** @brief Codifica el mensaje de identificador idm con su alfabeto y la clave, y lo hace char por char.

            \pre <em> Existe alfas, idm y clave y no están vacíos. </em>
            \post Codifica el mensaje de identificador idm por sustitución y lo imprime por pantalla o imprime un error si no existe el mensaje.
        */
        void codificar_sustitucion_guardado(CAlfabetos &alfas, string &idm, const string &clave);

        /** @brief Codifica el mensaje m con el alfabeto ida y la clave, y lo hace char por char.

            \pre <em> Existe alfas, ida, m y clave y no están vacíos. </em>
            \post Codifica el mensaje m por sustitución y lo imprime por pantalla si existe el alfabeto con identificador ida.
        */
        void codificar_sustitucion(CAlfabetos &alfas, string &ida, const string &clave, const string &m) const;

        /** @brief Crea un mensaje nuevo, y lo codifica.

            \pre <em> Un entero b no vacío. </em>
            \post Entra a codificar el mensaje leido por permutación.
        */
        void codificar_permutacion(int b) const;

        /** @brief Busca el mensaje de identificador idm y lo codifica.

            \pre <em> Un string idm y un entero b no vacío. </em>
            \post Entra a codificar el mensaje de identificador idm por permutación.
        */
        void codificar_permutacion_guardado(string &idm, int b);

        /** @brief Crea un mensaje codificado, y lo "descodifica" (realmente el proceso es codificarlo otra vez).

            \pre <em> Un entero b no vacío. </em>
            \post Entra a codificar el mensaje leido por permutación.
        */
        void decodificar_permutacion(int b) const;

};
#endif
