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

/* [1] Write a code which calculates the reduction of a smoker's life expectancy. Ask
the user how many cigarettes they smoke per day and how many years they have been smoking.
-
Suppose that a smoker loses 10 minutes of their life expectancy for each cigarette. Calculate how
many days of life a smoker will lose. Display the answer in days.*/



#include <iostream>

int main()
{
    int cigarettesPerDay, YearsSmoking, total, minutesLost;
    float daysLost;
    
    std::cout << "How many cigarettes you smoke per day? ";
    std::cin >> cigarettesPerDay;
    
    std::cout << "How many years do you smoke? ";
    std::cin >> YearsSmoking;
    
    total = cigarettesPerDay * YearsSmoking * 365;
    minutesLost = total * 10;
    daysLost = minutesLost / 1440;
    
    std::cout << "You lost approximately " << daysLost << " days of your life." << std::endl;
    
    return 0;
}
