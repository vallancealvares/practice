#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the value of N: "<<endl;
    cin >> n;

    int sum = 0;
    int i = 2;

    while(i <= n) {
        sum = sum + i;
        i = i + 2;
    }
    cout << "The sum of all the number from 1 to N: " << sum << endl;
}