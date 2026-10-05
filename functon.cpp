#include <iostream>
using namespace std;
#include <string>

// void sayHello(string name, int number=7){
//     cout << "Hello, Good Morning!" << name << endl;
//     cout << "You have Selected number" << number << endl; 
// }
// int main(){
//     sayHello("Ani", 5);
//     sayHello("Budi");
//     sayHello("Wati", 11);
// }

// void sayHello (string name= "fulan", int number){
//     cout << "Hello, Good Morning " << name << endl;
//     cout << "you have selected" << number << endl;
// }

// void myFunction (string Fname){
//     cout << "The name is = " << Fname << "\n";
//     }
// int main (){
//     myFunction("Rizki");
//     myFunction("Nuzuli");
//     myFunction("Nuzuli");
// }
// activity 1
double circleArea (double r) {
    return 3.14159 * r * r;
}

double cylinderVolume(double r, double h) {
    return circleArea(r) * h;
}

double coneVolume (double r, double h) {
    return cylinderVolume(r, h) / 3.0;
}

int main() {
    double radius = 10.0;
    double height = 30.0;
    cout << "Circle area = " << circleArea(radius) << endl;
    cout << "Cylinder volume = " << cylinderVolume(radius, height) << endl;
    cout << "Cone volume = " << coneVolume(radius, height) << endl;
}

// activity 2
int fact(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int result = fact(5) + fact(4);
    cout << "The result is " << result << endl; // Output: 144 (120 + 24)
}

void printDate(int day, int month, int year) {
    // Array sederhana untuk konversi angka bulan ke nama bulan jika diperlukan, 
    // atau gunakan string langsung sesuai contoh output.
    string months[] = {"", "January", "February", "March", "April", "May", "June", 
                       "July", "August", "September", "October", "November", "December"};
    cout << "The date is " << day << " " << months[month] << " " << year << endl;
}

void printDate(int day, string monthStr, int year) {
    cout << "The date is " << day << " " << monthStr << " " << year << endl;
}

// activity 3
int main() {
    printDate(5, 12, 2026);
    printDate(7, "July", 2025);
}

// activity 4
int fact(int n) {
    if (n <= 1) {
        return 1; // Base case
    } else {
        return n * fact(n - 1); // Rekursi
    }
}

int main() {
    int result = fact(5) + fact(4);
    cout << "The result is " << result << endl;
}