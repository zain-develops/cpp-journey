#include <iostream>

using namespace std;

int main (){

    int age;
    cout << "Enter your age : ";
    cin >> age;
    
    //demonstration of logical operators "&&" and "||"
    //&& is an operator used when we want all conditions to be true
    if( age >= 20 && age <=30 ){
      cout << "You're eligible for this job vaccancy except internships." <<"\n";

    }
    
    //|| is an or operator used when we want atleast one condtion to be true
    else if( age == 18 || age == 19 ){
      cout << "You're only eligible for intrenships!" <<"\n"; 
    }

    else{
        cout <<"You're ineligible for this job!" <<"\n";
    }

    //demostration of Not operator "!"
    bool marks;
    
    cout <<"Enter your marks : ";
    cin >> marks;
    
    //By using "!" result was changed from true to false
    if( !marks < 60 ){
        cout << "You've sufficient marks for this job!" << endl ;
    }

    else{
        cout << "You've insufficient marks for this job!" << endl ;
    }

    //ternary operator ?: = replacement of if/else statement
    //condition ? expression1 : expression2;
    int num = 45;
    num % 2 == 0 ? cout << "Even" : cout <<"Odd" <<"\n";

    //another way to use ternary operator
    bool hungry = true;
    cout << ( hungry ? "You are hungry" : "You are full");

    
    return 0;
}
