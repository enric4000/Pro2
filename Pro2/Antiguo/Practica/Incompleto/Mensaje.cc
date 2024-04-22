#include "Mensaje.hh"

Mensaje::Mensaje(string ida1){
    ida = ida1;
    getline(cin, m);

}


void Mensaje::lm(){

        cout << ida << endl << "\"" << m << "\"" << endl;

}

string Mensaje::devuelveida(){

    return ida;

}
