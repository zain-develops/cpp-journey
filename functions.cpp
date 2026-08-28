#include <iostream>


// An example of user-defined-fuunction 
void otherFunction()
{
    std::cout <<"Hello Pal!\n";

}

//In this fuction we have declared it first and then enterd it's content (It's also right!)
void demoFunction();


int main(){
    
    // User-defined-function should be declared before main function
    // we can call one function multiple times
     otherFunction();
     otherFunction();
     otherFunction();


     demoFunction();

}


void demoFunction(){

    std::cout <<"I am declared first and then my content is entered.\n";

}