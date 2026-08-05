/******************************************************************************

CI180 | CI208 ELTDA - Computer Programming (Electrical Engineering Bachelor's Degree), 
Universidade Federal do Paraná

*******************************************************************************/

/* [3] Write a movie theater ticketing system which receives the age
of its customers and informs the price
-
Consider that:
=> Less than 5 years old has no Fee
=> Average ticket price: R$20 (Brazilian Reals)*/

#include <iostream>

int main(){
    int age;
    
    std::cout << "Type the customer's age: ";
    std::cin >> age;
    /* The exercise worked the usage of the "if" and "else" in the code*/
    if(age > 5){
        std::cout << "The ticket will cost R$20\n";
    }
    else{
        std::cout << "Admission will be free";
    }
    return 0;
}