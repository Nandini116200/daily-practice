#include<iostream>
using namespace std;
int main(){
    
    cout<<(bool)3+2 <<endl;
    //here 3 is being converted to bool first means(3 converted to true as non-zero) and then +2

    cout<<(23.5 + 2 + 'A');
    //here answer to be printed in float format as it is of higher hierachy 
    
    
    return 0;

}