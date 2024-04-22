#include "CMensajes.hh"

CMensajes::CMensajes(const int &M, CAlfabetos &alfas){
    this->M = M;
    if(M != 0){

        string idm, ida;
        getline(cin, idm);

        for(int i = 0; i < M; ++i) {
            getline(cin, idm);
            cin >> idm;
            cin >> ida;
            Mmensas.insert(make_pair(idm, Mensaje(ida)));
            alfas.incrementa(ida);
        }
    }

}

void CMensajes::nm(CAlfabetos &alfas,string idm, string ida){
    if(alfas.existe(ida)){
        map<string, Mensaje>::iterator it = Mmensas.find(idm);
        if(it == Mmensas.end()) {
            Mmensas.insert(make_pair(idm, Mensaje(ida)));
            ++M;
            cout << M << endl;
            alfas.incrementa(ida);
        }
        else cout << "error: ya existe un mensaje con ese identificador" << endl;
    }
}

void CMensajes::bm(string idm, CAlfabetos &alfas){

    map<string, Mensaje>::iterator it = Mmensas.find(idm);
    if(it != Mmensas.end()) {
        alfas.decrementa(it->second.devuelveida());
        Mmensas.erase(it);
        --M;
        cout << M << endl;
    }
    else cout << "error: el mensaje no existe" << endl;
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


void CMensajes::codisusguard( CAlfabetos &alfas, string idm, string clave){
    char a = '\"';
    string ida;
    map<string, Mensaje>::iterator it = Mmensas.find(idm);
    if(it == Mmensas.end()) cout << "error: el mensaje no existe" << endl;
    else{

        ida = it->second.devuelveida();
        int j = 0;
        map<string, Alfabeto>::iterator it1 = alfas.devuelveit(ida);
        if(alfas.compruebaespe(ida)){
            for(int i = 0; a > 0 ;++i){
                cout << a;
                a = it->second.devolver_char(i);
                a = alfas.codisusespe(it1, a, clave[j]);
                ++j;
                if(j  == clave.size()) j = 0;
            }
            cout << "\"" << endl;
        }
        else{
            for(int i = 0; a > 0 ;++i){
                cout << a;
                a = it->second.devolver_char(i);
                a = alfas.codisus(it1, a, clave[j]);
                ++j;
                if(j  == clave.size()) j = 0;
            }
            cout << "\"" << endl;
        }

    }

}

void CMensajes::codisus(CAlfabetos &alfas, string ida, string clave, string m){
    char a = '\"';

    if(alfas.existe(ida)){
    if(alfas.compruebaespe(ida)){  
        int j = 0;
        map<string, Alfabeto>::iterator it = alfas.devuelveit(ida);
        for(int i = 0; i < m.size(); ++i){
            cout << a;
            a = alfas.codisusespe(it, m[i], clave[j]);
            ++j;
            if(j  == clave.size()) j = 0;
        }

        cout << a << "\"" << endl;
    }
    else{
        int j = 0;
        map<string, Alfabeto>::iterator it = alfas.devuelveit(ida);
        for(int i = 0; i < m.size(); ++i){
            cout << a;
            a = alfas.codisus(it, m[i], clave[j]);
            ++j;
            if(j  == clave.size()) j = 0;
        }

        cout << a << "\"" << endl;

    }
    }


}
