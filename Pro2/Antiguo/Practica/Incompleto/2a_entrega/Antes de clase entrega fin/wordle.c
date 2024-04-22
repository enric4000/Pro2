#include <stdlib.h>
#include <stdio.h>

char palabra[5];
char a[5];
int p[5]; //te dice si esa letra ya se ha encontrado antes por si la palabra q tienes que acertar por ejemplo es MARIO y pones MARIA que no te diga que ha encontrado la letra A y otra A pero en mala posicion
int bool;
int posi = 0;
int letra = 0;

int main (){
    //aqui falta un switch de estos q te gustan para escoger el diccionario :)
    scanf("%s", palabra); //esto es solo si estas en debugging y pones tu la palabra sino iguala palabra a lo que caracter por caracter
    int i = 0;
    while(i < 5 && bool == 0){
        scanf("%s", a),
        bool = 1;
        for(int k = 0; k < 5; ++k) if(a[k] != palabra[k]) bool = 0;
        if(bool) printf("Acertaste palabra\n");
        else{
            for(int j = 0; j < 5; ++j){
                letra = 0; //inicio los booleanos(en c++ es un tipo de variable q vale true o false, en c cualquier int o char q valga > 0 es true y si es == 0 es false) para cada caracter de a
                posi = 0;
                if(a[j] == palabra[0] && p[0] == 0){
                    if(j == 0) {
                        letra = 1;
                        p[0] = 1;
                    } 
                    else posi = 1;
                    for(int z = j + 1; z < 5; ++z) if(a[j] == palabra[z]) posi = 1;
     
                }
                if(letra == 0 && a[j] == palabra[1] && p[1] == 0){
                    if(j == 1) {
                        letra = 1;
                        p[1] = 1;
                    } 
                    else posi = 1;
                    for(int z = j + 1; z < 5; ++z) if(a[j] == palabra[z]) posi = 1;

                }
                if(letra == 0 && a[j] == palabra[2] && p[2] == 0){
                    if(j == 2) {
                        letra = 1;
                        p[2] = 1;
                    } 
                    else posi = 1;
                    for(int z = j + 1; z < 5; ++z) if(a[j] == palabra[z]) posi = 1;
 
                }
                if(letra == 0 && a[j] == palabra[3] && p[3] == 0){
                    if(j == 3) {
                        letra = 1;
                        p[3] = 1;
                    } 
                    else posi = 1;
                    for(int z = j + 1; z < 5; ++z) if(a[j] == palabra[z]) posi = 1;
 
                }
                if(letra == 0 && a[j] == palabra[4] && p[4] == 0){
                    if(j == 4) {
                        letra = 1;
                        p[4] = 1;
                    } 
                    else posi = 1;

                }
            //con estos dos ints puedes decidir el color que le pones a la letra y sacarla como quieras
                if(letra && posi)  printf("Has acertado letra %c en posicion también pero hay más en la palabra!\n", a[j]);
                else if(letra)  printf("Has acertado letra %c en posicion también!\n", a[j]);
                else if(posi) printf("Has acertado la letra %c pero está en otra posicion\n", a[j]);
            //mete aquí la salida del caracter bonita
            }

        }
        ++i;
    }
    if(bool == 0) printf("GAME OVER\n");
    //el programa acaba cuando pones la palabra correcta o te quedas sin turnos pero lo puedes cambiar si antes del switch para seleccionar diccionarios o despues haces un bucle infinito alo while(1), el programa se parara igual en cada scan
}