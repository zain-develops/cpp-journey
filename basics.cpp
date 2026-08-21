
#include <iostream>
using namespace std;

//comments are text that are not taken in program and are used for making notes for yourself or another peoples
//types of comments
//this is  a single line comment 
/*this is a 
  multi 
  line 
  comment*/

int main() {
    cout <<"Hello World!" << '\n';
    cout <<"How are you!" << endl;

    //int (Whole numbers)
    int x = 234;
    int y = 78;
    int sum = x + y;
    int diff = x - y;

    cout <<x <<"\n";
    cout <<y <<"\n";
    cout <<sum <<"\n";
    cout <<diff <<"\n";

    //char (Single Character)
    char grade = 'A';
    cout <<grade <<'\n';


    //double (decimal numbers)
    double Gpa = 3.8;
    double petrolrate = 324;
    double temperature = 37.2;

    cout <<Gpa <<"\n";
    cout <<petrolrate <<"\n";
    cout <<temperature <<"\n";

    //string (Sequence of Characters)
    string greetings = "Hello! How are you?";
    string name = "What's your name?";

    cout <<greetings <<"\n";
    cout <<name <<"\n";

    //Boolean (true or false)
    bool eligible = false;
    bool learning = true;

    cout <<eligible <<"\n";
    cout <<learning <<"\n";

    //some useful string methods
    std::string demo = "Hello friend!, how are you?";
    std::string emo = "Hello Albert!";
    std::string mo = "Nice job";
    
    std::cout << demo.length() <<"\n";    //checks string length

    std::cout << demo.empty() <<"\n";     //empty the string and display length "0"

    demo.clear();                         //clears the string value and nothing appears in console
    std::cout << demo;                    

    emo.append( ", Are you fine?");       //concatenate two strings
    std::cout << emo << "\n";

    std::cout << emo.at(0) <<"\n";        //gives you value on that specific index that you enter

    mo.insert( 8 , "!" );                 //insert a specific value at specified index
    std::cout << mo <<"\n";

    std::cout << mo.find(" ") <<"\n";     //finds specific value and gave it's index


                                          
    mo.erase( 5 , 8 );                    //erases value from one index value to another that you have entered 
    std::cout << mo <<"\n";               //in (5 , 8) first value is included while second value is not included when erase function is performed 
                                          //It will erase till 7 just before 8

}

