#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Vectores pueden cambiar dinámicamente su tamaño en tiempo de ejecución
    vector<int> records1(5);         // Vector de 5 elementos, inicializados a 0
    vector<int> records2{1, 2, 3, 4, 5};  // Vector con los valores específicos
    vector<int> records3(5, 444);   // Vector de 5 elementos, todos inicializados a 444
    vector<char> lletres{'c', 'b'}; // Vector de caracteres con 'c' y 'b'

    // Imprimir elementos de records1 (debería imprimir 0, 0, 0, 0, 0)
    for (int i = 0; i < records1.size(); i++)
    {
        cout << records1[i] << endl;
    }

    // Imprimir elementos de records2 (debería imprimir 1, 2, 3, 4, 5)
    for (int i = 0; i < records2.size(); i++)
    {
        cout << records2[i] << endl;
    }

    // Imprimir elementos de records3 (debería imprimir 444, 444, 444, 444, 444)
    for (int i = 0; i < records3.size(); i++)
    {
        cout << records3[i] << endl;
    }

    // Imprimir elementos de lletres (debería imprimir 'c' y 'b')
    for (int i = 0; i < lletres.size(); i++)
    {
        cout << lletres[i] << endl;
    }

    return 0;  // Retorno de 0 para indicar que el programa se ejecutó correctamente
}
