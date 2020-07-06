#include <iostream>
using namespace std;

int main() {
	string nim = "4181920051";
	int j = 1;
	for (int i = 10; i > 0; i--) {
		int ganjil = 0;
		int genap = 0;
		if (j % 2 != 0) {
			ganjil = j;
		}
		if (i % 2 == 0) {
			genap = i;
		}
		if (genap != 0 && ganjil != 0) {
			cout << genap << " " << nim << " " << ganjil << endl;
		}
		j++;
	}
}
