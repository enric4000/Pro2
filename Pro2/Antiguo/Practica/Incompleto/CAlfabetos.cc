#include "CAlfabetos.hh"

CAlfabetos::CAlfabetos(const int &A){
    string ida, a, vacio;
    this->A = A;
    for(int i = 0; i < A; ++i) {
        getline(cin, vacio);
        cout << "q tal tt";
        getline(cin, ida);
        getline(cin, a);
        Malfas.insert(make_pair(ida, Alfabeto(a)));
        map<string, Alfabeto>::iterator it = Malfas.find(ida);
        cout << it->first << "holi" << endl;
    }

}

void CAlfabetos::na(){
    string ida;
    cin >> ida;
    string alfa;
    getline(cin,alfa);
    map<string, Alfabeto>::iterator it = Malfas.find(ida);
    if(it != Malfas.end()){

        Malfas.insert(make_pair(ida, Alfabeto(alfa)));
        ++A;
        cout << A << endl;
    }
    else cout << "error: el alfabeto ya existe" << endl;
}

void CAlfabetos::ba(){
    string ida;
    cin >> ida;
    string alfa;
    getline(cin,alfa);
    map<string, Alfabeto>::iterator it = Malfas.find(ida);
    if(it != Malfas.end()){
        if(it->second.comprobarmens()) {
            Malfas.erase(it);
            --A;
            cout << A << endl;
        }
        else cout << "error: hay mensajes guardados con el alfabeto" << endl;
    }
    else cout << "error: el alfabeto no existe" << endl;
}

void CAlfabetos::incrementa (string ida){
    map<string, Alfabeto>::iterator it = Malfas.find(ida);
    if(it != Malfas.end()){
        it->second.incrementa();
        ++A;
    }
    else cout << "ERROR" << endl;
}

void CAlfabetos::decrementa (string ida){
    map<string, Alfabeto>::iterator it = Malfas.find(ida);
    if(it != Malfas.end()) {
        it->second.decrementa();
        --A;
    }
    else cout << "ERROR" << endl;
}

void CAlfabetos::la(){
    int i = 1;
    map<string, Alfabeto>::iterator it;
    for(it = Malfas.begin(); it != Malfas.end(); ++it){

        cout << i << ". " << it->first << endl;
        it->second.la();
        ++i;
    }

}
