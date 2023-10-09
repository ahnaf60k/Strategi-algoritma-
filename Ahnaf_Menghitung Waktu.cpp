#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double waktu;
    int v;
    int s;
    int srad;

    cout << "Menghitung Waktu \n" << endl;
    cout << "masukan v :" << endl;
	cin >> v;
	cout << "masukan s :" << endl;
    cin >> s;
    srad = (int) (s * (3.14 / 180));
    waktu = (double) (2 * (v * srad)) / 10;
    cout <<"waktu yang dibutuhkan adalah :";
    cout << waktu << endl;
    return 0;
}
