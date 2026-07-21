#include<iostream>
using namespace std;

int main(){

    int x = 2, y = 5;
    int exp1 = (x * y / x); /*here first whole bracket is taken under consideration*/
    int exp2 = (x * (y / x)); /*here based upon bodmas rule*/

    cout << exp1 << ","; // , after the answer
    cout << exp2 << "\n"; // line change after this.


    return 0;
}

