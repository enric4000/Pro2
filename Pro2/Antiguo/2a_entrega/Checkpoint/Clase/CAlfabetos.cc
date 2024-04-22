#include "CAlfabetos.hh"

CAlfabetos::CAlfabetos(const int &A){
    string ida, a;
    this->A = A;
    if(A != 0){
        getline(cin, ida);
        for(int i = 0; i < A; ++i) {
            getline(cin, ida);
            getline(cin, ida);

            Malfas.insert(make_pair(ida, Alfabeto()));
        }
        getline(cin, ida);
    }

}

void CAlfabetos::na(string ida){
    string alfa;
    getline(cin, alfa);
    it = Malfas.find(ida);
    if(it == Malfas.end()){

        Malfas.insert(make_pair(ida, Alfabeto()));
        ++A;
        cout << A << endl;
    }
    else cout << "error: el alfabeto ya existe" << endl;
}

void CAlfabetos::ba(string ida){

    it = Malfas.find(ida);
    if(it != Malfas.end()){
        if(not it->second.comprobarmens()) {
            Malfas.erase(it);
            --A;
            cout << A << endl;
        }
        else cout << "error: hay mensajes guardados con el alfabeto" << endl;
    }
    else cout << "error: el alfabeto no existe" << endl;
}

void CAlfabetos::incrementa (string ida){
    it = Malfas.find(ida);
    it->second.incrementa();
}

void CAlfabetos::decrementa (string ida){
    it = Malfas.find(ida);

    it->second.decrementa();
}

void CAlfabetos::la(){
    int i = 1;
    for(it = Malfas.begin(); it != Malfas.end(); ++it){

        cout << i << ". " << it->first << endl;
        it->second.la();
        ++i;
    }

}

bool CAlfabetos::existe(string ida){

    it = Malfas.find(ida);
    if(it == Malfas.end()) {

        cout << "error: el alfabeto no existe" << endl;
        return false;
    }
    else return true;

}
bool CAlfabetos::compruebaespe(string ida){

    it = Malfas.find(ida);
    return it->second.esespecial();

}

char CAlfabetos::codisus(char m, char c){
    if(m == -1) return -1;
    return it->second.codisus(m, c);

}

char CAlfabetos::codisusespe(char m, char c){
    if(m == -1) return -1;
    return it->second.codisusespe(m, c);

}
void CAlfabetos::buscaida(string ida){
  
    it = Malfas.find(ida);
}


void CAlfabetos::decosus(string ida, string clave, string m){

    it = Malfas.find(ida);
    if(it == Malfas.end()) cout << "error: el alfabeto no existe" << endl;
    else{
        char a = '\"';
        int j = 0;
        if(it->second.esespecial()){
            for(int i = 0; i < m.size(); ++i){

                cout << a;
                a = it->second.decodifespe(m[i], clave[j]);
                ++j;
                if(j == clave.size()) j = 0;
            }
        }
        else{
            for(int i = 0; i < m.size(); ++i){

                cout << a;
                a = it->second.decodif(m[i], clave[j]);
                ++j;
                if(j == clave.size()) j = 0;
            }
        }
        cout << a << "\"" << endl;

    }

}
