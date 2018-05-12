//Morris Eguakun
// 05/08/2018
//COMP3120 FizzBuzz Assignment


#include <iostream>

    using namespace std;



    int main(){

        int maxCount = 0;
        std::cout<< "Welcome to Fizzbuzz the fancy counting program\r\n" << endl;
        std::cout<< "Please enter the maximum number to count to: "<< endl;
        std::cin >> maxCount;


        for(int i=1; i<=1; i++){
            if((maxCount%3)==0 && (maxCount%5!=0))
                std::cout<< "Fizz"<<endl;
            if((maxCount%5)==0&& (maxCount%3!=0))
                std::cout<<"Buzz"<<endl;
            if((maxCount%5==0) &&(maxCount%3==0) && maxCount != 0)
                std::cout<< "FizzBuzz"<<endl;
        }

        std::cout<< "Thanks for using FizzBuzz. Press any key to end. "<<endl;
        getchar();
        return 0;
        }