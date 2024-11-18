#include "Flight.hpp"
#include <iostream>

Flight::Flight(const std::string& date, const std::string& hour, double price,
               const std::string& airplaneModel, const std::string& fromTo, double distance,
               const std::string& crew, double fuel)
    : date(date), hour(hour), price(price), airplaneModel(airplaneModel), 
      fromTo(fromTo), distance(distance), crew(crew), fuel(fuel) {}

void Flight::addPassenger(const Passenger& passenger) {
    seats.push_back(passenger);
}

void Flight::printFlightInfo() const {
    std::cout << "Flight: " << date << " " << hour << " " << fromTo << " " << airplaneModel << "\n";
    std::cout << "Assigned Seats: ";
    for (const auto& passenger : seats) {
        std::cout << passenger.name << " ";
    }
    std::cout << "\n";
}
