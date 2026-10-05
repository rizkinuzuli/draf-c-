#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fibonnaci (int n) {
    if (n <=1){
        return n;
    } else {
        return fibonnaci(n-1) + fibonnaci (n-2);
    }
}
int main(){
    int number = 13;
    cout<< "Jumlah Fibonnacinya adalah = " << number << endl;
    // cinn>> n_terms;

    for (int i = 0; i < number; i++){
        cout<<fibonnaci(i);
        if (i < number)
        {
            cout << ", ";
        }
    }
    cout<<endl;
}
    
