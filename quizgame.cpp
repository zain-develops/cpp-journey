#include <iostream>



int main(){

// Questions Array

std::string questions[20] = {
    "1. Which language is used to write C++ programs?",
    "2. Which function is the starting point of a C++ program?",
    "3. Which symbol is used to end a statement in C++?",
    "4. Which header file is commonly used for input and output in C++?",
    "5. Which object is used to display output on the screen?",
    "6. Which operator is used for addition?",
    "7. Which data type is used to store whole numbers?",
    "8. Which data type is used to store decimal numbers?",
    "9. Which symbol is used for a single-line comment?",
    "10. Which keyword is used to declare a constant?",
    "11. Which operator is used to assign a value to a variable?",
    "12. What is the correct way to declare an integer variable?",
    "13. Which statement is used to take input from the user?",
    "14. Which operator is used to compare two values for equality?",
    "15. Which keyword is used to make a decision in C++?",
    "16. Which loop is commonly used when the number of repetitions is known?",
    "17. Which keyword is used to exit a loop?",
    "18. What does endl do in C++?",
    "19. Which file extension is commonly used for C++ source files?",
    "20. Which command is commonly used to compile a C++ program with g++?"
};

// Options Array
std::string options[20][4] = {
    {"A. HTML", "B. C++", "C. CSS", "D. SQL"},
    {"A. start()", "B. begin()", "C. main()", "D. run()"},
    {"A. :", "B. ;", "C. .", "D. ,"},
    {"A. <iostream>", "B. <string>", "C. <math>", "D. <input>"},
    {"A. cin", "B. cout", "C. input", "D. print"},
    {"A. +", "B. -", "C. *", "D. /"},
    {"A. float", "B. char", "C. int", "D. string"},
    {"A. int", "B. float", "C. char", "D. bool"},
    {"A. //", "B. /*", "C. #", "D. --"},
    {"A. fixed", "B. constant", "C. const", "D. static"},
    {"A. ==", "B. =", "C. !=", "D. >"},
    {"A. integer x;", "B. int x;", "C. number x;", "D. var x;"},
    {"A. cout", "B. cin", "C. input", "D. get"},
    {"A. =", "B. !=", "C. ==", "D. <="},
    {"A. if", "B. check", "C. decide", "D. condition"},
    {"A. if", "B. for", "C. switch", "D. case"},
    {"A. stop", "B. exit", "C. break", "D. close"},
    {"A. Adds a comment", "B. Ends the program", "C. Moves output to a new line", "D. Takes input"},
    {"A. .html", "B. .cpp", "C. .exe", "D. .txt"},
    {"A. g++ program.cpp", "B. run program.cpp", "C. compile program.cpp", "D. cpp program.cpp"}
};

// Answer Key Array
char answerKey[] = {
    'B', 'C', 'B', 'A', 'B',
    'A', 'C', 'B', 'A', 'C',
    'B', 'B', 'B', 'C', 'A',
    'B', 'C', 'C', 'B', 'A'
};

int size = sizeof(questions)/sizeof(questions[0]);
char guess;
int score = 0;

for(int i = 0; i < size; i++){
    std::cout <<"***********************\n";
    std::cout <<questions[i] <<"\n";
    std::cout <<"***********************\n";

    for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
        std::cout <<options[i][j] <<"\n";

    }

    std::cin >> guess;
    guess = toupper(guess);

    if(guess == answerKey[i]){
         std::cout <<"Correct!\n";
         score++;
    }
    else{
        std::cout <<"Wrong!"; 
        std::cout << "Answer : "<< answerKey[i] <<"\n";
    }

}


std::cout <<"***********************\n";
std::cout <<"         RESULTS       \n";
std::cout <<"***********************\n";
std::cout <<"Correct Answers : " << score <<"\n";
std::cout <<"No. of attempts : " << size <<"\n";
std::cout <<"Score : " << (score/(double)size) * 100 <<"%\n"; 


}