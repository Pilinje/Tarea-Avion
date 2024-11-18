#ifndef AIRLINE_HPP
#define AIRLINE_HPP

#include <string>
#include <list>
#include "flight.hpp"

class Airline {
public:
    std::string boardingCity;
    std::string shortName;
    double incomes;
    std::list<Flight> flights;

    Airline(const std::string& boardingCity, const std::string& shortName, double incomes);

    void addFlight(const Flight& flight);
    void printAllFlights() const;
};

#endif // AIRLINE_HPP
