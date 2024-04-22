#include <vector>
#include <iostream>
#include "Ccategorias.hh"
#include "categoria.hh"

using namespace std;

    Ccategorias::Ccategorias(const int &C){
        
        v.resize(C);
        
        string x;
        
        for(int k = 0; k < C; ++k){
            cin >> x;
            categoria cat(x);
            v[k] = cat;
        }
    }
    
    void Ccategorias::anadirpuntosnivel(int C, int K){
        
        for(int j = 0; j < C; ++j){
            
            v[0].anadirpuntosnivel(K);
            
        }
    }
   
    void Ccategorias::lc() {
        for(int i = 0; i < v.size(); ++i){
        
            v[i].sacacategoria();
            
        }   
    }
