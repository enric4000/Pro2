#include "Ccategoria.hh"
#include <vector>
#include <iostream>

using namespace std;

    Ccategoria::Ccategorias(const int &C){
        
        v.resize(C);
        
        string nombre;
        int x;
        
        for(int k = 0; k < C; ++k){
            cin >> nombre >> x;
            v[k].categoria(nombre, x);
        }
    }
    
    void Ccategoria::añadirpuntosnivel(int C, int K){
        
        for(int j = 0; j < C; ++j){
            
            v[0].añadirpuntosnivel(K);
            
        }
    }
   
    void Ccategoria::lc() {
        for(int i = 0; i < v.size(); ++i){
        
            cout << v[i].sacacategoria();
            
        }   
    }
