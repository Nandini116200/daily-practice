/*#include<iostream>
using namespace std;
int main(){
    int day;
    cout << "Enter day : ";
    cin >> day;

    switch (day){
        case 1: cout << "Mon";
        break;
        case 2: cout << "Tue";
        break;
        case 3: cout << "Wed";
        break;
        case 4: cout << "Thurs";
        break;
        case 5: cout << "Fri";
        break;
        case 6: cout << "Sat";
        break;
        case 7: cout << "Sun";
        break;
        default : cout << "No such day found";
    }
    return 0;
}*/


#include<iostream>
using namespace std;
int main(){

    int num1 , num2;
    char op;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    cout << "Enter operation : ";
    cin >> op;

    switch (op){
        case '+' : cout << num1+num2;
            break;
        case '-' : cout << num1-num2;
            break;
        case '*' : cout << num1*num2;
            break;
        case '/' : cout << num1/num2;
            break;
        case '%' : cout << num1%num2;
            break;
        default : cout << "Enter valid operator";
    }
    return 0;
}