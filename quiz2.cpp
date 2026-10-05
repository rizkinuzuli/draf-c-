#include <iostream>
#include <string>
#include <vector>

using namespace std;
string decimalToBinary(int n) {
    string binary =  "";
    while (n>0){
        binary = to_string(n%2)+binary;
        n/=2;
    }
    return binary;
}
int binaryToDecimal(string binary) {
    int decimal =0;
    int base = 1;
    for (int i = binary.length()-1; i>=0; i--){
        if (binary[i]=='1'){
            decimal+=base;
        }
        base *=2;
    }
    return decimal;
}
int main(){
    int option;
    int repeat=1;
    cout << "Pilih opsi konversi :" << endl;
    cout << "1. Desimal Ke biner" << endl;
    cout << "2. Biner ke desimal" << endl;
    cin >> option;
    
    if (option==1){
        int decimal;
        cout << "masukkkan angka desimal :" << endl;
        cin>> decimal;
        cout << "Hasil Konversi Dari Desimal Ke biner adalah = " << decimalToBinary(decimal) << endl;
    } else if (option==2){
        string binary;
        cout << "Masukkan angka biner ;" << endl;
        cin >> binary;
        cout << "Hasil Konversi Dari Biner KE Desimal Adalah = " << binaryToDecimal(binary) << endl;
    }else {
        cout << "Opsi tidak valid" << endl;}
}