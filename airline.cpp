#include "Airline.hpp"
#include <iostream>

Airline::Airline(const std::string& boardingCity, const std::string& shortName, double incomes)
    : boardingCity(boardingCity), shortName(shortName), incomes(incomes) {}

void Airline::addFlight(const Flight& flight) {
    flights.push_back(flight);
}

void Airline::printAllFlights() const {
    for (const auto& flight : flights) {
        flight.printFlightInfo();
    }
}
