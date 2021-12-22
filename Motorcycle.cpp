#include "Motorcycle.hpp"
#include <cstdlib>
#include <string>
#include <ctime>

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
    return 0;
}

std::string Motorcycle::getBikeType() { 
    switch(this->brand_) {
    case 0: 
        return "YAMAHA";
    
    case 1: 
        return "DUCATI";

    case 2:
        return "HARLEY_DAVIDSON";

    case 3: 
        return "KAWSAKI";
    }

    return 0;
}

float Motorcycle::getSpeed() { 
    return this->curr_speed_;
}

float Motorcycle::getDistanceTraveled() { 
    return this->distance_traveled_; 
}

int Motorcycle::getIntensity() {
    return bike_details::acceleration(this->curr_acceleration_);  
}

void Motorcycle::turn(float degrees) { 
    // gets degrees in range of -360 <= d <= 360
    float d = (int)degrees % 360;

    this->curr_direction_ += d; 

    // checks to see if direction is outside of the bounds of -360 <= d <= 360
    if(this->curr_direction_ >= 360 || this->curr_direction_ <= -360) { 
        curr_direction_ = (int)this->curr_direction_ % 360;
    }
}