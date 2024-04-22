/** @file CAlfabetos.hh
    @brief Especificación de la clase conjunto de alfabetos
*/

#ifndef _CALFABETOS_HH_
#define _CALFABETOS_HH_


#include "Alfabeto.hh"
#ifndef NO_DIAGRAM 
#include <map>
#endif
using namespace std;

class CAlfabetos {

	private:

		int A;
		map<string, Alfabeto> Malfas;
        map<string, Alfabeto>::iterator it;

	public:

	//Constructoras 

  		/** @brief Constructora con número de alfabetos. 

      	Se ejecuta automáticamente al declarar un conjunto de alfabetos.
      	\pre <em>un numero inicial de alfabetos </em>
      	\post El resultado es un conjunto de A alfabetos
      */
      CAlfabetos();
		  CAlfabetos(const int &A);
    //Modificadoras

      /** @brief Lee y añade un alfabeto.

      	\pre <em>Cert </em>
      	\post El map de Calfabetos con el nuevo alfabeto incluido.
      */
      void na(const string ida);

      
      /** @brief Lee un ida y borra ese alfabeto.

      	\pre <em>Cert</em>
      	\post El map de Calfabetos sin el alfabeto de identificador ida.
      */
      void ba(const string ida);

      /** @brief Busca el alfabeta ida y incrementa en uno su número de mensajes.

        \pre <em>Un string ida</em>
        \post Llama al alfabeto con identificador ida.
      */
      void incrementa (const string ida);

      /** @brief Busca el alfabeta ida y decrementa en uno su número de mensajes.

        \pre <em>Un string ida</em>
        \post Llama al alfabeto con identificador ida.
      */
      void decrementa(const string ida);


      /** @brief Lista todos los alfabetos.

      	\pre <em>Cert</em>
      	\post Saca por la terminal todos los alfabetos.
      */
      void listar_alfabetos();

      bool existe(string ida);

      bool compruebaespe(string ida);

      void buscaida(string ida);
        
      char codisus(char m, char c) const;

      char codisusespe(char m, char c) const;

      /** @brief Lee el mensaje codificado y el ida y entra a ese alfabeto para decodificarlo.

        \pre <em>Existe CAlfabetos y no está vacío</em>
        \post Decodifica el mensaje leido por sustitución y lo imprime por pantalla.
      */
      void decosus(string ida, string &clave, string &m);
};
#endif
