#include <iostream>
#include "BinTree.hh"
#include "ParInt.hh"
#include "BinTreeIOParInt.hh"
using namespace std;

int llegirbinparell(const BinTree<ParInt> y,int x, int& z, int p) {
    
    if(p != -1) return p;

    ParInt i;
    if(not y.empty()) {
        
        i = y.value();
        if(i.primer() == x) {
            p = i.segon();
            return p;
        }
        
        ++z;
        
        if(not y.left().empty() and p == -1) {
            p = llegirbinparell(y.left(), x, z, p);
            if(p != -1) return p;
            }
        if(not y.right().empty() and p == -1) {
            p = llegirbinparell(y.right(), x, z, p);
            if(p!= -1) return p;
            }

        --z;
        return p;
    }
    return p;
}

int main(){

    BinTree<ParInt> c;
    read_bintree_parint(c);
    
    int x;
    while(cin >> x){
        
        int z = 0, p = -1;
        p = llegirbinparell(c, x, z, p);
        if(p != -1) cout << x << " " << p << " " << z << endl;
        else cout << -1 << endl;
        
    }
}
