#include "Alfabeto.hh"

Alfabeto::Alfabeto(string a){
    this->a = a;
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

char Alfabeto::codisus(char m,char c){
     pair<char,char> cod(m,c);
    map<pair<char, char>,char>::iterator peta = codi.find(cod);
    if(peta == codi.end()){
        char s;
   
        int i = 0;
        int j = 0;
        for(i; m != a[i]; ++i);
        for(j; c != a[j]; ++j);
        s = a[(i+j)%a.size()];
        codi.insert(make_pair(make_pair(m, c),s));
        return s;
    }
    else return peta->second;
}

char Alfabeto::codisusespe(char m,char c){
     pair<char,char> cod(m,c);
    map<pair<char, char>,char>::iterator peta = codi.find(cod);
    if(peta == codi.end()){
        char s;

        s = a[(m - a[0] + c - a[0]) % a.size()];
        codi.insert(make_pair(make_pair(m, c),s));
        return s;

    }
    else return peta->second;
}

char Alfabeto::decodif(char m, char c){

    int s;
    map<pair<char, char>, char>::iterator it = decodi.find(make_pair(m, c));
    if(it == decodi.end()){

        int i = 0;
        int j = 0;
        for(i; a[i] != c; ++i){
            if(a[j] != m) ++j;
        }
        if(a[j] != m) for(j; a[j] != m; ++j);

        s = j - i;
        if(s >= 0){
            decodi.insert(make_pair(make_pair(m, c),a[s]));
            return a[s];
        }
        else {
            decodi.insert(make_pair(make_pair(m, c),a[s+a.size()]));
            return a[s+a.size()];
        }
        
    }
    else return it->second;

}

bool Alfabeto::esespecial(){
    return especial;
}

char Alfabeto::decodifespe(char m, char c){

    int s;
    map<pair<char, char>, char>::iterator it = decodi.find(make_pair(m, c));
    if(it == decodi.end()){

        s = (m - a[0]) - (c - a[0]);
        if(s >= 0) {
            decodi.insert(make_pair(make_pair(m, c),a[s]));
            return a[s];
        }
        else{
            decodi.insert(make_pair(make_pair(m, c),a[s+a.size()]));
            return a[s+a.size()];
        }


    }
    else return it->second;

}