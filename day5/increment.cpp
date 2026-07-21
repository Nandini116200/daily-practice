#include<iostream>
using namespace std;
int main(){

    int a = 8;
    int b = a++; /*means a ki value ko phle b me store krdo then uska increment kro a me hi (POST INCREMENT)*/
    int c = ++a; /*means a ki value ko phle increase kro then usko store krdo (PRE INCREMENT) */

    cout << "a = " << a << endl;
    cout << "b = "<< b << endl;
    cout << "c = "<< c << endl;


    return 0;
}