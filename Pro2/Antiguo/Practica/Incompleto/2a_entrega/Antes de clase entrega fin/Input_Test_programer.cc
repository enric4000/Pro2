#include <iostream>

using namespace std;

// Clave: Clave
// Codificacion: azxmoiz94db8ncthxkl

string alfabeto = "abcdefghijklmnopqrstuvwxyz ";
string mensaje = "mensaje a codificar";
string Clave = "clave";
string Codificacion_mensaje = "opnmelp vdezdcjknal";
int numero_codificaciones_descodificaciones = 1;

int main() {
    
    int num_alfa;
    cin >> num_alfa;
    int num_m;
    cin >> num_m;
    char defecto;
    cin >> defecto;
    if (defecto == '1') {
        cin >> alfabeto;
        cin >> mensaje;
        cin >> Clave;
        cin >> Codificacion_mensaje;
        cin >> numero_codificaciones_descodificaciones;
    }
    
    cout << num_alfa << endl;
    for (int i = 0; i < num_alfa; i++)
    {
        cout << endl;
        cout << i << endl;
        cout << alfabeto << endl;
    }

    cout << endl;
    cout << num_m << endl;
    for (int i = 0; i < num_m; i++)
    {
        cout << endl;
        cout << i << ' ' << num_alfa-1 << endl;
        cout << mensaje << endl;
    }
    
    cout << endl;
    cout << "listar_alfabetos" << endl;
    
    cout << endl;
    cout << "listar_mensajes" << endl;
    cout << endl;

    cout << "nuevo_mensaje" << endl;
    cout << num_m << ' ' << num_alfa - 1 << endl;
    cout << mensaje << endl;
    cout << endl;

    cout << "nm" << endl;
    cout << num_m + 1 << ' ' << num_alfa - 1 << endl;
    cout << mensaje << endl;
    cout << endl;

    cout << "nuevo_alfabeto" << endl;
    cout << num_alfa << endl;
    cout << alfabeto << endl;
    cout << endl;

    cout << "na" << endl;
    cout << num_alfa + 1 << endl;
    cout << alfabeto << endl;
    cout << endl;

    cout << "borra_mensaje" << endl;
    cout << num_m << endl;
    cout << endl;

    cout << "bm" << endl;
    cout << num_m + 1 << endl;
    cout << endl;

    cout << "borra_alfabeto" << endl;
    cout << num_alfa << endl;
    cout << endl;

    cout << "ba" << endl;
    cout << num_alfa + 1 << endl;
    cout << endl;

    for (int i = 0; i < num_m; i++) {
        cout << "codificar_sustitucion_guardado" << endl;
        cout << i << endl;
        cout << Clave << endl;
        cout << endl;
    }

    for (int i = 1; i < numero_codificaciones_descodificaciones; ++i) {
        
        cout << "codificar_sustitucion" << endl;
        cout << num_alfa - 1 << endl;
        cout << Clave << endl;
        cout << mensaje << endl;

        cout << endl;

        cout << "decodificar_sustitucion" << endl;
        cout << num_alfa - 1 << endl;
        cout << Clave << endl;
        cout << Codificacion_mensaje << endl;

        cout << endl;
    }

    cout << "nuevo_mensaje" << endl;
    cout << num_m << ' ' << num_alfa - 1 << endl;
    cout << mensaje << endl;
    cout << endl;

    cout << "nm" << endl;
    cout << num_m + 1 << ' ' << num_alfa - 1 << endl;
    cout << mensaje << endl;
    cout << endl;

    cout << "nuevo_alfabeto" << endl;
    cout << num_alfa << endl;
    cout << alfabeto << endl;
    cout << endl;

    cout << "na" << endl;
    cout << num_alfa + 1 << endl;
    cout << alfabeto << endl;
    cout << endl;

    cout << "borra_mensaje" << endl;
    cout << num_m << endl;
    cout << endl;

    cout << "bm" << endl;
    cout << num_m + 1 << endl;
    cout << endl;

    cout << "borra_alfabeto" << endl;
    cout << num_alfa << endl;
    cout << endl;

    cout << "ba" << endl;
    cout << num_alfa + 1 << endl;
    cout << endl;


    cout << "fin" << endl;
}