#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    char x;
    bool correcte = true;
    stack<char> y;
    
    while(correcte and cin >> x and x !='.') {
     
        if(x == '(') y.push(x);
        else if(x == '[') y.push(x);
        else if(x == ')') {
            
            if(y.size() > 0 and y.top() == '(') y.pop();
            else correcte = false;

        }
        else if(x == ']') {
            
            if(y.size() > 0 and y.top() == '[') y.pop();
            else correcte = false;
        }
    }
    
    if(correcte and y.size() == 0) cout << "Correcte" << endl;
    else cout << "Incorrecte" << endl;
  
}
