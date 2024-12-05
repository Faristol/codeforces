#include <iostream>
using namespace std;

//el & no passes el valor, passes la referencia, aleshores no cal
//retornar res, doncs es modifica internament el valor en la funcio
void toLower(string &cadena){
    for(int i=0;i<cadena.length();i++){
        cadena[i] = tolower(cadena[i]);
    }

}
int main()
{
    int a, b;
    a = 3;
    b = 4.0f;
    double c = 9.0;

    auto res = b + a;
    cout << typeid(res).name() << endl;
    auto res2 = b + c;
    cout << typeid(res2).name() << endl;
    int x = 1;
    int j = 6;
    int k = 7;
    double m = (x + j + k) / 3;
    cout << m << endl;
    int x2 = 1;
    float j2 = 6;
    int k2 = 7;
    double m2 = (x2 + j2 + k2) / 3;
    cout << m2 << endl;
    string pepe = "PEPE";
    toLower(pepe);
    cout << "PEPE " << pepe << endl;
    cout << a << " es " << ((a%2==0)?"par":"impar") << endl;

    int ages [] {1,2,3,4,5,6,7,8,9,10};
    for (int e : ages){
        cout << "ed " << e << endl;
        if (e%2==0) cout << "ed par " << e;
        else cout << "ed impar " << e;

    }
    int opcio;
    do{
        cout << "Introdueix el num 3 per a eixir del buble: ";
        cin >> opcio;
    }while(opcio != 3);
    return 0;
}