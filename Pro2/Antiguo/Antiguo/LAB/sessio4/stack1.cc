#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    int x, y;
    cin >> x;
    
    stack<int> s;
        for(int i = 0; i < x/2; ++i) {
            
            cin >> y;
            s.push(y);
        }
        
    if(x%2==1) cin >> y;
    
    bool pal = true;
    x = x/2;
    while(pal and x > 0) {
        
        cin >> y;
        if(y != s.top()) pal = not pal;
        s.pop();
        --x;
    }

    if(pal) cout << "SI" << endl;
    else cout << "NO" << endl;
 
}
