#include <iostream>
using namespace std;

int main() {
    double budget;
    string season, tripType;
    int days;

    cout << "=====  Travel Agent =====\n\n";

    // Sensor
    cout << "Enter your budget (USD): ";
    cin >> budget;

    cout << "Enter season (summer/winter/monsoon): ";
    cin >> season;

    cout << "Enter trip type (adventure/relaxation/family/cultural): ";
    cin >> tripType;

    cout << "Enter number of days: ";
    cin >> days;

    cout << "\n----------- Recommendation -----------\n";

    // Processing
    if (budget < 300 || days < 2) {
        cout << "Sorry, not enough budget or days for a trip.\n";
    }
    else if (tripType == "adventure" && season == "winter") {
        cout << "Go to Swiss Alps for skiing and trekking.\n";
    }
    else if (tripType == "adventure") {
        cout << "Go to Nepal for trekking and rafting.\n";
    }
    else if (tripType == "relaxation" && budget >= 1500) {
        cout << "Go to Maldives for a luxury beach holiday.\n";
    }
    else if (tripType == "relaxation") {
        cout << "Go to Goa for a budget-friendly beach trip.\n";
    }
    else if (tripType == "family" && days >= 5) {
        cout << "Go to Dubai for family theme parks.\n";
    }
    else if (tripType == "family") {
        cout << "Go for a short local city tour.\n";
    }
    else if (tripType == "cultural") {
        cout << "Go to Turkey for historical and cultural sites.\n";
    }
    else {
        cout << "Go for a standard city tour package.\n";
    }

    cout << "---------------------------------------\n";

    return 0;
}