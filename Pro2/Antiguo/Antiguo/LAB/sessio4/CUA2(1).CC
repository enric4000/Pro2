#include <iostream>
#include <queue>

using namespace std;

void max_min_mit(queue<int> a, int& max, int& min, double& mit) {

    mit = (mit*a.size() - a.front)/(a.size() - 1);
    
    if(a.front() == max) {
        
        a.pop();
        if(a.size() > 0) max = a.front();
    }
    else if(a.front() == min) {
          
        a.pop();
        if(a.size() > 0) min = a.front();
    }
        while (a.size() > 0) {
            
            if(a.front() > max) max = a.front();
            else if (a.front() < min) min = a.front();
            a.pop();
    }
    
}

int main() {
    
    queue<int> sec;
    int x, max, min;
    double mit = 0;
    while (cin >> x and x < 1001 and x > -1002) {
        
        if(x == -1001 and sec.size() > 0) {
            max_min_mit(sec, max, min, mit);
            sec.pop();
        }
        else if(sec.size() > 0) {
             mit = (mit*sec.size() + x)/(sec.size() + 1);
             
            if(x > max) max = x;
            else if(x < min) min = x;
        }
            
        else {
            max = x;
            min = x;
            mit = x;
        }
               
        if (a.size() > 0) cout << "min " << min << "; max " << max << "; media " << mit << endl;
        else cout << 0 << endl;
        
    }
    
}
