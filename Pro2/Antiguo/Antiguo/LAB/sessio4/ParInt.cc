#include "ParInt.hh"
#include <queue>


ParInt::ParInt(){
  p=0;s=0;
}

ParInt::ParInt(int a,int b){
  p=a;s=b;
}

int ParInt::primer(){
  return p;
}

int ParInt::segon(){
  return s;
}

bool ParInt::llegir(){
  cin >> p >> s;
  return (p!=0 or s!=0); 
}

void ParInt::escriure(){
  cout << p << ' ' << s << endl;
}
