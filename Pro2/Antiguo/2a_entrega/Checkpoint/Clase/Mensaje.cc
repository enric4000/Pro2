#include "Mensaje.hh"

Mensaje::Mensaje(string ida1){
    ida = ida1;
    getline(cin, ida1);
    getline(cin, this->m);
}


void Mensaje::lm(){

    cout << ida << endl << "\"" << m << "\"" << endl;

}

string Mensaje::devuelveida(){

    return ida;

}

char Mensaje::devolver_char(int pos){

    if(pos < m.size()) return m[pos];
    else return -1;

}
void Mensaje::codipermu(int b){

    if(b >= m.size()){

        creararbol(0, m.size()-1);
        imprimearbol();

    }
    else{

        for(int i = 0; i < b; i += m.size()/b){

            if(i + m.size()/b > m.size()){
                arboliko = creararbol(i, m.size()-1);
                imprimearbol();
            }
            else{
                creararbol(i, i + m.size()/b);
                imprimearbol();

            }
        }

    }
}

BinTree<char> Mensaje::creararbol(int inicio, int fin){
    if(inicio != fin) {
        BinTree<char> izqui = creararbol(inicio, fin/2);
        if(inicio - fin > 1){
            BinTree<char> dere = creararbol(fin/2 + 1, fin);
            return BinTree<char> (m[fin/2], izqui, dere);
        }
        else{
            BinTree<char> dere;
            return BinTree<char> (m[fin/2], izqui, dere);
        }

    }
    else return BinTree<char> (m[fin]);

}

void Mensaje::imprimearbol(){


}
