#include "CMensajes.hh"

CMensajes::CMensajes(const int &M, CAlfabetos &alfas){

    string idm, ida;

    for(int i = 0; i < M; ++i) {
        cin >> idm >> ida;
        Mmensas.insert(make_pair(idm, Mensaje(ida)));
        alfas.incrementa(ida);
    }

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
