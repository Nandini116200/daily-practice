/*#include<iostream>
using namespace std;
int main(){
    for (int i = 1 ; i <= 5 ; i++){
        cout <<"Apna College\n";
    }
 return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    for(int a = 1 ; a <= 10 ; a++){
        cout<< a<<endl;
    }


    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Till what number you want the result to get printed : ";
    cin >> num;

    int sum = 0;

    for (int i = 1 ; i <= num ; i++)
        {  sum = sum + i ;}
        cout << sum ;
    

    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    for (int i = 1 ; i <= 4 ; i++){
        cout <<"****\n";
    }


    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "How many lines each of 5 stars you want : ";
    cin >> num;
    for (int i = 1 ; i <= num ; i++){
        cout <<"*****\n";
    }



    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value for n : ";
    cin >> n;
    for (int i = 1 ; i <= n ; i++){
        cout << i <<endl;
    }


    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value for n : ";
    cin >> n;
    for (int i = n ; i >= 1 ; i--){
        cout << i << ",";
    }



    return 0;
}*/

/*#include<iostream>
using namespace std;
int main (){
    int n = 10829;
    int digSum = 0;
    while(n > 0){
        int lastdigit = n % 10;
        digSum = digSum + lastdigit;
        n = n / 10;
    }
    cout << digSum;
    
    
return 0;
}*/

#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    
    while(n > 0 && n % 3 == 0){
        cout << n <<endl;
        n++;
        
        
    }
    
    
return 0;
}
