#include <iostream>
#include <map>
#include <vector>
using namespace std;
// simplificar el codi, per a tipos complicats
auto suma(int a, int b)
{
    return a + b;
}
// aço torna un iterador
auto buscar_map(const map<string, int> &myMap, const string &key)
{
    return myMap.find(key);
}
// TEMPLATE
template <typename T, typename U>
auto suma(T a, U b)
{
    return a + b;
}
int main()
{
    cout << suma(2, 3) << endl;
    map<string, int> mapa = {{"casa", 2}, {"paco", 4}};
    auto it = buscar_map(mapa, "paco");
    if (it != mapa.end())
    {
        cout << "trobat " << it->first << "- > " << it->second << endl;
        --it;
        cout << "el de devall " << it->first << "- > " << it->second << endl;
    }
    else
    {
        cout << "no trobat";
    }
    vector<int> numeros = {10, 20, 30, 40};
    vector<int>::iterator it2;
    // Cuando usas !=, estás comprobando si los iteradores apuntan a posiciones
    // diferentes dentro del contenedor, y es la forma correcta de verificar si
    // un iterador ha llegado al final del contenedor
    for (it2 = numeros.begin(); it2 != numeros.end(); ++it2)
    {
        cout << *it2 << " ";
    }
    auto sum1 = suma(2, 3);
    auto sum2 = suma(2.2f, 3);
    auto sum3 = suma(2.3f, 3.4f);
    cout << endl;
    cout << "resultat sum1 " << sum1 << endl;
    cout << "resultat sum2 " << sum2 << endl;
    cout << "resultat sum3 " << sum3 << endl;
}