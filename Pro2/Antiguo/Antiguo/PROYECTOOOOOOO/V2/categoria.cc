#include <iostream>
#include <vector>
using namespace std;

    categoria::categoria(const string nombre, const int o){
        
        nombre = string;
        m = o;
        
    }
    
    void categoria::añadirpuntosnivel(int K){
        
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
