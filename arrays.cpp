#include <iostream>

int searchvalue(int array[], int size, int element);

void sorting(int sort[] , int size);

int main (){


    //arrays
    int array[] = { 10 , 20 , 30 , 40 , 50 };
     std::cout << array[0] << " :)\n";
     std::cout << array[1] << " :)\n";
     std::cout << array[2] << " :)\n";
     std::cout << array[3] << " :)\n";
     std::cout << array[4] << " :)\n";

    //sizeof() operator
    int num = 12;
    double dec = 4.34;
    std::string name = "Bro";
    bool right = true;
    char grade = 'B';
    std::string clubs[] = { "Real madrid" , "Chelsea" , "Bayern Munich" };

    std::cout << sizeof(num) << "Bytes\n";
    std::cout << sizeof(dec) << "Bytes\n";
    std::cout << sizeof(name) << "Bytes\n";
    std::cout << sizeof(right) << "Bytes\n";
    std::cout << sizeof(grade) << "Bytes\n";
    std::cout << sizeof(clubs) << "Bytes\n";


    //iterate over an array
    std::string players[] = {"Ronaldo", "Messi", "Neymar"};

    for(int i = 0 ; i < 3 ; i++){
        std::cout << players[i] <<"\n";
    }


    //A better approach for this is to use sizeof() operator
    std::string newplayers[] = {"Mbappe", "Haaland", "Bellingham"};

    for( int i = 0 ; i < sizeof(newplayers)/sizeof(std::string) ; i++){
        std::cout << newplayers[i] <<"\n";
    }


    //Another example
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for( int i = 0 ; i < sizeof(grades)/sizeof(char) ; i++){
        std::cout << grades[i] <<"\n";
    }


    // foreach loop = loop that eases the traversal over an iterable data set
    //A better and easy way is to use foreach loop
    int marks[] = {34, 43, 65, 78, 89};

    for(int scores : marks){
        std::cout << scores <<"\n";
    }

    //Search an array for an element using functions
    int numbers[] = {19 , 27 , 34 , 48 , 52 , 65};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int mynum;


    std::cout << "Enter the number you want to find : \n";
    std::cin >> mynum;
    std::cin.ignore();


    index = searchvalue(numbers, size, mynum);

    if (index != -1)
    {
        std::cout << mynum << " is at index " << index;

    }
    else{
        std::cout << mynum << " is not in the array ";
    }


     //sorting array
    int sort[]  = {4,9,5,7,1,8,10,2,6,3};
    int size_ = sizeof(sort)/sizeof(sort[0]);

    sorting(sort, size_);

    for ( int elem : sort){
        std::cout << elem << " ";

    }


    //fill() = print same value multiple times
    std::string laptops[10];

    fill(laptops , laptops + 10 , "lenovo" );

    for(std::string laptop : laptops){
        std::cout<< laptop <<'\n';
    }


    //fill an array with user input

    std::string icecream[5];
    int sizeis = sizeof(icecream)/sizeof(icecream[0]);

    for(int i = 0 ; i < sizeis ; i++){
        std::cout<< "Enter icecream flavour you like #" << i + 1 << " : \n";
        std::getline(std::cin , icecream[i]);
    }

    std::cout <<"Following are the icecream flavours that you like : \n";

    for(std::string flavours : icecream){
        std::cout << flavours<<'\n';

    }

    //2d arrays(multidimensionla arrays)
    std::string cars[][3] = {{"Audi" , "BMW" , "Mercedes"},
                             {"Lamborghini" , "Ferrari" , "Pagani"},
                             {"Toyota" , "Honda" , "Nissan"}};

    std::cout<< cars[0][0]<< " ";                         
    std::cout<< cars[0][1]<< " ";                         
    std::cout<< cars[0][2]<< "\n";                         
    std::cout<< cars[1][0]<< " ";                         
    std::cout<< cars[1][1]<< " ";                         
    std::cout<< cars[1][2]<< "\n";                         
    std::cout<< cars[2][0]<< " ";                         
    std::cout<< cars[2][1]<< " ";                         
    std::cout<< cars[2][2]<< "\n"; 

    //Another example of 2d arrays using nested loops
    std::string countries[3][3] = {{"Germany" , "France" , "Italy"},
                                   {"Brazil" , "Chile" , "Peru"}, 
                                   {"Japan" , "Russia" , "China"}};                

    int rows = sizeof(countries)/sizeof(countries[0]);
    int columns = sizeof(countries[0])/sizeof(countries[0][0]);

    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < columns ; j++){
           std::cout<< countries[i][j] <<" ";
        }
        std::cout<< "\n";
    }

    //Tomorrow's im gonna come with a new program
    
    return 0;
    
}

int searchvalue(int array[], int size, int element){

    for(int i = 0 ; i < size ; i++ ){
         if(array[i] == element){
            return i;
         }
    }
    return -1;
}

void sorting(int sort[] , int size_){

    int temp;
    for(int j = 0 ; j < size_ - 1 ; j++){
        for(int k = 0 ; k < size_ - j - 1 ; k++){
            if(sort[k] > sort[k + 1]){
               temp = sort[k];
               sort[k] = sort[k + 1];
               sort[k + 1] = temp;
            }
        }

    }

}

