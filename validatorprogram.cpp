#include <iostream>

int getdigit(const int number);
int sumOddNum(const std::string cardNumber);
int sumEvenNum(const std::string cardNumber);

int main(){

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card Number# : ";
    std::cin >> cardNumber;

    result = sumEvenNum(cardNumber) + sumOddNum(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid.";

    }

    else{
        std::cout << cardNumber << " is not valid.";
    }

    return 0;

}
