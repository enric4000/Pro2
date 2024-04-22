#include <iostream>
#include <vector>
#include <algorithm> 
#include "torneo.hh"
using namespace std;

    torneo::torneo(const pair<string, string> &par1){
            
        nombre = par1.first;
        categoria = par1.second;
            
    }
    
    bool ordena1(pair<string, int> o1, pair<string, int> o2){

        return o1.second < o2.second;
    }

    void torneo::iniciatorneo(ranking &rank){

        sort(rank.mp.begin(), rank.mp.end(), ordena1);
        int x, z;
        cin >> x;
        int y = 4;
        for(int j = 8; j < x; j *= 2){
            ++y;
        }
        vector<int> parti(x);
        for(int k = 0; k < x; ++k){
            
            cin >> z;
            parti[k] = z;
        }

        int numnivel = 5;

        vector<int> sumniv(y + 1);

        sumniv[0] = 3;

        for(int j = 1; j < y; ++j){

            sumniv[j] = numnivel;
            numnivel = numnivel*2 - 1;

        }
        BinTree<int> a;
        int i = 0, anterior = 1;
        read_bintreeint(a, anterior, i, sumniv, x + 1);
        i = 0;
        bool cerrado = false, derecha = false;
        escribe_bintree_int(a);
        hojas_bintree_int(a, rank.mp, parti, i, cerrado, derecha);
        cout << endl;
    }

    void torneo::escribe_bintree_int(const BinTree<int>& a){

        if(not(a.left().empty())){
            cout << "izquierda" << endl;
            escribe_bintree_int(a.left());
                    cout << " derecha" << endl;    
            escribe_bintree_int(a.right());
        }
        else{
            cout << a.value() << endl;
        }
    }

    void torneo::hojas_bintree_int(const BinTree<int>& a, const vector<pair<string, int>> mp, vector<int> parti, int &i, bool &cerrado, bool derecha){

        if(cerrado){
            cout << " ";
            cerrado = false;
        }
        if(not derecha)cout << "(";
        if(not(a.left().empty())){
            derecha = false;
            hojas_bintree_int(a.left(), mp, parti, i, cerrado, derecha);
            derecha = true;
            hojas_bintree_int(a.right(), mp, parti, i, cerrado, derecha);
            cout << ")";
            cerrado = true;
        }
        else{
            int x = parti[a.value() - 1];
            cout << a.value() << "." << mp[x].first << " ";
            ++i;
        }
    }

    void torneo::read_bintreeint(BinTree<int>& a, int anterior, int i, const vector<int> &sumniv, const int maxplay){
        int n;
        n = sumniv[i] - anterior;    
        if (n < maxplay and anterior != 0){
            BinTree<int> l;
            read_bintreeint(l, anterior, i + 1, sumniv, maxplay);
            BinTree<int> r;
            read_bintreeint(r, n, i + 1, sumniv, maxplay);
            a = BinTree<int>(anterior,l,r);
        }
        else a = BinTree<int> (anterior); 
    }

    void torneo::consultatorneo(){

        cout << nombre << " " << categoria << endl;
    }
