/*#include<iostream>
using namespace std;
int main(){

    int marks;
    cout << "Enter your marks = ";
    cin >> marks;

    if (marks >= 90){
        cout << "Grade A";
    }
    else if (marks >= 80){
        cout << "Grade B";
    }
    else{
        cout << "Grade C";
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){

    int income;
    cout << "Enter your income = ";
    cin >> income;

    if(income <= 500000){
        cout << "Tax = 0%";
    }
    else if (income <= 1000000){
        cout << "Tax = 20%";
    }
    else {
        cout << "Tax = 30%";
    }
}*/

#include<iostream>
using namespace std;
int main(){

    int num1, num2, num3;
    cout << "Enter 3 numbers : ";
    cin >> num1 >> num2 >> num3;
    if (num1 > num2 && num1 > num3){
        cout << "num1 is the largest of all.";
    }
    else if (num2 > num1 && num2 > num3){
        cout << "num2 is the largest of all.";
    }
    else {
        cout << "num3 is the largest of all.";
    }
    return 0;
}
