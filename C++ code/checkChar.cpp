#include<iostream>
using namespace std;

int main() {

	char ch;
	cout<<"Enter character here: "<<endl;
	cin>>ch;

	if (ch>=65&&ch<=90) {
		cout << " Character is uppercase. " << endl;
	}
	else if(ch>=97&&ch<=122) {
		cout << " Character is lowercase. " << endl;
	}
	else if ( ch>=48&&ch<=57 ) {
		cout << " Character is numeric. " << endl;
 	}
	else {
		cout<< "Character is not recognised." << endl;
	}
}
