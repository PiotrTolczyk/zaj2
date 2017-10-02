#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj liczbe wierszy\n";
    int w;
    cin >> w;
    for(int i=1; i<=w; i++)
    {
        for(int j = 1; j <= w-i; j++)
            cout << " ";
        for(int j = 0; j <= i-2; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}
