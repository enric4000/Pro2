#include <iostream>
#include <vector>
#include "jugador.hh"
using namespace std;

	jugador::jugador(string nomb){
     
        nombre = nomb;
        Ps = 0;
        Ts = 0;
        WM = 0;
        LM = 0;
        WS = 0;
        LS = 0;
        WG = 0;
        LG = 0;
        
    }
    
    void jugador::sumatorneo(string t, int p){
        
         map<string, int>::const_iterator it = torneosdej.find(t);
         if(it != torneosdej.end()) {
             Ps -= it->second;
             Ps += p;
         }
         else torneosdej[t] = p;
        
    }
    
    void jugador::restatorneo(const string t){
        
        map<string, int>::const_iterator it = torneosdej.find(t);
        puntos -= it->second;
        torneosdej.erase(it);
    }
    
    int jugador::sacapuntos(){
        
        return puntos;
        
    }
    
    void jugador::consulta(){
        
        cout << " Ps:" << Ps<< " Ts:" << Ts << " WM:" << WM << " LM:" << LM << " WS:" << WS << " LS:" << LS << " WG" << WG << " LG:" << LG << endl;
        
    }
