#include <iostream>
using namespace std;

char palabra[5];
char a[5];
int p[5];
bool encontrao;

int main (){
    int i = 0;
    cin >> palabra;
    while(i < 5 and not encontrao){
        cin >> a;
        encontrao = 1;
        for(int k = 0; k < 5; ++k) if(a[k] != palabra[k]) encontrao = 0;
        if(encontrao) printf("Acertaste palabra");
        else{
        for(int j = 0; j < 5; ++j){
            
            if(a[j] == palabra[0]){
                if(j == 0) printf("Has acertado letra y posicion\n");
                else printf("Has acertado letra");
            }
            if(a[j] == palabra[1]){
                if(j == 1) printf("Has acertado letra y posicion\n");
                else printf("Has acertado letra");
            }
            if(a[j] == palabra[2]){
                if(j == 2) printf("Has acertado letra y posicion\n");
                else printf("Has acertado letra");
            }
            if(a[j] == palabra[3]){
                if(j == 3) printf("Has acertado letra y posicion\n");
                else printf("Has acertado letra");
            }
            if(a[j] == palabra[4]){
                if(j == 4) printf("Has acertado letra y posicion\n");
                else printf("Has acertado letra");
            }


        }
        }

    }

}