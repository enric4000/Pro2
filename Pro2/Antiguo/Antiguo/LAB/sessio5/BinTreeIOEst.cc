#include "BinTreeIOEst.hh"
#include <iostream>


void read_bintree_est(BinTree<Estudiant>& a){
    
    int z;
    double y;
    cin >> z >> y;
    if(z != 0){
        Estudiant x(z);
        if(y > -1) x.afegir_nota(y);
        BinTree <Estudiant> l;
        read_bintree_est(l);
        BinTree <Estudiant> r;
        read_bintree_est(r);
        a = BinTree<Estudiant>(x,l,r);
    }
}
