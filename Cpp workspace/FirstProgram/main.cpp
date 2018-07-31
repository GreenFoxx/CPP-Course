#include <iostream>

int main() {
    int fav_number;
    
    int better_number;
    
    std::cout << "Enter your favourite number between 1 & 100. ";
    
    std::cin >> fav_number;
    
    std::cout << fav_number;
    
    std::cout << " sucks, pick a better number" << std::endl;
    
    std::cin >> better_number;
    
    std::cout << "That's more like it. ";
    
    std::cout << better_number;
    
    std::cout << " is truly superior.  ";
    
}