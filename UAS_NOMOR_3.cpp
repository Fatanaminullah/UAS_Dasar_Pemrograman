#include <iostream>
#include <math.h>
using namespace std;

int main() {
	cout << "Bilangan     Bilangan Pangkat     Bilangan Pangkat 3" << endl;
	cout << "====================================================" << endl;
	for (int i = 1; i <= 5; i++) {
		cout << i << "      " << pow(i,2) << "       " << pow(i,3) << endl; 
	}
}


