#include <iostream>
using namespace std;
#include <string>

int main(){
    string member[5] = {"Ani", "budi", "Wati", "Iwan", "Santi"};
    int memberID;
    string name;
    bool isMember;
    int entrancefee;

    cout <<  "Welcome to the book store! " << "\n";
    cout << "Are you a member ? " << "\n";
    cin>>isMember;
    if (isMember) {
        cout << "Enter memberID (0-4) : ";
        cin >> memberID ;
        if (memberID>=0 && memberID<5){
            name = member[memberID];
            entrancefee=0;
        } else {
            cout << "invalid is a member" << "\n";
            entrancefee=1000;
            name = "guest";
        }
        cout << " welcome " <<name<< "\n";
        cout << "your entrance fee is " << entrancefee ;
    }

    string tittle [5] = {"harry potter", "algorhitm", "calculus", "sherlock holmes", "supernova"};
    int price [5] = {250000, 85000, 130000, 270000, 180000};
    bool available [5] = {true, true, false, true, true};
    int bookID;
    int total;

    cout << "Below are available books" << "\n";
    for (int i=0; i<5; i++) 
    {
        if (available [i]==false){
        continue;}
    cout << "Book id " << i << " tittle " << tittle[i] << " price " <<price [i] << endl;
}
cout << "Select book id" << endl;
cin>> bookID;
total= entrancefee+price[bookID];
cout<< "Your selected book is " <<tittle[bookID]<< " with a total price of " << total << endl; 
}