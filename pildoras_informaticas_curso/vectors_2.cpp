#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> records{23, 24, 25, 28};
    // si accedim com sempre s'ha accedit, no es fa una comprovació dels limits i no trau error
    // usant at si que fa una comprovacio implicitan
    cout << records[330] << endl;

    records[33] = 339;
    cout << records[32] << endl;
    cout << records[33] << endl;
    cout << records.at(3) << endl;
    records.push_back(99);
    cout << records.at(records.size() - 1) << endl;
    cout << "ieeeeee" << endl;

    for (int i = 0; i < records.size(); i++)
    {
        cout << records.at(i) << endl;
    }
    cout << "ieeeeee" << endl;

    records.erase(records.begin(), records.begin() + 2);
    for (int i = 0; i < records.size(); i++)
    {
        cout << records.at(i) << endl;
    }
    records.insert(records.begin(), 3);
}