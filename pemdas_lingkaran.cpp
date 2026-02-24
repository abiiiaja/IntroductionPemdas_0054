#include<iostream>
using namespace std;

int main(){
    float r,luas,keliling;
    cout << "Masukkan jari-jari dalam centimeter: ";
    cin >> r;
    luas = 3.14 * r * r;
    keliling = 2 * 3.14 * r;
    cout << "Luas lingkaran: " << luas << "cm^2" << endl;
    cout << "Keliling lingkaran: " << keliling << "cm" << endl;
}