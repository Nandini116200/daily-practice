#include<iostream>
using namespace std;

    int main(){

        /*starting with the && operator*/
        cout << ((5 == 5) && (5 < 6)) << endl;
        cout << ((5 == 5) || (5 > 6)) << endl;

        return 0;
    }
    /* [&& OPERATOR]
     1) true && true = true
     2) true && false = false
     3) false && true = false
     4) false && false = false 
     
     [|| OPERATOR]
     1) true || true = true
     2) true || false = true
     3) false || true = true
     4) false || false = false

     [!! OPERATOR
     1) !!true = true
     2) !!false = false] */
