#include "Alfabeto.hh"

Alfabeto::Alfabeto(){

    getline(cin, a);
    for(int i = 0; especial and i < a.size() - 1; ++i){

        if(a[i]+1 != a[i+1]) especial = false;

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
