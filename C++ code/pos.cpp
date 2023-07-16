#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout<<"Enter the value of A: " <<endl;
    cin>>a;

    cout<<"Enter the value of B: " <<endl;
    cin>>b;

    //cout<<"value of a and b are: " << a <<" "<< b << endl;

    if(a>b) {
        cout<<" A is greater than B " <<endl;
    }
    else {
        if(b>a) {
            cout<<" B is greater than A "<<endl;
        }
        else {
            cout<<" A is equal to B "<<endl;
        }
    }
}
