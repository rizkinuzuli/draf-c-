#include <iostream>
using namespace std;
#include <string>

struct DataPasien {
    string nama;
    float beratBadan;
    float tinggiBadan;
    float nilaiBmi;
    string statusGizi;
};
 double hitungBmi (float beratBadan, float tinggiBadan) {
    float tinggiBadanMeter = tinggiBadan /100.0;
    return beratBadan / (tinggiBadanMeter*tinggiBadanMeter);
}
int main(){
    DataPasien P;
    cout << "Masukkan Data Pasien" << endl;
    cout << "Nama = ";
    cin >> P.nama;
    cout << "Berat Badan = ";
    cin >> P.beratBadan;
    cout << "Tinggi Badan = ";
    cin >> P.tinggiBadan;

    P.nilaiBmi = hitungBmi (P.beratBadan, P.tinggiBadan);
    if (P.nilaiBmi < 18.5) {
        P.statusGizi = "Kekurangan Berat Badan";
        cout << "Status Gizi = " << P.statusGizi << endl;
    }else if (P.nilaiBmi >= 18.5 && P.nilaiBmi <= 24.9) {
        P.statusGizi = "Normal";
        cout << "Status Gizi = " << P.statusGizi << endl;
    }else if (P.nilaiBmi >= 25 && P.nilaiBmi <= 29.9) {
        P.statusGizi = "Kelebihan Berat Badan";
        cout << "Status Gizi = " << P.statusGizi << endl;
    }else if (P.nilaiBmi >= 30) {
        P.statusGizi = "Obesitas";
        cout << "Status Gizi = " << P.statusGizi << endl;
    }else {
        cout << "Status Gizi Ga Normal " << endl;
    }
    cout << " Hasilnya adalah = " << P.nilaiBmi << endl;
    return 0;
}
