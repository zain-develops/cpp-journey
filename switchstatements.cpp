#include <iostream>

using namespace std;

int main(){

    char grade;
    cout <<"Enter your grade:";
    cin >> grade;

 //Switch statements checks for each case until one case is true and if there's no true case then it moves to default case    
    switch (grade)
    {
    case 'A':
        cout << "You did great!";
        break;

    case 'B':
        cout << "You did well!";
        break;

    case 'C':
        cout << "You did average!";
        break;

    case 'D':
        cout << "You did below average!";
        break;

    case 'E':
        cout << "You didn't do good!";
        break;

    case 'F':
        cout << "YOU FAILED!";
        break;

    
    default:
        cout << "Please enter your grade from (A-F)!";
        break;
    }

    return 0;

     //Break statement
    //it is uesd when you want to break the loop at some point
    for (int i = 0; i <= 32; i+=2)
    {
        //it will skip 26 number and onwards numbers that will be run in loop
        if( i == 26 ){
            break;
        }
        std::cout << i << "\n";

    }
    
    //continue statement
    //it is uesd when you want to break the loop at some point and then want it to continue after
    for (int i = 0; i <= 39; i+=3)
    {
        //it will skip 24 number and then will continue till 39 number
        if( i == 24 ){
            continue;
        }
        std::cout << i << "\n";

    }
    
}
