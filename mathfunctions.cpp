#include <iostream>
#include <vector>
#include <cmath>   //using <<cmath>> to inculde maths functions
 
using namespace std;

int main(){

    double a = 4 , b = 7;
    double c , d , e , f , g , h , i , j;

    c = std:: max(a,b);     //max function gives maximim value
    d = std:: min(a,b);     //min function gives minimum value
    e = std:: pow(b,a);     //pow function gives product of a number and power of another number
    f = std:: sqrt(b);      //sqrt function gives square root of a number
    g = std:: abs(-9);      //abs function gives absolute value (removes negative sign)
    h = std:: round(5.5);   //round function gives round off value
    i = std:: ceil(3.01);   //ceil function round off value to nearest highest number 
    j = std:: floor(6.9);   //floor function round off value to nearest lower number
    
    cout << c <<"\n";
    cout << d <<"\n";
    cout << e <<"\n";
    cout << f <<"\n";
    cout << g <<"\n";
    cout << h <<"\n";
    cout << i <<"\n";
    cout << j <<"\n";

    return 0;
}