#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <ctime>
#include "Motorcycle.hpp"

int main() {
    srand(time(NULL));
    Motorcycle bike;

    std::cout << bike.getBikeType() << std::endl;
    
    return 0;
}