#include <iostream>
#include "BinTree.hh"
#include "Estudiant.hh"
#include "BinTreeIOEst.hh"
#include <queue>
using namespace std;


int llegirbinparell(const BinTree<Estudiant> y,int x, int& z, queue<BinTree<Estudiant>>& a, int& j) {
    
    j *= 2;

    if(not y.left().empty()) {
        ++z;
        a.push(y.left());
        if(y.left().value().consultar_DNI() == x) {
            

            if(y.left().value().te_nota()) return y.left().value().consultar_nota();
            else return -1;


        }
    }
    else ++j;
    
    if(not y.right().empty()) {
        ++z;
        a.push(y.right());
        if(y.right().value().consultar_DNI() == x) {
           

            if(y.right().value().te_nota()) return y.right().value().consultar_nota();
            else return -1;
        }
        
    }
    else ++j;

    a.pop();
    if(a.size() > 0) return llegirbinparell(a.front(), x, z, a, j);
    else return -2;
}

int main(){

    BinTree<Estudiant> c;
    read_bintree_est(c);
    
    int x;
    while(cin >> x){
        
        int z = 0, nota, j = 0;
        queue<BinTree<Estudiant>> a;
        a.push(c);
        if(c.value().consultar_DNI() == x) cout << x << " " << 0 << " " << c.value().consultar_nota() << endl;
        else {
            nota = llegirbinparell(c, x, z, a, j);
            int i = 0;
            z += j;
            if(z%2 == 1) ++z;
            while(z > 1) {
                z /= 2;
                ++i;
            }
            if(nota != -2) cout << x << " " << i << " " << nota << endl;
            else cout << x << " " << -1 << endl;
            
        }
    }
}
