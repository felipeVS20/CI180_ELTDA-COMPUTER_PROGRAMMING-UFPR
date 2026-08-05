/******************************************************************************

CI180 | CI208 ELTDA - Computer Programming (Electrical Engineering Bachelor's Degree), 
Universidade Federal do Paraná

*******************************************************************************/

/* [2] Write a program in C++ which allows the user to input a integer number, then
calculate the area of an circle and displays the answer value on screen*/

#include <iostream>

int main(){
    float pi = 3.1415;
    int radius;
    
    std::cout << "Type a radius' integer value: ";
    std::cin >> radius;
    
    float circle_area = pi * (radius*radius);
    /* (radius*radius) means squared radius, as known as radius^2 */
    
    std::cout << "The circle's area is: " << circle_area << std::endl;
    
    return 0;
}