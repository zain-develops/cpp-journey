#include <iostream>

using namespace std;

int main(){
    
    //An if else statement program that tells us whether the entered number is even or odd
    int num;

    cout <<"Enter any number:";
    cin >> num;

    if( num % 2 == 0){
        cout << "Even number" <<"\n";

    }

    else{
        cout << "Odd number" <<"\n";
    }

    //An else if statement program that tells what you are based on your networth
    double networth;

    cout <<"Enter your networth:";
    cin >> networth;

    if ( networth >= 100000 ){
        cout << "You're a middle class.";
    }

    else if( networth >= 1000000 ){
        cout << "You're a millioniare.";
    }

    else if( networth >= 100000000 ){
        cout << "You're a multi millioniare.";
    }

    else if( networth >= 1000000000 ){
        cout << "You're a billioniare.";
    }

    else if( networth < 0 ){
        cout << "You're in a debt.";
     }
    
    else{
        cout << "You've zero networth.";
    } 

    return 0;
}