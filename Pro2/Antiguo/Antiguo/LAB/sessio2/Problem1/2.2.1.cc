#include "Estudiant.hh"
#include <vector>
using namespace std;

pair<int,int> max_min_vest(const vector<Estudiant>& v) {

    pair <int,int> result;
    result.first = -1, result.second = -1;
    int x = 0;
    while(result.first == -1 and x < v.size()) {
        
        if(v[x].te_nota()) {
            result.first = x;
            result.second = x;
        }
        else ++x;
    }
    if(result.first != -1){
        for(int i = x + 1; i < v.size(); ++i){
        
            if(v[i].te_nota()) {
                if (v[i].consultar_nota() == v[result.first].consultar_nota()) { 
        
                    if(v[i].consultar_DNI() < v[result.first].consultar_DNI()) result.first = i;
                }
    
                else if (v[i].consultar_nota() > v[result.first].consultar_nota()) { 
        
                    result.first = i;
    
                }
        
                if (v[i].consultar_nota() == v[result.second].consultar_nota()) { 
        
                    if(v[i].consultar_DNI() < v[result.second].consultar_DNI()) result.second = i;
                }
    
                else if (v[i].consultar_nota() < v[result.second].consultar_nota()) { 
        
                result.second = i;
                }
            }
        }
    }
    
    return result;
}
