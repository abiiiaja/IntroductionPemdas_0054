#include<iostream>
using namespace std;
 
float p, l;

void Input()
{
    cout << "Masukkan Panjang (dalam cm): ";
    cin >> p;
    cout << "Masukkan Lebar (dalam cm): ";
    cin >> l;
}

float Luas(float c, float n){
    return c*n;
}

void Output(){
    cout << "Luas persegi: " << Luas(p, l) << " cm^2" << endl;  
}

int main(){
    Input();
    Output();
}