#include <iostream>

int main (){

    char unit;
    double value;
    std::cout <<"*******TEMPERATURE CONVERTOR*******" << std::endl;
    std::cout <<"In which form you want to convert temprature?" << std::endl;
    std::cout <<"F = Fahrenheit  or  C = Celsius" << std::endl;
    std::cout <<"Choose one of them : ";
    std::cin >> unit;

    
    if( unit == 'F'  ||  unit == 'f' ){
         std::cout <<"Enter temperature in Celsius : ";
         std::cin >> value;

         value = ( value * 1.8 ) + 32;
         std::cout << "Temperature in Fahrenheit : " << value <<"F" << std::endl;
    }

    else if( unit == 'C'  || unit == 'c' ){
          std::cout <<"Enter temperature in Fahrenheit : ";
          std::cin >> value;
          value = ( value - 32 ) / 1.8;
          std::cout << "Temperature in Celsius : " << value <<"C" << std::endl;
    }

    else{
        std::cout <<"Enter valid unit!" << std::endl;
    }

    std::cout <<"***********************************";

}