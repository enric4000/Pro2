#include <iostream>
using namespace std;

int main() {
    
    int x, y;
    cin >> x >> y;
    if(x !=0){
        for(int i = 0; i < x; ++i) {
        
            int z = 0;
            string s;
            int j;
        
            while (cin >> j and j != y) z += j;
        
            getline(cin,s);
       
            cout << "La suma de la secuencia " << i + 1 << " es " << z << endl;
        }
    }
}

