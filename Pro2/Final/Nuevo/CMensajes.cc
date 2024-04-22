/** @file CMensajes.cc
    @brief Código de la clase conjunto de mensajes
*/

#include "CMensajes.hh"

CMensajes::CMensajes(const int &M, CAlfabetos &alfas) {
    this->M = M;
    Mmensas.clear();
    if (M != 0) {

        string idm, ida;

        for (int i = 0; i < M; ++i) {

            cin >> idm;
            cin >> ida;

            Mmensas.insert(make_pair(idm, Mensaje(ida)));
            alfas.incrementa(ida);
        }
    }
}

void CMensajes::nuevo_mensaje(CAlfabetos &alfas, string &idm, string &ida) {
    if (alfas.existe(ida)) {
        map<string, Mensaje>::iterator it = Mmensas.find(idm);
        if (it == Mmensas.end()) {

            Mmensas.insert(make_pair(idm, Mensaje(ida)));
            alfas.incrementa(ida);	
            ++M;
            cout << M << endl;
        }
        else {
            
            cin.ignore();
            getline(cin, idm);
            cout << "error: ya existe un mensaje con ese identificador" << endl;
        }
    }
    else {
    
        cin.ignore();
        getline(cin, idm);
    }
}

void CMensajes::borrar_mensaje(string &idm, CAlfabetos &alfas) {

    map<string, Mensaje>::iterator it = Mmensas.find(idm);

    if (it != Mmensas.end()) {

        alfas.decrementa(it->second.devuelve_ida());
        Mmensas.erase(it);
        --M;
        cout << M << endl;
    }
    else cout << "error: el mensaje no existe" << endl;
}

void CMensajes::listar_mensajes() {

    int i = 1;
    map<string, Mensaje>::iterator it;

    for (it = Mmensas.begin(); it != Mmensas.end(); ++it) {

        cout << i << ". " << it->first << endl;
        it->second.escribir_mensaje();
        ++i;
    }
}

void CMensajes::codificar_sustitucion_guardado(CAlfabetos &alfas, string &idm, const string &clave) {

    string ida = "";
    map<string, Mensaje>::iterator it = Mmensas.find(idm);

    if (it == Mmensas.end()) cout << "error: el mensaje no existe" << endl;
    else {

        ida = it->second.devuelve_ida();
        int j = 0;
        alfas.buscaida(ida);
        int size = it->second.sice();

        if (alfas.compruebaespe(ida)) {

            string c = "";

            for (int i = 0; i < size ; ++i) {

                c += alfas.codificar_sustitucion_especial(it->second.devolver_char(i), clave[j]);
                ++j;
                if (j  == clave.size()) j = 0;
            }
            cout << '"' << c << '"' << endl;;
        }
        else {

            string c = "";

            for (int i = 0; i < size ;++i) {

                c += alfas.codificar_sustitucion(it->second.devolver_char(i), clave[j]);
                ++j;
                if (j  == clave.size()) j = 0;
            }
            cout << '"' << c << '"' << endl;
        }
    }
}

void CMensajes::codificar_sustitucion(CAlfabetos &alfas, string &ida, const string &clave, const string &m) const{

    if (alfas.existe(ida)) {

        if (alfas.compruebaespe(ida)) {

            int j = 0;
            string c = "";

            for (int i = 0; i < m.size(); ++i) {

                c += alfas.codificar_sustitucion_especial(m[i], clave[j]);
                ++j;
                if (j  == clave.size()) j = 0;
            }
            cout << '"' << c << '"' << endl;
        }
        else {

            int j = 0;
            string c = "";

            for (int i = 0; i < m.size(); ++i) {

                c += alfas.codificar_sustitucion(m[i], clave[j]);
                ++j;
                if (j  == clave.size()) j = 0;
            }

            cout << '"' << c << '"' << endl;
        }
    }
}

void CMensajes::codificar_permutacion(int b) const{

    Mensaje m;
    m.codificar_permutacion(b);

}

void CMensajes::codificar_permutacion_guardado(string &idm, int b) {

    map<string, Mensaje>::iterator it = Mmensas.find(idm);

    if (it != Mmensas.end()) {

        it->second.codificar_permutacion(b);
    }
    else cout << "error: el mensaje no existe" << endl;

}

void CMensajes::decodificar_permutacion(int b) const{

    Mensaje m;
    m.codificar_permutacion(b);

}