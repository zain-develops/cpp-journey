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


int getdigit(const int number){
    
    // 18 => 18 % 10 = 8
    //      18 / 10 = 1
    //      1 % 10 = 1
    //      8 + 1 = 9

    return number % 10 + (number / 10 % 10);

}

int sumOddNum(const std::string cardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] - '0';
    }

    return sum;

}

