#include<iostream>
using namespace std;
int main(){
    int num = 1;
    for(num = 1 ; num <= 10 ; num++ ){
        if(num == 5){
            break; //loop ko chodkar nikal jao
        }
        cout<<num<<" ";
    }
    


    return 0;
}