#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
float a,b;
int kode;
cout << "pilihan Menu : \n";
cout << "1.perkalian (*)\n";
cout << "2.pembagian (/)\n\n";
cout << "Silahkan masukkan kode menu : "; cin >> kode;
cout << "Masukkan angka pertama : "; cin >> a;
cout << "Masukan angka kedua    : "; cin >> b;

if(kode == 1){
cout << "\nHasil perkalian dari "<<a<<" * "<<b<<"adalah : "<<a*b<<endl;
}else if (kode == 2){
cout << "\nHasil pembagian dari "<<a<<" / "<<b<<"adalah : "<<a/b<<endl;
}
return 0;
}
