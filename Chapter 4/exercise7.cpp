// C++ Programming - From Problem Analysis to Program Design 5th Edition
// Chapter 4 - Exercise 7
// markdhoad@gmail.com

#include <iostream>

int main()
{
    const int COOKIES_PER_BOX = 24;
    const int BOXES_PER_CONTAINER = 75;
    int numberOfCookies, boxesRequired, containersRequired;
    
    std::cout << "Enter the total number of cookies: ";
    std::cin >> numberOfCookies;
    
    boxesRequired = numberOfCookies / COOKIES_PER_BOX;
    containersRequired = numberOfCookies / (COOKIES_PER_BOX * BOXES_PER_CONTAINER);
    
    std::cout << "That will require " << boxesRequired << " boxes and " << containersRequired+1 << " containers" << std::endl;
    std::cout << "There are also " << numberOfCookies % COOKIES_PER_BOX << " cookies left over" << std::endl;

    return 0;
}