#include <iostream>
#include <string>
#include <vector>
#include <string>
#include "Data.cpp"
//#include "httplib.h"
using namespace std;

struct carsInfo{
    string carType;
    string luxury;
    int cost;
    int seats;
};
//Class For Admin Login(Idea: Can include the booking for the admin in low costs)
class adminClass{

};

class Booking{
    string name;
    string phoneNo;
    string mailId;
    string password;
    public:
    Booking(){
        cout << "Enter the Your name: ";
        cin >> name;
        cout << "Enter the Your phone number: ";
        cin >> phoneNo;
        cout << "Enter the Email Id: ";
        cin >> mailId;
        cout << "Enter the Password: ";
        cin >> password;
        puttingData pushingData(name, phoneNo, mailId, password);
    }
    void checking(){
        
    }

};
class Data{
    vector <vector <string>> cars;
    vector <string> forDisplay;

    public:
    Data() {
        cars.push_back({"Skoda Octavia", "sedan", "premium", "3800", "5"});
        cars.push_back({"Toyota Camry", "sedan", "moderate", "3500", "5"});
        cars.push_back({"Honda Civic", "sedan", "moderate", "3200", "5"});
        cars.push_back({"Hyundai Elantra", "sedan", "low", "3000", "5"});
        cars.push_back({"Maruti Suzuki Ciaz", "sedan", "low", "2800", "5"});

        cars.push_back({"Toyota Fortuner", "suv", "premium", "6500", "7"});
        cars.push_back({"MG Gloster", "suv", "premium", "6200", "7"});
        cars.push_back({"Mahindra XUV700", "suv", "moderate", "5500", "7"});
        cars.push_back({"Kia Seltos", "suv", "moderate", "4800", "5"});
        cars.push_back({"Hyundai Creta", "suv", "low", "4500", "5"});

        cars.push_back({"Mercedes Benz C-Class Cabriolet", "convertible", "premium", "14000", "4"});
        cars.push_back({"Audi A5 Cabriolet", "convertible", "premium", "13500", "4"});
        cars.push_back({"BMW Z4", "convertible", "moderate", "12000", "2"});
        cars.push_back({"Mini Cooper Convertible", "convertible", "low", "10500", "4"});
        cars.push_back({"Ford Mustang Convertible", "convertible", "moderate", "11500", "4"});
        forDisplay.push_back({"Cars's Name: "});
        forDisplay.push_back({"Car Type: "});
        forDisplay.push_back({"Luxury Level: "});
        forDisplay.push_back({"Cost of car per day: "});
        forDisplay.push_back({"Seats: "});

    }

    void displayData(int input){
        //cout << "hello";
        for(int i = 0; i < 5; i++){
            cout << " " << forDisplay[i];
            cout << cars[input][i] << endl;;
        }
        cout << endl;
        Booking obj1;
    }


};
//class for the searchings of cars.
class searchingClass{
    public:
    void budget(int cost){
        int costArr[] = {3800, 3500, 3200, 3000, 2800, 6500, 6200, 5500, 4800, 4500, 14000, 13500, 12000, 10500, 11500};
        int i = 0;
        int actualCost = 0;
        int low=0;
        int high=0;
        while (i < 15){
        if(cost == costArr[i]){
        //Have to dvelop to that condition where it return the all info about the related car if the user give the budget
            actualCost = costArr[i];
            cout << endl <<"======================================================" << endl << "     There your's car info related to your budget " << endl << "======================================================" << endl << endl;
            Data a;
            a.displayData(i);
            break;
        }
        else if(cost < costArr[i]){
            if(high == 0){
                high = costArr[i];
            }
            else if(high > costArr[i]){
                high = costArr[i];
            }
        }
        else{
            if(low == 0){
                low = costArr[i];
            }
            else if(low < costArr[i]){
                low = costArr[i];
            }
        }
        i++;
        }
        if(actualCost == 0){
            for(int i = 0; i < 15; i++){
                if (low == costArr[i]){
                    cout << endl <<"========================================================" << endl << "     Car's info litlle low from the searched amount " << endl << "========================================================" << endl << endl;
                    Data input;
                    input.displayData(i);
                }
                else if(high == costArr[i]){
                    cout << endl <<"========================================================" << endl << "    Car's info little more from the searched amount " << endl << "========================================================" << endl << endl;
                    Data input;
                    input.displayData(i);
                }
            }
        }
    }

    void seats(int seats){
        int seatsArr[] = {5,5,5,5,5,7,7,7,5,5,4,4,2,4,4};
        vector<int> Temp;
        vector<int> tempLow;
        vector<int> tempHigh;
        int temp = 0;
        int templow;
        int temphigh;
        for (int i = 0; i < 15; i++){
            if(seats == seatsArr[i]){
                temp = seatsArr[i];
            }
            else if(seats < seatsArr[i]){
                int trial = 0;
                if (trial == 0){
                    temphigh = seatsArr[i];
                    trial++;
                }
                else if(temphigh > seatsArr[i]){
                    temphigh = seatsArr[i];
                }
            }
            else if(seats > seatsArr[i]){
                int trial = 0;
                if(trial == 0){
                    templow = seatsArr[i];
                    trial++;
                }
                else if(templow < seatsArr[i]){
                    templow = seatsArr[i];
                }
            }
        }
        for(int i = 0; i < 15; i++){
            if(temp != 0){
                if(temp == seatsArr[i]){
                Temp.push_back(i);
                }
            }
            else{
                if(templow == seatsArr[i]){
                    tempLow.push_back(i);
                }
                else if(temphigh == seatsArr[i]){
                    tempHigh.push_back(i);
                }
            }
        }
        if(temp != 0){
            int n = Temp.size();
            for(int i = 0; i < n; i++){
                cout << endl <<"==========================================================" << endl << "     Car's info according to the number of seats" << endl << "==========================================================" << endl << endl;
                Data input;
                input.displayData(Temp[i]);
            }
        }
        else{
            int n = tempLow.size();
            int j = tempHigh.size();
            for(int i = 0; i < j; i++){
                cout << endl <<"=====================================================" << endl << "     Car's info according to the number of seats" << endl << "=====================================================" << endl << endl;
                Data input;
                input.displayData(tempHigh[i]);
            }
            for(int i = 0; i < n; i++){
                cout << endl <<"=====================================================" << endl << "     Car's info according to the number of seats" << endl << "=====================================================" << endl << endl;
                Data input;
                input.displayData(tempLow[i]);
            }
        }
    }
    void luxury(int luxury){
            if(luxury == 1){
                Data input;
                input.displayData(0);
                input.displayData(5);
                input.displayData(6);
                input.displayData(10);
                input.displayData(11);
            }
            else if(luxury == 2){
                Data input;
                input.displayData(1);
                input.displayData(2);
                input.displayData(7);
                input.displayData(8);
                input.displayData(12);
                input.displayData(14);
            }
            else{
                Data input;
                input.displayData(3);
                input.displayData(4);
                input.displayData(9);
                input.displayData(13);
            }
    }
    void carType(int carstype){
           if(carstype == 2){
                Data input;
                input.displayData(0);
                input.displayData(1);
                input.displayData(2);
                input.displayData(3);
                input.displayData(4);
            }
            else if(carstype == 1){
                Data input;
                input.displayData(5);
                input.displayData(6);
                input.displayData(7);
                input.displayData(8);
                input.displayData(9);
            }
            else{
                Data input;
                input.displayData(10);
                input.displayData(11);
                input.displayData(12);
                input.displayData(13);
                input.displayData(14);
            } 
    }
};

//Class for registeration as customer
class customerClass{
    public:
    void categoryChoose(){
        cout << endl << "Select filter to choose your Ride(TYPE THE NUMBER IN FRONT OF OPTIONS)" << endl;
        cout << "1. Budget:" << endl << "2. Seats:" << endl << "3. Luxury:" << endl << "4. Car type:" << endl << "Enter the number of filter: ";
        int categoryTemp;
        cin >> categoryTemp;

        switch (categoryTemp){
        case 1:
            int budgetTemp;
            cout << "Enter the budget that you have: ";
            cin >> budgetTemp;
            searchingClass b;
            b.budget(budgetTemp);
            break;
        case 2:
            int seatsTemp;
            cout << "Enter the seats that you want: ";
            cin >> seatsTemp;
            searchingClass s;
            s.seats(seatsTemp);
            break;
        case 3:
            cout << "There are three types of luxury: " << endl << "1. Premium" << endl << "2. Moderate" << endl << "3. Low" << endl << "Enter the number of the luxury: ";
            int luxuryTemp;
            cin >> luxuryTemp;
            searchingClass l;
            l.luxury(luxuryTemp);
            break;
        case 4:
            cout << "We have three types of car: " << endl << "1. SUV" << endl << "2. Sedan" << endl << "3. Convertible" << endl << "Enter your number of choise: " ;
            int cartypeTemp;
            cin >> cartypeTemp;
            searchingClass c;
            c.carType(cartypeTemp);
            break;
        default:
            cout << "Sorry we are still Working on more categories" << endl;
            break;
        }

    }
};

class Register {

};
//Shows which type of user getting in
class access {
    string registeredAs;
    public:
    access(){
        cout << endl;
        string temp;
        cout << "Who you are" << endl << "1. Admin" << endl << "2. Customer" << endl << "Enter Here: ";
        cin >> temp;
        this-> registeredAs = temp;
    }
    void Sizing(){
        int n = registeredAs.size();
        for(int i = 0; i < n; i++){
            int temp = registeredAs[i];
            if(temp < 97){
                registeredAs[i] = registeredAs[i] - 65 + 97;
            }
        }
    }
    void checking(){
        if(registeredAs == "admin"){
            adminClass login;
        }

        else if(registeredAs == "customer"){
            customerClass choosing;
            choosing.categoryChoose();
        }

        else{
            cout << "Not Registered access" << endl;
        }
    }
};

int main (){
    cout << endl;
    for(int i = 0; i < 64; i++){
        if(i == 32)
            cout << endl;
        cout << "-" ;
    }
    cout << endl;
    for(int i = 0; i < 6; i++){
        cout << " ";
        if (i == 5)
            cout << "Vehicle Rental System" << endl;
    }
    for(int i = 0; i < 64; i++){
        if(i == 32)
            cout << endl;
        cout << "-" ;
    }
    cout << endl;
    access accessManager;
    accessManager.Sizing();
    accessManager.checking();
}
