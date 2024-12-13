#include <iostream>
#include <vector>
using namespace std;
void duplicar(vector<int> &vec)
{
    // sino posem el &valor no furula
    // li passariem la referencia del vec pero al no posar el &
    // com no operem amb el valor, de vec no es modificaria
    for (int &valor : vec)
    {
        valor *= 2;
    }
}
void exemple(int num)
{
    num = 50;
}
void exemple2(int &num)
{
    num = 50;
}
void mostrarMsm(string msm = "Hola", int voltes = 1)
{
    for (int i = 0; i < voltes; i++)
    {
        cout << msm << endl;
    }
    cout << "Este es el msm " << msm << "\n"
         << "Estos son el num de voltes " << voltes << endl;
}
int main()
{
    int min = 10;
    cout << "valor 1: " << min << endl;
    exemple(min);
    cout << "valor despres de apssar variaable a f sense ref " << min << endl;
    exemple2(min);
    // amb & posem la ref
    // US DE FUNCIONS DE REFERENCIES
    // FONAMENTALMENT QUAN TREBALLEM EN CLASSES AMB MOLTS ATRIBUTS, MOLT COMPLEXES,
    // COPIAR TOT L'OBJECTE POT SER INEFICIENT, ÉS PER AIXO QUE ES PASSSA PER REFERENCIA
    cout << "valor despres de apssar variaable a f amb ref " << min << endl;
    vector<int> num = {1, 2, 3, 4, 5};
    cout << "valors originals ";
    for (int valor : num)
    {
        cout << valor << " ";
    }
    cout << endl;
    duplicar(num);
    cout << "valors despres ";
    for (int valor : num)
    {
        cout << valor << " ";
    }
    cout << "\n";
    ////////////////////////////////////
    // parametres per defecte //
    mostrarMsm();
}