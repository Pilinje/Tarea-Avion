#ifndef FLIGHT_HPP
#define FLIGHT_HPP

#include <string>
#include <vector>
#include "Passenger.hpp"

class Flight {
public:
    std::string date;
    std::string hour;
    double price;
    std::string airplaneModel;
    std::string fromTo;
    double distance;
    std::string crew;
    double fuel;
    std::vector<Passenger> seats;

    Flight(const std::string& date, const std::string& hour, double price,
           const std::string& airplaneModel, const std::string& fromTo, double distance,
           const std::string&
