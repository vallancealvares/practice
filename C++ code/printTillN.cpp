#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    cout << "Enter value of n: " << endl;
    cin >> n;

    while (i <= n)
    {
        cout << i << " ";
        i = i + 1;
    }
}