#include <iostream>


// An example of user-defined-fuunction 
void otherFunction()
{
    std::cout <<"Hello Pal!\n";

}

//In this fuction we have declared it first and then enterd it's content (It's also right!)
void demoFunction();

//Function with parameters and arguements
void Func(std::string name = "Bro"){
     std::cout << "I am " << name <<".\n";
    
}

//function demonstrating return keyword
double square (double length);

//Overloaded functions
void makeShake(std::string toppings);

void makeShake(std::string topping1 , std::string topping2);


int main(){
    
    // User-defined-function should be declared before main function
    // we can call one function multiple times
     otherFunction();
     otherFunction();
     otherFunction();


     demoFunction();

     Func();
     Func("Ali");
     Func("Sara");
     Func("Asad");

     double length = 8.0;
     double area = square(length);

     std::cout << "Area : " << area << "cm^2\n";


     //Overloaded functions
     makeShake("Chocolate");
     makeShake("Chocolate" , "Vanilla");

     
    
     // return = return a value back to thr spot where you called the encompassing function
     return 0;
}


void demoFunction(){

    std::cout <<"I am declared first and then my content is entered.\n";

}

double square (double length){
    return length * length;
}



//Overloaded functions
void makeShake(){
    std::cout <<"Here is your milkshake\n";
}

void makeShake(std::string toppings){
    std::cout <<"Here is your milkshake with " << toppings << ".\n";
}


void makeShake(std::string topping1 , std::string topping2){
    std::cout <<"Here is your milkshake with " << topping1 <<" and " << topping2 << ".\n";
}

