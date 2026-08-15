#include <iostream>
#include <vector>

using namespace std;
using i = int;
// created namespace for datatype integer as "i"

using p = double;
//created namespace for datatype double as "p"

int main(){
    
    //addition of numbers
    i a = 3;
    i b = 8;
    i sum = a + b;
    
    cout << sum <<"\n";

    //subtraction of numbers 
    i o = 45;
    i u = 32;
    i diff = o-u;

    cout << diff << "\n";

    //increament & decreament in value using operators
    i c = 5;
    c += 5;

    i d = 10;
    d -= 6;
     
    cout << c << "\n";
    cout << d << "\n";

    //continous increament/decreament using operators (use in loops)
    i l = 5;
    l ++;
    i k = 8;
    k --;
    

    cout << l <<"\n";
    cout << k <<"\n";

    //multiplication & division operators
    i num1 = 5;
    i num2 = 4;
    i product = 5*4;

    cout << product << "\n";

    // using "p" as datatype to get decimal point values
    p num3 = 34;
    p num4 = 5;
    p div = num3/num4;

    cout<< div << "\n";

    //using modulus operator "%" for remainder
    i rem = 20%3;
    //here 3*6=18  , remainder=2 , quotient=6

    cout << rem <<"\n";



    //paranthesis (value in brackets)
    //multiplication & division
    //addition & subtraction

    p par = 8 * 9 + 10 / (6 - 1);
    //we foolow the rule mentioned above when performing multiple operations

    cout << par << "\n";





    //constant values can be stored permenantly by using const
    //one important condition is to use uppercase letters in variable when usig const keyword
    const p E = 2.718;
    
    /*even if we changes "e" value in another line , it will not change and will get an error
    as we have use const keyword

    */

    cout << E << "\n";


    //type conversion
    //for converting datatypes
    i numone = 7;
    i numtwo = 10;
    p solve = numone/(p)numtwo * 100;
    //converted datatype integer into float 

    cout << solve <<"%" <<"\n";



    
    
}


