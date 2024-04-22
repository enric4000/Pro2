#include <vector>
using namespace std;
#include "vectorIOint.hh"

struct parint {int prim, seg;};
 
parint max_min1(const vector<int>& v) {
 /* Pre: v.size()>0 */
 /* Post: el primer componente del resultado es el valor maximo de v */
    parint algo;
    algo.seg = v[0];
    algo.prim = v[0];
    
    for(int i = 1; i < v.size(); ++i) {
        
        if(v[i] < algo.seg) algo.seg = v[i];
        if(v[i] > algo.prim) algo.prim = v[i];
    }
     return algo;
 }
 
 pair<int,int> max_min2(const vector<int>& v){
 /* Pre: v.size()>0 */
 /* Post: el primer componente del resultado es el valor maximo de v;
 el segundo componente del resultado es el valor minimo de v */
    pair<int,int> pai;
    pai.first = v[0], pai.second = v[0];
    for(int i = 1; i < v.size(); ++i) {
        
        if(v[i] < pai.second) pai.second = v[i];
        if(v[i] > pai.first) pai.first = v[i];
    }
    return pai;
 
 }
 
 void max_min3(const vector<int>& v, int& x, int& y) {
 /* Pre: v.size()>0 */
 /* Post: x es el valor maximo de v;  y es el valor minimo de v */
 
    x = v[0];
    y = v[0];
    for(int i = 1; i < v.size(); ++i) {
        
        if(v[i] < y) y = v[i];
        if(v[i] > x) x = v[i];
    }
 
 }

//Per provar la vostra solució podeu fer servir els vectorIOint.* que trobareu a la carpeta “public” clicant l’icona del gatet. En qualsevol cas, us recomanen que feu un programa a part amb un main per fer les proves abans de lliurar la solució. 
