#include <iostream>
#include <cmath>
using namespace std;

double calculateFare(double distance, int passengers, bool airport) {
    const double MINIMUM_FARE = 5.00;
    const double RATE_PER_MILE = 1.80;
    const double FIRST_ADDITIONAL_PASSENGER = 1.00;
    const double ADDITIONAL_PASSENGER = 0.50;
    const double AIRPORT_SURCHARGE = 2.00;

    // Calculate the fare based on distance
    double fare = distance * RATE_PER_MILE;

    // Add charges for additional passengers
    if (passengers > 1) {
        fare += FIRST_ADDITIONAL_PASSENGER;
        fare += (passengers - 2) * ADDITIONAL_PASSENGER;
    }

    // Add airport surcharge if applicable
    if (airport) {
        fare += AIRPORT_SURCHARGE;
    }

    // Ensure the fare is at least the minimum fare
    if (fare < MINIMUM_FARE) {
        fare = MINIMUM_FARE;
    }

    return fare;
}

int main() {
    double distance;
    int passengers;
    char airportChar, airport;
    

    cout << "Enter the distance (in miles, measured to 1/10 of a mile): ";
    cin >> distance;
    cout << "Enter the number of passengers: ";
    cin >> passengers;
    cout << "Is the trip to/from the airport (y/n)? ";
    cin >> airportChar;
    airport = (airportChar == 'y' || airportChar == 'Y');

    double fare = calculateFare(distance, passengers, airport);
    cout << "The fare for the trip is: $" << fare << endl;

    return 0;
}
