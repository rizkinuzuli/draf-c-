#include <iostream>
using namespace std;
#include <string>

int sum (int number){
    if (number>0){
    cout << number << "\t";
    return number + sum(number - 1);
}
else {
    return 0;
}
}
int main(){
    sum (8);
}