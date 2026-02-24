#include<iostream>
using namespace std;

int main(){
    float p,l,luas,keliling;
    cout << "Masukkan panjang persegi dalam centimeter: ";
    cin >> p;
    cout << "Masukkan lebar persegi dalam centimeter: ";
    cin >> l;
    luas = p * l;
    keliling = 2 * (p + l);
    cout << "Luas persegi: " << luas << "cm" << endl;
    cout << "Keliling persegi: " << keliling << "cm" << endl;
}