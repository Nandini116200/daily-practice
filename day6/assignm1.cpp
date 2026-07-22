#include<iostream>
using namespace std;

int main(){
    int number ;
    cout << "Enter a number : ";
    cin >> number;
    if (number > 0){
        cout << "It is a positive number ";
    }
    if (number < 0){
         cout << "It is a negative number ";
    }
    else {
        cout << "It is a zero";
    }
    return 0;
}