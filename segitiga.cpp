#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan panjang ketiga garis
    float a, b, c;
    
    // Input panjang ketiga garis
    cout << "Masukkan panjang tiga buah garis:\n";
    cout << "Panjang garis pertama: ";
    cin >> a;
    cout << "Panjang garis kedua: ";
    cin >> b;
    cout << "Panjang garis ketiga: ";
    cin >> c;
    
    // Memeriksa syarat pembentukan segitiga
    if (a + b > c && a + c > b && b + c > a) {
        cout << "SEGI TIGA" << endl;
    } else {
        cout << "BUKAN SEGITIGA" << endl;
    }
    
    return 0;
}
