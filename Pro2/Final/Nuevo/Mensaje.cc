/** @file Mensaje.cc
    @brief Código de la clase mensaje
*/

#include "Mensaje.hh"
#include "BinTree.hh"

BinTree<char> Mensaje::crea_arbol(int valor, int posinicio, int posfinal)const {

    int posmitad = (posfinal + posinicio)/2;
    int intervalo = posfinal - posinicio;
    int posdere, posizq;
    posdere = (posmitad+1+posfinal)/2;
    posizq = (posmitad-1+posinicio)/2;

    if (intervalo > 1) {

        BinTree<char> left = crea_arbol(posdere, posinicio, posmitad-1);
        BinTree<char> right = crea_arbol(posizq, posmitad+1, posfinal);

        return BinTree<char>(m[valor], left, right);
    }
    else if (intervalo == 1) {

        return BinTree<char>(m[valor], BinTree<char>(), BinTree<char>(m[posfinal]));
    }
    else {

        return BinTree<char>(m[valor]);
    }
}

void Mensaje::imprime_arbol(const BinTree<char> &arbol)const {

    if (not arbol.empty()) {

        imprime_arbol(arbol.left());
        cout << arbol.value();
        imprime_arbol(arbol.right());
    }
}

Mensaje::Mensaje(string ida) {

    this->ida = ida;
    cin.ignore();
    getline(cin, this->m);

}

Mensaje::Mensaje() {

    cin.ignore();
    getline(cin, this->m);
    ida = "";

}

int Mensaje::sice() {

    return m.size();

}

void Mensaje::escribir_mensaje() {

    cout << ida << endl << '"' << m << '"' << endl;

}

string Mensaje::devuelve_ida() {

    return ida;

}

char Mensaje::devolver_char(int pos)const {

    if (pos < m.size()) return m[pos];
    else return -1;

}

void Mensaje::codificar_permutacion(int b)const {

    BinTree<char> arboliko;

    if (b >= m.size()) {

        cout << "\"";
        arboliko = crea_arbol((m.size()-1)/2, 0, m.size()-1);
        imprime_arbol(arboliko);
        cout << "\"" << endl;
    }
    else {

        cout << "\"";
        int j = 0;
        int i = 0;
        for (i = 0; j < m.size()/b; i += b) {

            arboliko = crea_arbol((i*2+b-1)/2, i, i+b - 1);
            imprime_arbol(arboliko);
            ++j;
        }

        if (b != 1) {

            arboliko = crea_arbol((m.size() + i - 1)/2, i, m.size()-1);  
            imprime_arbol(arboliko);
        }

        cout << "\"" << endl;
    }
}
