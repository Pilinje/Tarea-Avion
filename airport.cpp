#include "airport.hpp"
#include <iostream>
#include <algorithm>

Airport::Airport(int id, const std::string& city, const std::string& date, const std::string& country)
    : id(id), city(city), date(date), country(country), totalTransactions(0), totalDailyIncomes(0) {}

void Airport::printAllFlights() const {
    std::cout << "Los vuelos programados para " << date << " son:\n";
    for (const auto& airline : airlines) {
        airline.printAllFlights();
    }
}

void Airport::printFlightSchedule() const {
    std::vector<Flight> allFlights;
    for (const auto& airline : airlines) {
        for (const auto& flight : airline.flights) {
            allFlights.push_back(flight);
        }
    }

    std::sort(allFlights.begin(), allFlights.end(), [](const Flight& a, const Flight& b) {
        return a.hour < b.hour;
    });

    std::cout << "Horarios de vuelos programados:\n";
    for (const auto& flight : allFlights) {
        flight.printFlightInfo();
    }
}
