#include<iostream>
using namespace std;
int main(){
    for(int i = 1 ; i <= 5 ; i++){
        if (i == 2){
             //break;
            continue;
        }
         cout << i << " ";
    }



    return 0;
}