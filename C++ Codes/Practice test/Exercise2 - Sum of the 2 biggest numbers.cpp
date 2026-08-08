/******************************************************************************
 █████  █████ ███████████ ███████████  ███████████  
░░███  ░░███ ░░███░░░░░░█░░███░░░░░███░░███░░░░░███ 
 ░███   ░███  ░███   █ ░  ░███    ░███ ░███    ░███ 
 ░███   ░███  ░███████    ░██████████  ░██████████  
 ░███   ░███  ░███░░░█    ░███░░░░░░   ░███░░░░░███ 
 ░███   ░███  ░███  ░     ░███         ░███    ░███ 
 ░░████████   █████       █████        █████   █████
  ░░░░░░░░   ░░░░░       ░░░░░        ░░░░░   ░░░░░ 
                                                    
                                                    
                                                    
CI180 | CI208 ELTDA - Computer Programming (Electrical Engineering Bachelor's Degree), 
Universidade Federal do Paraná

*******************************************************************************/

/* [2] Implement a program which reads 3 numerical values and write the sum of the
2 biggest ones*/


#include <iostream>

int main(){
    float num1,num2,num3,sum;
    
    std::cout << "Type three values: ";
    std::cin >> num1;
    std::cin >> num2;
    std::cin >> num3;
    
    if(num1 <= num2 && num1 <= num3){
        sum = num2+num3;
    }
    else if (num2 <= num1 && num2 <= num3){
        sum = num1+num3;
    }
    else{
        sum = num1+num2;
    }
    
    std::cout << "The sum of the two biggest value is: " << sum << std::endl;
    
    return 0;
}

