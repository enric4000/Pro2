#include "CMensajes.hh"

CMensajes::CMensajes(const int &M, CAlfabetos &alfas){

    string idm, ida;
    this->M = M;
    for(int i = 0; i < M; ++i) {
        cin >> idm >> ida;
        Mmensas.insert(make_pair(idm, Mensaje(ida)));
        alfas.incrementa(ida);
        getline(cin, idm);
    }

}

void CMensajes::nm(string idm, string ida){

    map<string, Mensaje>::iterator it = Mmensas.find(idm);
    if(it == Mmensas.end()) {
        Mmensas.insert(make_pair(idm, Mensaje(ida)));
        ++M;
    }
    else cout << "ERROR" << endl;
}

void CMensajes::bm(string idm, CAlfabetos &alfas){

    map<string, Mensaje>::iterator it = Mmensas.find(idm);
    if(it != Mmensas.end()) {
        alfas.decrementa(it->second.devuelveida());
        Mmensas.erase(it);
        --M;
    }
    else cout << "ERROR" << endl;
}

void CMensajes::lm(){
    int i = 1;
    map<string, Mensaje>::iterator it;
    for(it = Mmensas.begin(); it != Mmensas.end(); ++it){

        cout << i << ". " << it->first << endl;
        it->second.lm();
        ++i;
    }

}
