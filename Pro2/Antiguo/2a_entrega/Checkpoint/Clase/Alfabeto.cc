#include "Alfabeto.hh"

Alfabeto::Alfabeto(){
    getline(cin, a);
    for(int i = 0; especial and i < a.size() - 1; ++i){

        if(a[i]+1 != a[i+1]) especial = false;
    }
    Nummensa = 0;

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

    return Nummensa > 0;


}

char Alfabeto::codisus(char m,char c){

        char s;
   
        int i = 0;
        int j = 0;

        for(i = 0; a[i] != c; ++i){
            if(a[j] != m) ++j;
        }
        if(a[j] != m) for(j = j; a[j] != m; ++j);
        s = a[(i+j)%a.size()];
        return s;

}

char Alfabeto::codisusespe(char m,char c){

        char s;

        s = a[(m -a[0] + c-a[0]) % a.size()];
        return s;

}

char Alfabeto::decodif(char m, char c){

    int s;

        int i = 0;
        int j = 0;
        for(i = 0; a[i] != c; ++i){
            if(a[j] != m) ++j;
        }
        if(a[j] != m) for(j = j; a[j] != m; ++j);

        s = j - i;
        if(s >= 0){
            return a[s];
        }
        else {
            return a[s+a.size()];
        }

}

bool Alfabeto::esespecial(){
    return especial;
}

char Alfabeto::decodifespe(char m, char c){

    int s;


        s = (m - c);
        if(s >= 0) {
            return a[s%a.size()];
        }
        else{
            return a[s%a.size()+a.size()];
        }

}
