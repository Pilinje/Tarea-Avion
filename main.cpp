#include "airport.hpp"
#include "airline.hpp"
#include "flight.h"
#include "passenger.h"

int main() {
    // Crear algunos pasajeros
    Passenger p1("John Doe", "123456789");
    Passenger p2("Jane Smith", "987654321");

    // Crear un vuelo y agregar pasajeros
    Flight flight1("01/01/2025", "12:00", 300.0, "Boeing 737", "NYC-LAX", 2451, "Crew1", 500);
    flight1.addPassenger(p1);
    flight1.addPassenger(p2);

    // Crear una aerolínea y agregar el vuelo
    Airline airline1("New York", "Delta", 100000.0);
    airline1.addFlight(flight1);

    // Crear un aeropuerto y agregar la aerolínea
    Airport airport(1, "JFK", "01/01/2025", "USA");
    airport.airlines.push_back(airline1);

    // Imprimir información de vuelos
    airport.printAllFlights();
    airport.printFlightSchedule();

    return 0;
}
