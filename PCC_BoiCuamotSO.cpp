// PCC_BoiCuamotSO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
	int so;

	cout << " nhap vao mot so: ";
	cin >> so;
	cout << " boi so cua " << so << "la:";
	for (int i = 1; i <= 10; ++i) {
		cout << so * i << " ";

	}
	cout << endl;
	return 0;
}
   


