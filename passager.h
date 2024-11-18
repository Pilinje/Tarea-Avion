#ifndef PASSENGER_HPP
#define PASSENGER_HPP

#include <string>

class Passenger {
public:
    std::string name;
    std::string phone;

    Passenger(const std::string& name, const std::string& phone);
};

#endif // PASSENGER_HPP
