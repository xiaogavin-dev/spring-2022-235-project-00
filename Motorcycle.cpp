#include "Motorcycle.hpp"
#include <cstdlib>
#include <string>

Motorcycle::Motorcycle():Motorcycle(rand() % 4) {}

Motorcycle::Motorcycle(int kind) { 
    if(kind >= 0 && kind <= 3) { 
        this->brand_ = bike_details::bike_brand(kind);
    } else {
        this->brand_ = bike_details::bike_brand(rand() % 4); 
    }
    
    this->curr_speed_ = 0;
    this->curr_direction_ = 0;
    this->distance_traveled_ = 0;
}

std::string Motorcycle::getDirection() { 

}

std::string Motorcycle::getBikeType() { 
    switch (this->brand_) {
    case 0: 
        return "YAMAHA";
    
    case 1: 
        return "DUCATI";

    case 2:
        return "HARLEY_DAVIDSON";

    case 3: 
        return "KAWSAKI";
    }
}