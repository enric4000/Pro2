#include <iostream>
#include <queue>
#include "ParInt.hh"
#include "CuaIOParInt.hh"

using namespace std;

int main() {
    
    ParInt p;
    queue<ParInt> a;
    queue<ParInt> b;
    int cont1 = 0, cont2 = 0;
    
    

    while(p.llegir()) {
        
        if(cont1 <= cont2) {   
            a.push(p);
            cont1 += p.segon();
        }
        else {
            
            b.push(p);
            cont2 += p.segon();
        }
    }

    
    escriureCuaParInt(a);
    cout << endl;
    escriureCuaParInt(b);
}
