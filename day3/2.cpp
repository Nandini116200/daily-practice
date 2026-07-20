#include<iostream>
using namespace std;
int main(){
    
    float pencil;
    float pen;
    float eraser;

    cout << "Enter the cost of pencils: ";
    cin >> pencil;

    cout << "Enter the cost of pens: ";
    cin >> pen;

    cout << "Enter the cost of erasers: ";
    cin >> eraser;

    cout << "Your total amount is = " << pencil + pen + eraser  + (0.18 * (pencil + pen + eraser)) ;
    return 0;
}
