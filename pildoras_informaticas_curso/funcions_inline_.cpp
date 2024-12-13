#include <iostream>
using namespace std;

inline int sumar(int a, int b)
{
    return a + b;
}
int main()
{
    // redueixen el consum de recursos
    // menor temps d'execució
    // el compilador, quan es crida a la funció, intenta substituir la crida
    // per la funció sancera -> fa una abstracció i posa la funció en "linea"
    // el compilador decideix si ha d'aplicar la funció inline o no
    // si es crida moltes vegades a la funcio al llarg del programa
    // aquest augmentara de tamany significativament, ja que al compilar, es generarà el binari
    // de la funció en cada lloc que es crida.
    int x = 6, y = 4;
    int res = sumar(x, y);
    cout << res;
}