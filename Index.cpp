#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;

// Structure to hold car info
struct carsInfo {
    string carName;
    string carType;
    string luxury;
    int cost;
    int seats;
};

// Admin class (placeholder)
class adminClass { };

// Database of cars
class CarDatabase {
public:
    vector<carsInfo> cars;

    CarDatabase() {
        cars.push_back({"Skoda Octavia", "sedan", "premium", 3800, 5});
        cars.push_back({"Toyota Camry", "sedan", "moderate", 3500, 5});
        cars.push_back({"Honda Civic", "sedan", "moderate", 3200, 5});
        cars.push_back({"Hyundai Elantra", "sedan", "low", 3000, 5});
        cars.push_back({"Maruti Suzuki Ciaz", "sedan", "low", 2800, 5});

        cars.push_back({"Toyota Fortuner", "suv", "premium", 6500, 7});
        cars.push_back({"MG Gloster", "suv", "premium", 6200, 7});
        cars.push_back({"Mahindra XUV700", "suv", "moderate", 5500, 7});
        cars.push_back({"Kia Seltos", "suv", "moderate", 4800, 5});
        cars.push_back({"Hyundai Creta", "suv", "low", 4500, 5});

        cars.push_back({"Mercedes Benz C-Class Cabriolet", "convertible", "premium", 14000, 4});
        cars.push_back({"Audi A5 Cabriolet", "convertible", "premium", 13500, 4});
        cars.push_back({"BMW Z4", "convertible", "moderate", 12000, 2});
        cars.push_back({"Mini Cooper Convertible", "convertible", "low", 10500, 4});
        cars.push_back({"Ford Mustang Convertible", "convertible", "moderate", 11500, 4});
    }
};

// Class for searching cars
class searchingClass {
    CarDatabase db;
public:
    void budget(int maxCost) {
        cout << "\n------------------------------------------------\n";
        cout << "Cars under budget " << maxCost << ":\n";
        cout << "------------------------------------------------\n";
        bool found = false;
        for (auto &car : db.cars) {
            if (car.cost <= maxCost) {
                cout << car.carName << " | " << car.carType << " | "
                     << car.luxury << " | " << car.cost
                     << " | " << car.seats << " seats\n";
                found = true;
            }
        }
        if (!found) cout << "No cars found under your budget.\n";
    }

    void seats(int requiredSeats) {
        cout << "\n------------------------------------------------\n";
        cout << "Cars with " << requiredSeats << " seats:\n";
        cout << "------------------------------------------------\n";
        bool found = false;
        for (auto &car : db.cars) {
            if (car.seats == requiredSeats) {
                cout << car.carName << " | " << car.carType << " | "
                     << car.luxury << " | " << car.cost
                     << " | " << car.seats << " seats\n";
                found = true;
            }
        }
        if (!found) cout << "No cars found with that seat requirement.\n";
    }

    void luxury(const string &input) {
        string lux = input;
        transform(lux.begin(), lux.end(), lux.begin(), ::tolower);

        cout << "\n------------------------------------------------\n";
        cout << "Cars with " << lux << " luxury:\n";
        cout << "------------------------------------------------\n";
        bool found = false;
        for (auto &car : db.cars) {
            if (car.luxury == lux) {
                cout << car.carName << " | " << car.carType << " | "
                     << car.luxury << " | " << car.cost
                     << " | " << car.seats << " seats\n";
                found = true;
            }
        }
        if (!found) cout << "No cars found in this luxury category.\n";
    }

    void carType(const string &input) {
        string type = input;
        transform(type.begin(), type.end(), type.begin(), ::tolower);

        cout << "\n------------------------------------------------\n";
        cout << "Cars of type " << type << ":\n";
        cout << "------------------------------------------------\n";
        bool found = false;
        for (auto &car : db.cars) {
            if (car.carType == type) {
                cout << car.carName << " | " << car.carType << " | "
                     << car.luxury << " | " << car.cost
                     << " | " << car.seats << " seats\n";
                found = true;
            }
        }
        if (!found) cout << "No cars found of this type.\n";
    }
};

// Customer class
class customerClass {
public:
    void categoryChoose() {
        string input;
        searchingClass search;

        while (true) {
            cout << "\nSelect filter to choose your Ride (number or name):\n";
            cout << "1. Budget\n2. Seats\n3. Luxury\n4. Car type\n";
            cout << "Enter filter: ";
            cin >> input;
            transform(input.begin(), input.end(), input.begin(), ::tolower);

            if (input == "1" || input == "budget") {
                int budgetTemp;
                while (true) {
                    cout << "Enter max budget: ";
                    if (cin >> budgetTemp && budgetTemp > 0) break;
                    cout << "Invalid input! Please enter a valid number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                search.budget(budgetTemp);
            }
            else if (input == "2" || input == "seats") {
                int seatsTemp;
                while (true) {
                    cout << "Enter required seats: ";
                    if (cin >> seatsTemp && seatsTemp > 0) break;
                    cout << "Invalid input! Please enter a valid number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                search.seats(seatsTemp);
            }
            else if (input == "3" || input == "luxury") {
                string luxInput;
                while (true) {
                    cout << "Enter luxury (premium/moderate/low) or 1/2/3: ";
                    cin >> luxInput;
                    transform(luxInput.begin(), luxInput.end(), luxInput.begin(), ::tolower);
                    if (luxInput == "premium" || luxInput == "1") luxInput = "premium";
                    else if (luxInput == "moderate" || luxInput == "2") luxInput = "moderate";
                    else if (luxInput == "low" || luxInput == "3") luxInput = "low";
                    else { cout << "Invalid input! Try again.\n"; continue; }
                    search.luxury(luxInput);
                    break;
                }
            }
            else if (input == "4" || input == "car" || input == "car type") {
                string typeInput;
                while (true) {
                    cout << "Enter car type (suv/sedan/convertible) or 1/2/3: ";
                    cin >> typeInput;
                    transform(typeInput.begin(), typeInput.end(), typeInput.begin(), ::tolower);
                    if (typeInput == "1" || typeInput == "suv") typeInput = "suv";
                    else if (typeInput == "2" || typeInput == "sedan") typeInput = "sedan";
                    else if (typeInput == "3" || typeInput == "convertible") typeInput = "convertible";
                    else { cout << "Invalid input! Try again.\n"; continue; }
                    search.carType(typeInput);
                    break;
                }
            }
            else {
                cout << "Invalid filter input! Try again.\n";
                continue;
            }

            // Ask user if they want to search again
            string again;
            cout << "\nDo you want to search again? (y/n): ";
            cin >> again;
            transform(again.begin(), again.end(), again.begin(), ::tolower);
            if (again == "n" || again == "no") break;
        }
    }
};

// Access class
class access {
public:
    void checking() {
        string userInput;
        while (true) {
            cout << "\nWho are you? (number or name):\n1. Admin\n2. Customer\nEnter Here: ";
            cin >> userInput;
            transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);
            if (userInput == "1" || userInput == "admin") {
                cout << "\n(Admin features not implemented yet)\n";
                break;
            }
            else if (userInput == "2" || userInput == "customer") {
                customerClass customer;
                customer.categoryChoose();
                break;
            }
            else {
                cout << "Invalid input! Try again.\n";
            }
        }
    }
};

// Main
int main() {
    cout << "\n------------------------------------------------\n";
    cout << "               Vehicle Rental System\n";
    cout << "------------------------------------------------\n";

    access accessManager;
    accessManager.checking();

    cout << "\nThank you for using Vehicle Rental System!\n";
    return 0;
}

