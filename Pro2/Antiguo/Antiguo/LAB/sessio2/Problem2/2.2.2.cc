#include "Estudiant.hh"
#include <vector>
#include <iostream>
using namespace std;

void sacavec(vector <Estudiant>& s) {
    
    for (int i = 0; i < s.size(); ++i) {
        
        if(s[i].te_nota()) {
            
            cout << s[i].consultar_DNI() << " " << s[i].consultar_nota() << endl;
        }
        else  cout << s[i].consultar_DNI() << " NP" << endl;
    }
    
}

int main () {

    int n, x = -1, z = 0;
    double y = 0;
    cin >> n;
    
    vector<Estudiant> v(n);
    
    cin >> x;
    v[0] = Estudiant(x);
    cin >> y;
    if(y > -0.01 and y <10.01) v[0].afegir_nota(y);
    
    
    for(int i = 1; i < n; ++i){
        
        cin >> x;
        v[i] = Estudiant(x);
        cin >> y;
        if(y > -0.01 and y <10.01) v[i].afegir_nota(y);
        if(v[i - 1].consultar_DNI() != v[i].consultar_DNI()) ++z;
        
    }
    
    vector<Estudiant> simpli(z);
    
    if (z > 1){
        
       simpli[0] = Estudiant(v[0].consultar_DNI());
       simpli[0].afegir_nota(v[0].consultar_nota());

        int o = 1;
        for(int i = 1; i < n; ++i){
            
            if(v[i - 1].consultar_DNI() == v[i].consultar_DNI()) {
               
                if(v[i].te_nota() and v[i - 1].te_nota()) {
                    
                    if(v[i - 1].consultar_nota() < v[i].consultar_nota()) simpli[o].modificar_nota(v[i].consultar_nota());
                }
            }
            
            else {
                
                simpli[o] = Estudiant(v[i].consultar_DNI());
                simpli[o].afegir_nota(v[i].consultar_nota());
                ++o;
                
            }
            
        }
    }
    
    sacavec(simpli);
}
