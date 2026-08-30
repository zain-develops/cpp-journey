#include <iostream>
#include <iomanip>

void showbalance(double balance);

double deposit();

double withdraw(double balance);

int main (){


    double balance = 54;
    int choices = 0 ;

    do{

        std::cout << "\n**************************\n";
        std::cout << "Enter your choice : \n";
        std::cout << "1.Show Balance.\n";
        std::cout << "2.Deposit Money.\n";
        std::cout << "3.Withdraw Money.\n";
        std::cout << "4.EXIT.\n";
        std::cin >> choices;

        std::cin.clear();
        fflush(stdin);
    
        switch (choices)
        {
        case 1:
            showbalance(balance);
            break;
    
        case 2:
            balance += deposit();
            showbalance(balance);
            break;
    
        case 3:
            balance -= withdraw(balance);
            showbalance(balance);
            break;
    
        case 4:
            std::cout << "Thanks for visiting.";
            break;
        
        default:
            std::cout <<"Invalid choice.";
            break;
        }
    
    }while (choices != 4);

     return 0;
}
 

void showbalance(double balance){
     std::cout << "Your balance is : $" << std::setprecision(2) << std::fixed << balance ;
}

double deposit(){

    double amount = 0 ;

    std::cout << "Enter amount to be deposited : ";
    std::cin >> amount;

    if(amount > 0){
       return amount;
      
    }

    else{
        std::cout <<"That's not a valid amount\n";
        return 0;
    }
    
}

double withdraw(double balance){
        double amount = 0 ;

        std::cout << "Enter amount to be withdrawn : ";
        std::cin >> amount;


        if(amount > balance ){
        std::cout <<"Insufficient Funds\n";
        return 0;
        }

        else if(amount < 0){
         std::cout << "Invalid amount";
         return 0;
        }

        else{
            return amount;
        }
}