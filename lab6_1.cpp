#include<iostream>
using namespace std;

int main(){
    int number = 1;
     int X=0,Y=0; 
    while(number != 0){
        cout << "Enter an integer: ";
        cin >> number;
    
    if(number%2 == 0){
        X = X+1;
    }else{
        Y = Y+1 ;
    }
    }
    cout << "#Even numbers = " << X-1 << "\n";
    cout << "#Odd numbers = " << Y;
    return 0;
}