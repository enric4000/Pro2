#include <iostream>
using namespace std;

int main (){
    int x, suma;
    double y;
    x = suma = 0; 
    y = 0;
    while(cin >> x and x != 0){
        suma +=x;
        ++y;
    }
    cout << suma/y << endl;
}