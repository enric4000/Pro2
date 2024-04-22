#include <vector>
#include <iostream>
#include "Ccategorias.hh"
#include "categoria.hh"

using namespace std;
   
    Ccategorias::Ccategorias(const int &C,const int &K){
        c = C;
        v.resize(C);
        string x;
        
        for(int l = 0; l < C; ++l){
            cin >> x;
            categoria cat(x);
            v[l] = cat;
        }
        if(C != 0){
            for(int j = 0; j < C; ++j){
            
                v[j].anadirpuntosnivel(K);
            
            }
        }
    }
    void Ccategorias::sacacategoria(const int i){

        v[i - 1].sacanom();
    }
   
    void Ccategorias::lc() {
        for(int i = 0; i < v.size(); ++i){
        
            v[i].sacacategoria();
            
        }   
    }
    int Ccategorias::C(){return c;}
