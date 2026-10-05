#include <iostream>
#include <string>
using namespace std;

//  void sayHello(string name, int number=7){
//     cout << "Hello, Good Morning!" << name << endl;
//     cout << "You have Selected number" << number << endl; 
// }
// int main(){
//     sayHello("Ani", 5);
//     sayHello("Budi");
//     sayHello("Wati", 11);
// }

// void sayHello(string name, int number){
//     cout << "hello, Good Morning " << name << endl;
//     cout << "My age is = " << number << endl;
// }
// int main (){
//     sayHello("Fulan", 18);
// }


// int rectangleArea(int widht, int length){
//     return widht*length;
// }

// int main (){
//     int hasil = rectangleArea (10, 5);
//     cout << hasil;
// }

                                // activity 1
// double circleArea (double r){
//     return 3.14*r*r;
// }

// double cylinderVolume(double r, double h) {
//     return circleArea (r)*h;
// }

// double coneVolume(double r, double h){
//     return cylinderVolume (r, h)/3.0;
// }

// int main (){
//     double radius = 10.0;
//     double height = 30.0;
//     cout << "Circle area = " << circleArea(radius) << endl;
//     cout << " Cylinder volume = " << cylinderVolume(radius, height) << endl;
//     cout << " cone volume = " << coneVolume(radius, height) << endl;
// }


                            // activity 2
// int fact(int n) {
//     int result = 1;
//     for (int i = 1; i <= n; i++) {
//         result *= i;
//     }
//     return result;
// }
// int main() {
//     int result = fact(5) + fact(4);
//     cout << "The result is " << result << endl; 
// }


//                                                 activity 3
// void printDate(int day, int month, int year){
//     string namemonth;
//     switch (month){
//         case 1 : namemonth= "januari"; break;
//         case 2 : namemonth= "Februari"; break;
//         case 3 : namemonth= "Maret"; break;
//         case 4 : namemonth= "April"; break;
//         case 5 : namemonth= "Mei"; break;
//         case 6 : namemonth= "Juni"; break;
//         case 7 : namemonth= "Juli"; break;
//         case 8 : namemonth= "Agustus"; break;
//         case 9 : namemonth= "September"; break;
//         case 10 : namemonth= "Oktober"; break;
//         case 11 : namemonth= "November"; break;
//         case 12 : namemonth= "December"; break;
//     }
//     cout << "The date is " << day << month << year << endl;
// }
// void printDate(int day, string month, int year){
//     cout << "The date is " << day << month << year << endl;
// }

// int main (){
//     printDate(5, "December", 2026);
//     printDate(7, "july", 2025);
// }

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