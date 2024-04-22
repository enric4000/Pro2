#ifndef CLASS_ParInt_HH
#define  CLASS_ParInt_HH
#include <queue>
#include <iostream>
using namespace std;

class ParInt {

private:

  int p;
  int s;

public:

  //Constructores

ParInt();
  /* Pre:  cert */
  /* Post: el resultat es el parint (0,0) */
ParInt(int a,int b);
 /* Pre:  cert */
  /* Post: el resultat es el parint (a,b) */

  //Consultores

int primer();
  /* Pre:  cert*/
  /* Post: retorna el valor de p */
int segon();
  /* Pre:  cert*/
  /* Post: retorna el valor de s */

  //Entrada/sortida

bool llegir();
  /* Pre:  cert*/
  /* Post: llegeix dos enters i els assigna al parametre implicit, a mes, */
        /* si llegeix el parell 0 0 retorna fals, altrament retorna cert */
void escriure();
  /* Pre: cert */
  /* Post: escriu el parametre implicit per la sortida estandard */
void llegirCuaParInt(queue<ParInt>& c);
// Pre: c és buida; el canal estandar d’entrada conté un nombre
// parell d’enters, acabat pel parell 0 0
// Post: s’han encuat a c els elements llegits fins al 0 0 (no inclòs)

void escriureCuaParInt(queue<ParInt> c);
// Pre: cert
// Post: s’han escrit al canal estandar de sortida els elements de c

};
#endif
