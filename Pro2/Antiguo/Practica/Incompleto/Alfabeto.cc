#include "Alfabeto.hh"

Alfabeto::Alfabeto(string a){

    for(int i = 0; especial and i < a.size() - 1; ++i){

        if(a[i]+1 != a[i+1]) especial = false;
        Nummensa = 0;
    }

}

void Alfabeto::incrementa(){

    ++Nummensa;

}

void Alfabeto::decrementa(){

    --Nummensa;

}


void Alfabeto::la(){

    if(especial){

        cout << "especial [" << a[0] << ".."<< a[a.size()-1] << "] " << Nummensa << " mensajes" << endl;

    }
    else{

        cout << "normal \"";
        for(int i = 0; i < a.size(); ++i) cout << a[i];
        cout << "\" " << Nummensa << " mensajes" << endl;

    }

}

bool Alfabeto::comprobarmens(){

    if(Nummensa == 0) return false;
    else return true;

}
