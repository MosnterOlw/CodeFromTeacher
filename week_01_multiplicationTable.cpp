#include<iostream>
using namespace std;

void main(){
	cout << "multiplicationTable: " << endl;
	int i = 1, j = 1;
	for (i = 1; i <= 9; i++){
		for (j = i; j <= 9; j++){
			int a = i*j;
			cout << i << "*" << j << "=" << a << '\t';
		}
		cout << endl;
	}
}
