#ifndef AIRPORT_HPP
#define AIRPORT_HPP

#include <vector>
#include <string>
#include "Airline.hpp"

class Airport {
public:
    int id;
    std::string city;
    std::string date;
    std::string country;
    double totalTransactions;
    double totalDailyIncomes;
    std::vector<Airline> airlines;

    Airport(int id, const std::string& city, const std::string& date, const std::string& country);

    void printAllFlights() const;
    void printFlightSchedule() const;
};

#endif // AIRPORT_HPP
