#include <iostream>
#include <vector>
#include "categoria.hh"
using namespace std;
    
    categoria::categoria(){}
    categoria::categoria(const string& nomb){
        
        nombre = nomb;
        
    };
    
    void categoria::anadirpuntosnivel(int K){
        
        puntnivel.resize(K);
        int x;
        for(int i = 0; i < K; ++i){
            cin >> x;
            puntnivel[i] = x;
            
        }
    }
        
    void categoria::sacacategoria() {
        
        cout << nombre;
        for(int i = 0; i < puntnivel.size(); ++i) {
            
            cout << " " << puntnivel[i];
            
        }
        cout << endl;
}
