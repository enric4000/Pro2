#include "BinTreeIOParInt.hh"
#include <iostream>


void read_bintree_parint(BinTree<ParInt>& a){
    
    ParInt x;
    
    if(x.llegir()) {
        BinTree <ParInt> l;
        read_bintree_parint(l);
        BinTree <ParInt> r;
        read_bintree_parint(r);
        a = BinTree<ParInt>(x,l,r);
    }
}

void write_bintree_parint(const BinTree<ParInt>& a){
    
    if(not a.empty()) {
        
        ParInt x = a.value();
        write_bintree_parint(a.left());
        cout << x.segon() << endl;
        write_bintree_parint(a.right());
    }
}
