/** @file CAlfabetos.cc
    @brief Código de la clase conjunto de alfabetos
*/


#include "CAlfabetos.hh"

CAlfabetos::CAlfabetos() {

    Malfas.clear();
    A = 0;
    it = Malfas.end();

}

CAlfabetos::CAlfabetos(const int &A) {

    string ida = ""; 
    this->A = A;
    Malfas.clear();
    it = Malfas.end();

    if (A > 0) {

        for (int i = 0; i < A; ++i) {

            cin >> ida;
            cin.ignore();
            Malfas.insert(make_pair(ida, Alfabeto()));
        }
    }
}

void CAlfabetos::nuevo_alfabeto(const string ida) {
    string alfabet;
    cin.ignore();
    it = Malfas.find(ida);

    if (it == Malfas.end()) {

        Malfas.insert(make_pair(ida, Alfabeto()));
        ++A;
        cout << A << endl;
    }
    else {

        getline(cin, alfabet);
        cout << "error: el alfabeto ya existe" << endl;
    }
}

void CAlfabetos::borrar_alfabeto(const string ida) {

    if (existe(ida)) {

        if (not it->second.comprobarmens()) {

            Malfas.erase(it);
            --A;
            cout << A << endl;
        }
        else cout << "error: hay mensajes guardados con el alfabeto" << endl;
    }
}

void CAlfabetos::incrementa(const string ida) {

    it = Malfas.find(ida);
    it->second.incrementa();

}

void CAlfabetos::decrementa(const string ida) {

    it = Malfas.find(ida);
    it->second.decrementa();

}

void CAlfabetos::listar_alfabetos() {

    int i = 1;
    for (it = Malfas.begin(); it != Malfas.end(); ++it) {

        cout << i << ". " << it->first << endl;
        it->second.escribir_alfabeto();
        ++i;
    }
}

bool CAlfabetos::existe(string ida) {

    it = Malfas.find(ida);

    if (it == Malfas.end()) {

        cout << "error: el alfabeto no existe" << endl;
        return false;
    }
    else return true;

}

bool CAlfabetos::compruebaespe(string ida) {

    it = Malfas.find(ida);
    return it->second.esespecial();

}

void CAlfabetos::buscaida(string ida) {
  
    it = Malfas.find(ida);

}

char CAlfabetos::codificar_sustitucion(char m, char c) const{

    if (m == -1) return -1;
    return it->second.codificar_sustitucion(m, c);

}

char CAlfabetos::codificar_sustitucion_especial(char m, char c) const{
    
    if (m == -1) return -1;
    return it->second.codificar_sustitucion_especial(m, c);

}

void CAlfabetos::decodificar_sustitucion(string ida, string &clave, string &m) {

    if (existe(ida)) {

        string s = "";
        int j = 0;

        if (it->second.esespecial()) {

            for (int i = 0; i < m.size(); ++i) {

                s += it->second.decodificar_sustitucion_especial(m[i], clave[j]);
                ++j;
                if (j == clave.size()) j = 0;
            }
        }
        else {

            for (int i = 0; i < m.size(); ++i) {

                s += it->second.decodificar_sustitucion(m[i], clave[j]);
                ++j;
                if (j == clave.size()) j = 0;
            }
        }

        cout << '"' << s << '"' << endl;
    }
}
