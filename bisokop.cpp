// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {

//     bool answer;
//     string jawaban;

//     cout << "---Selamat datang di BIOSKOP XXXX---" << endl;
//     cout << "Apakah anda sudah memesan ticket untuk tempat duduk? (Y/N)" << flush;
//     cin >> jawaban;
//     if(jawaban == "Y" || jawaban == "y"){
//         answer = true;
//     } else if(jawaban == "N" || jawaban == "n"){
//         answer = false;
//     }

//     bool kursi_bioskop[5][10] = {
//         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
// };

//     int position;
//     if(answer == false){
        
//         cout << "Silahkan memesan ticket terlebih dahulu dengan memilih nomor kursi (1 - 50) : ";
//         cin >> position;

//         if(position >= 1 && position <= 50){
//             int row = (position - 1) / 10;
//             int col = (position - 1) % 10;
//             kursi_bioskop[row][col] = 0; 
//             cout << "Pemesanan berhasil untuk kursi nomor " << position << endl; 
//         } else {
//             cout << "Nomor kursi tidak valid" << endl;
//         }
//     } else {
//         cout << "Selamat menonton!" << endl;
//     }

//     cout << "---DENAH KURSI BIOSKOP---" << endl;
//     for(int i = 0; i < 5; i++){
//         for(int j = 0; j < 10; j++){
//             cout << kursi_bioskop[i][j] << " ";
//         }
//         cout << endl;
//     } 
 

//     return 0;
// }

#include <iostream>
#define ll long long
using namespace std;


void tampilkanDenah(bool kursi_bioskop[5][10]) {
    cout << "---DENAH KURSI BIOSKOP---" << endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            cout << kursi_bioskop[i][j] << " ";
        }
        cout << endl;
    } 
}

// Fungsi untuk proses pemesanan tiket kursi
void prosesPemesanan(bool kursi_bioskop[5][10]) {
    int position;
    cout << "Silahkan memesan ticket terlebih dahulu dengan memilih nomor kursi (1 - 50) : ";
    cin >> position;

    if(position >= 1 && position <= 50){
        int row = (position - 1) / 10;
        int col = (position - 1) % 10;
        
        if(kursi_bioskop[row][col] == 0) {
            cout << "Maaf, kursi nomor " << position << " sudah terisi!" << endl;
        } else {
            kursi_bioskop[row][col] = 0; 
            cout << "Pemesanan berhasil untuk kursi nomor " << position << endl; 
        }
    } else {
        cout << "Nomor kursi tidak valid" << endl;
    }
}

int main() {
    bool answer;
    string jawaban;

    cout << "---Selamat datang di BIOSKOP XXXX---" << endl;
    cout << "Apakah anda sudah memesan ticket untuk tempat duduk? (Y/N) ";
    cin >> jawaban;
    
    if(jawaban == "Y" || jawaban == "y"){
        answer = true;
    } else if(jawaban == "N" || jawaban == "n"){
        answer = false;
    }

    // Inisialisasi array kursi bioskop
    bool kursi_bioskop[5][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };

    // Percabangan berdasarkan status pemesanan
    if(answer == false){
        prosesPemesanan(kursi_bioskop);
    } else {
        cout << "Selamat menonton!" << endl;
    }

    // Memanggil fungsi untuk menampilkan denah
    tampilkanDenah(kursi_bioskop);

    return 0;
}