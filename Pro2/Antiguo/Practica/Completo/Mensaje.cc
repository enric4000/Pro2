#include "Mensaje.hh"
#include "BinTree.hh"

Mensaje::Mensaje(string ida1){
    ida = ida1;
    cin.ignore();
    getline(cin, this->m);
}

Mensaje::Mensaje(){
    cin.ignore();
    getline(cin, this->m);
    ida = "";
}


void Mensaje::lm(){

    cout << ida << endl << '"' << m << '"' << endl;

}

string Mensaje::devuelveida(){

    return ida;

}

char Mensaje::devolver_char(int pos)const {

    if(pos < m.size()) return m[pos];
    else return -1;

}


int Mensaje::sice(){
    return m.size();
}


BinTree<char> Mensaje::algo(int valor, int posinicio, int posfinal)const {
    int posmitad = (posfinal + posinicio)/2;
    int intervalo = posfinal - posinicio;
    int posdere, posizq;
    posdere = (posmitad+1+posfinal)/2;
    posizq = (posmitad-1+posinicio)/2;
    if(intervalo > 1){
        BinTree<char> left = algo(posdere, posinicio, posmitad-1);
        BinTree<char> right = algo(posizq, posmitad+1, posfinal);
        return BinTree<char>(m[valor], left, right);
    }
    else if (intervalo == 1){
        return BinTree<char>(m[valor], BinTree<char>(), BinTree<char>(m[posfinal]));
    }
    else{
        return BinTree<char>(m[valor]);
    }

}


void Mensaje::codipermu(int b)const{
    BinTree<char> arboliko;
    if(b >= m.size()){
        cout << "\"";
        arboliko = algo((m.size()-1)/2, 0, m.size()-1);
        imprimearbol(arboliko);
        cout << "\"" << endl;

    }
    else{
        cout << "\"";
        int j = 0;
        int i = 0;
        for(i = 0; j < m.size()/b; i += b){

              
            arboliko = algo((i*2+b-1)/2, i, i+b - 1);
            imprimearbol(arboliko);
            ++j;
        }
        if(b!= 1){
            arboliko = algo((m.size() + i - 1)/2, i, m.size()-1);  
            imprimearbol(arboliko);
        }
        cout << "\"" << endl;
    }
}



void Mensaje::imprimearbol(const BinTree<char> &arbol)const {

    if(not arbol.empty()){
        imprimearbol(arbol.left());
        cout << arbol.value();
        imprimearbol(arbol.right());
    }

}
