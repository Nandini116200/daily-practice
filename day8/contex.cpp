#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for(int a = 0 ; a <= n ; a++){
        if(a % 10 == 0){
            continue;
        }
        cout << a << endl;
    }
    return 0;
}