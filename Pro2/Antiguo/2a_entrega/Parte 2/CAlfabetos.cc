#include "CAlfabetos.hh"

CAlfabetos::CAlfabetos(const int &A){
    string ida;
    for(int i = 0; i < A; ++i) {
        getline(cin, ida);
        Malfas.insert(make_pair(ida, Alfabeto()));
    }

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
