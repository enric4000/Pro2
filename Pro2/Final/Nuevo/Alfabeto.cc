/** @file Alfabeto.cc
    @brief Código de la clase alfabeto
*/

#include "Alfabeto.hh"

Alfabeto::Alfabeto() {

    especial =  true;
    a = "";
    getline(cin, a);

    int k = 0;
    for (int i = 0; especial and i < a.size()/2; ++i) {

        if (a[i]+a.size()-1-k != a[a.size()-i-1]) especial = false;
        k +=2;
    }

    Nummensa = 0;
}

void Alfabeto::incrementa() {

    ++Nummensa;

}

void Alfabeto::decrementa() {

    --Nummensa;

}

void Alfabeto::escribir_alfabeto() const {

    if (especial) {

        cout << "especial [" << a[0] << ".."<< a[a.size()-1] << "] " << Nummensa << " mensajes" << endl;
    }
    else {

        cout << "normal \"" << a << "\" " << Nummensa << " mensajes" << endl;
    }
}

bool Alfabeto::esespecial() const{

    return especial;

}

bool Alfabeto::comprobarmens() const{

    return Nummensa > 0;

}

char Alfabeto::codificar_sustitucion(char m,char c) const{

    char s = '\0';
    int i, j;
    i = j = 0;

    for (i = 0; a[i] != c; ++i) {

        if (a[j] != m) ++j;
    }

    if (a[j] != m) for (j = j; a[j] != m; ++j);

    s = a[(i+j)%a.size()];

    return s;
}

char Alfabeto::codificar_sustitucion_especial(char m,char c) const{

    return a[(m -a[0] + c-a[0]) % a.size()];

}

char Alfabeto::decodificar_sustitucion(char m, char c) const{

    int s = '\0';
    int i, j;
    j = i = 0;
    for (i = 0; a[i] != c; ++i) {
        
        if (a[j] != m) ++j;
    }
    
    if (a[j] != m) for (j = j; a[j] != m; ++j);

    s = j - i;

    if (s >= 0) return a[s%a.size()];
    else return a[(s+a.size())%a.size()];
}

char Alfabeto::decodificar_sustitucion_especial(char m, char c) const {

    int s = (m - c);

    if (s >= 0) return a[s%a.size()];
    else return a[(s+a.size())%a.size()];

}
