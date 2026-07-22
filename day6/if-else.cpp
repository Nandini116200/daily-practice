/*#include<iostream>
using namespace std;
int main(){

    int A = 10 , B = 20;
    if (A >= B){
        cout << "A is greater than B" << endl;
    } else {
        cout << "B is greater than A" << endl;
    }


    return 0;
}*/

#include<iostream>
using namespace std;
int main(){

    int A , B;
    cout << "Enter the value for A = ";
    cin >> A;

    if(A % 2 == 0){
        cout << "The number is even" << endl;
    } else { 
        cout << "The nuber is odd \n"; 
    }



    return 0;
}