#include <iostream>
#include "../include/task.h"

int main() {
    long long divider {0}, boundary {0};


    do {
        std::cout << "Enter divider: ";
        std::cin >> divider;
    } while (is_valid_int_input(divider > 0) == false);

    do {
        std::cout << "Enter right boundary: ";
        std::cin >> boundary;
    } while (is_valid_int_input(boundary >= divider && boundary > 0) == false);

    std::cout << "Answer: " << lab1_var15(divider, boundary) << std::endl;
    
    return 0;
}