/*
problema: ariGATO

Descripción
Maullín Gatouski, acostumbrado a plasmar sus pensamientos en papel, enfrenta un nuevo desafío al recibir una vieja laptop como regalo. La transición al teclado resulta complicada, y sus escritos se ven plagados
de errores tipográficos.
Esto lo obliga a familiarizarse con el proceso de borrar y corregir en la pantalla, ya que, en lugar de borrar una letra, Maullín coloca un '#' cuando intenta eliminar algo.

Maullín tiene dos cadenas de entrada que incluyen letras del alfabeto y el carácter '#', simbolizando la tecla de borrar. Quiere saber si las cadenas de texto son iguales después de borrar las letras correspondientes.
Por ejemplo:

En la primera cadena: Holaz# Mum#ndo, Maullín borra la letra 'z' y luego la 'm', resultando en: Hola Mundo

En la segunda cadena: Hola Munl#do, borra la letra 'l' resultando en: Hola Mundo

En este caso, ambas cadenas son iguales.

¿Podrá este gato adaptarse a la era digital sin perder su elegancia? Ayúdalo a verificar si las dos cadenas que tiene son iguales.





Entrada
Dos cadenas con espacios.
Salida
Si las dos cadenas son iguales, imprime "SI"; de lo contrario, "NO".


ejemplo

entrada:

Buenas######Bendiciones
Hola#######

salida:
NO

descripcion:
La primera cadena finalmente queda como "Bendiciones". La segunda cadena queda vacía.
*/

#include <iostream>
#include <stack>
#include <string>
#pragma GCC target ("avx2")
#pragma GCC optimize ("Ofast")
using namespace std;
string procesarCadena(const string& cadena) {
    stack<char> pila;

    for (char c : cadena) {
        if (c == '#') {
            if (!pila.empty()) {
                pila.pop();
            }
        } else {
            pila.push(c);
        }
    }

    string resultado = "";
    while (!pila.empty()) {
        resultado = pila.top() + resultado;
        pila.pop();
    }

    return resultado;
}

int main() {

    string cadena1, cadena2;

    cin >> cadena1 >> cadena2;

    string procesada1 = procesarCadena(cadena1);
    string procesada2 = procesarCadena(cadena2);


    if (procesada1 == procesada2) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
