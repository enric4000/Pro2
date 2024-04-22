#include "CMensajes.hh"

CMensajes::CMensajes(const int &M, CAlfabetos &alfas){
    this->M = M;
    Mmensas.clear();
    if(M != 0){

        string idm, ida;
        for(int i = 0; i < M; ++i) {
            cin >> idm;
            cin >> ida;
            Mmensas.insert(make_pair(idm, Mensaje(ida)));
            alfas.incrementa(ida);
        }
    }

}

bool CMensajes::nm(string &idm, string &ida){

    map<string, Mensaje>::iterator it = Mmensas.find(idm);
    if(it == Mmensas.end()) {
        Mmensas.insert(make_pair(idm, Mensaje(ida)));
        ++M;
        cout << M << endl;
        return true;
    }
    else {
        
        cin.ignore();
        getline(cin, idm);
        cout << "error: ya existe un mensaje con ese identificador" << endl;
        return false;
    }
}

void CMensajes::bm(string &idm, CAlfabetos &alfas){

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


void CMensajes::codisusguard( CAlfabetos &alfas, string &idm, const string &clave){
    string ida = "";
    map<string, Mensaje>::iterator it = Mmensas.find(idm);
    if(it == Mmensas.end()) cout << "error: el mensaje no existe" << endl;
    else{

        ida = it->second.devuelveida();
        int j = 0;
        alfas.buscaida(ida);
        int size = it->second.sice();
        if(alfas.compruebaespe(ida)){
            string c = "";
            for(int i = 0; i < size ; ++i){
                c += alfas.codisusespe(it->second.devolver_char(i), clave[j]);
                ++j;
                if(j  == clave.size()) j = 0;
            }
            cout << '"' << c << '"' << endl;;
        }
        else{
            string c = "";
            for(int i = 0; i < size ;++i){
                c += alfas.codisus(it->second.devolver_char(i), clave[j]);
                ++j;
                if(j  == clave.size()) j = 0;
            }
            cout << '"' << c << '"' << endl;
        }

    }

}

void CMensajes::codisus(CAlfabetos &alfas, string &ida, const string &clave, const string &m) const{

    if(alfas.existe(ida)){
    if(alfas.compruebaespe(ida)){  
        int j = 0;
        alfas.buscaida(ida);
        string c = "";
        for(int i = 0; i < m.size(); ++i){
            c += alfas.codisusespe(m[i], clave[j]);
            ++j;
            if(j  == clave.size()) j = 0;
        }

        cout << '"' << c << '"' << endl;
    }
    else{
        int j = 0;
        alfas.buscaida(ida);
        string c = "";
        for(int i = 0; i < m.size(); ++i){
            c += alfas.codisus(m[i], clave[j]);
            ++j;
            if(j  == clave.size()) j = 0;
        }
        cout << '"' << c << '"' << endl;

    }
    }


}

void CMensajes::codipermu(int b) const{
    Mensaje m;
    m.codipermu(b);

}

void CMensajes::codipermuguard(string &idm, int b){

    map<string, Mensaje>::iterator it = Mmensas.find(idm);
    if(it != Mmensas.end()) {
        it->second.codipermu(b);
    }
    else cout << "error: el mensaje no existe" << endl;

}

void CMensajes::decopermu(int b) const{
    Mensaje m;
    m.codipermu(b);
}