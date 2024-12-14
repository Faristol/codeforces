#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    cout << " " << num << endl;
    return num * factorial(num-1);
}
int main()
{
    cout << "factorial 4 deuria de donar 24 " << factorial(4);
}