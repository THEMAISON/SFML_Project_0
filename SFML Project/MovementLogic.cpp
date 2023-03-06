#include <iostream>
using namespace std;

int Coords(int x, int y) {
	return x + y;
}

void SendMessageAboutCoords(int x, int y) {
	cout << "X: " << x << endl;
}

int Coords_Mult(int x, int y) {
	return x * y;
}