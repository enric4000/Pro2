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

    /** @brief Constructora de CAlfabetos sin parámetros. 

      Se ejecuta automáticamente al declarar un conjunto de alfabetos.
      \pre <em> Cert </em>
      \post El resultado es un conjunto de alfabetos vacío.
    */
    CAlfabetos();

    /** @brief Constructora de CAlfabetos con número de alfabetos. 

      Se ejecuta automáticamente al declarar un conjunto de alfabetos con parámetro A.
      \pre <em> Un numero inicial de alfabetos </em>
      \post El resultado es un conjunto de alfabetos con A alfabetos.
    */
    CAlfabetos(const int &A);

  //Modificadoras

    /** @brief Lee y añade un alfabeto.

      \pre <em> Una string ida no vacía. </em>
      \post El map de Calfabetos con el nuevo alfabeto incluido.
    */
    void nuevo_alfabeto(const string ida);
    
    /** @brief Borra el alfabeto de identificador ida del map.

      \pre <em> Una string ida no vacía. </em>
      \post El map de Calfabetos sin el alfabeto de identificador ida, sino existe ese alfabeto imprime un error.
    */
    void borrar_alfabeto(const string ida);

    /** @brief Busca el alfabeto de identificador ida y entra en él para incrementarlo.

      \pre <em> Una string ida no vacía y que corresponde con un alfabeto existente. </em>
      \post El alfabeto de identificador ida con su Nummensa incrementado en 1.
    */
    void incrementa (const string ida);

    /** @brief Busca el alfabeto de identificador ida y decrementa en uno su número de mensajes.

      \pre <em> Una string ida no vacía y que corresponde con un alfabeto existente. </em>
      \post El alfabeto de identificador ida con su Nummensa decrementado en 1.
    */
    void decrementa(const string ida);

    /** @brief Lista todos los alfabetos.

      \pre <em> Cert </em>
      \post Saca por la terminal todos los alfabetos.
    */
    void listar_alfabetos();

    /** @brief Devuelve si existe o no el alfabeto.

      \pre <em> La string ida no está vacía </em>
      \post Retorna si existe el alfabeto en el mapa, el iterador del CAlfabetos it queda situado encima del alfabeto existente y, sino existe, imprime un error y it queda sobre el final.
    */
    bool existe(string ida);
    
    /** @brief Devuelve si el alfabeto de identificador ida es especial.

      \pre <em> La string ida no está vacía y corresponde con un alfabeto existente. </em>
      \post Retorna si el alfabeto de identificador ida es especial o no.
    */
    bool compruebaespe(string ida);

    /** @brief Busca el alfabeto de identificador ida.

      \pre <em> La string ida no está vacía y corresponde con un alfabeto existente </em>
      \post El iterador it queda sobre el alfabeto de identificador ida.
    */
    void buscaida(string ida);

    /** @brief Codifica el char m con el char c y el alfabeto normal apuntado por el iterador it.

      \pre <em> El char m y c no están vacíos y el iterador it está sobre el alfabeto a codificar </em>
      \post Retorna un char resultado de la codificación.
    */ 
    char codificar_sustitucion(char m, char c) const;

    /** @brief Codifica el char m con el char c y el alfabeto especial apuntado por el iterador it.

      \pre <em> El char m y c no están vacíos y el iterador it está sobre el alfabeto a codificar </em>
      \post Retorna un char resultado de la codificación.
    */ 
    char codificar_sustitucion_especial(char m, char c) const;

    /** @brief Decodifica la string m con la clave si existe el alfabeto de identificador ida.

      \pre <em> Existe CAlfabetos, ida, clave y m y no están vacíos. </em>
      \post Decodifica el mensaje leido por sustitución y lo imprime por pantalla.
    */
    void decodificar_sustitucion(string ida, string &clave, string &m);

};
#endif
