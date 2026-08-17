#include <iostream>

using namespace std;

int main(){

    char grade;
    cout <<"Enter your grade:";
    cin >> grade;

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
}