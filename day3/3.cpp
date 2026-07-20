#include<iostream>
using namespace std;
int main(){
    
    int principal;
    float rate;
    int time;
    float SI = principal * rate * time / 100;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest: ";
    cin >> rate;    

    cout << "Enter the time in years: ";
    cin >> time;

    cout << "The simple interest is = " << SI;



    return 0;

}