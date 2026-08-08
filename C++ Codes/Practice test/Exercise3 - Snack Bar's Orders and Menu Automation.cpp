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

/* [3] A snack bar wants to automate its orders. Each
Item of the menu has a code and a price, write a program in C++ which:
-
=> Shows the menu on the side
=> Requests the user to type the item's code they want
=> Asks the user to insert the amount of the items they desire
=> Displays the name of the item and its corresponding pricing
=> If the code does not exist, shows the message "Invalid Code"*/

/* Menu Table
   | CODE | ITEM    |  PRICING (Brazilian Reals) |
   | 1    | Hotdog  | 6.00                       |
   | 2    | X-salad | 8.5                        |
   | 3    | X-bacon | 9.5                        |
   | 4    | Toast   | 4.5                        |
   | 5    | Soda    | 5                          |
*/


#include <iostream>

int main(){
    int code, quantity;
    std::string item;
    float price, total;
    
    std::cout << "===== MENU =====" << std::endl;
    std::cout << "1 - Hotdog - R$ 6.00" << std::endl;
    std::cout << "2 - X-salad - R$ 8.50" << std::endl;
    std::cout << "3 - X-bacon - R$ 9.50" << std::endl;
    std::cout << "4- Toast - R$ 4.50" << std::endl;
    std::cout << "5 - Soda - R$ 5.00" << std::endl;
    std::cout << "==================" << std::endl;
    
    std::cout << "\nType the code of the desired item: ";
    std::cin >> code;
    
    std::cout << "Type the amount: ";
    std::cin >> quantity;
    
    if(code == 1){
        item = "Hotdog";
        price = 6.0;
    }
    else if(code == 2){
        item = "X-salad";
        price = 8.5;
    }
    else if(code == 3){
        item = "X-bacon";
        price = 9.5;
    }
    else if(code == 4){
        item = "Toast";
        price = 4.5;
    }
    else if(code == 5){
        item = "Soda";
        price = 5.0;
    }
    else{
        std::cout << "Invalid code, enter an existing code." << std::endl;
    }
    
    total = price * quantity;
    
    std::cout << "\n Chosen Item: " << item << std::endl;
    std::cout << "Unit price: R$ " << price << std::endl;
    std::cout << "Amount: " << quantity << std::endl;
    std::cout << "Total due: R$ " << total << std::endl;
    
return 0;
}

