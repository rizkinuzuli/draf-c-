// #include <iostream>
// using namespace std;
// #include <string>

// int main(){
//     string letters [2][4] = {
//         {"A", "B","C", "D"},
//         {"E", "F", "G", "H"}
//     };
//         for (int i=0; i<2; i++){
//             for (int j=0; j<4; j++){
//                 cout <<letters [i][j] << "\t";
//             }
//             cout << endl;
//         }
// }

#include <iostream> // untuk menggunakan cout dan endl
#include <string>   // untuk menggunakan string
using namespace std;

int main() {
    int tanggal = 15;
    int tahun = 2023;

    // jangan lupa bahwa string perlu diapit dengan kutip dua
    string bulan = "Februari"; 

    // cetak kata sandi
    cout << tahun +10 << "-" << bulan <<"-"<< tanggal +7 << endl;
}
