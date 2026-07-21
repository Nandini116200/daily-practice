#include<iostream>
using namespace std;
int main(){
    
    int a = 10;
    int b = 23;

    cout << (bool)(a + b) <<endl; // sum in true or false way
    cout << (char)(a - b) <<endl; // difference in character way
    cout << (float)(a * b) <<endl; // product in float way
    cout << (b / a) <<endl; //23 divided by 10
    cout << (b % a) <<endl; // remainder of 23 divided by 10
    
    
    
    return 0;
}