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
