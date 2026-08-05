/******************************************************************************

CI180 | CI208 ELTDA - Computer Programming (Electrical Engineering Bachelor's Degree), 
Universidade Federal do Paraná

*******************************************************************************/

/* [1] Write a program which reads two integer numbers, sum them and read a 3rd number, 
then subtract with the sum and write the answer.*/

#include <iostream>

int main(){
    int n1, n2, n3;
    
    std::cout << "Type the first number: ";
    std::cin >> n1;
    
    std::cout << "Type the second number: ";
    std::cin >> n2;
    
    std::cout << "Type the third number: ";
    std::cin >> n3;
    
    int equation1 = (n1+n2)-n3;
    std::cout << "The answer is: " << equation1 << std::endl;
    
    return 0;
}