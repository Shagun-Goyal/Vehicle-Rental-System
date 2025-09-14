#include <iostream>
#include <string>
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

class data{
    string category[3];

    public:
    data() {
        carsInfo SkodaOctavia = {"sedan", "premium", 3800, 5};
        carsInfo ToyotaCamry = {"sedan", "Moderate", 3500, 5};
        carsInfo HondaCivic = {"sedan", "moderate", 3200, 5};
        carsInfo HyundaiElantra = {"sedan", "low", 3000, 5};
        carsInfo MarutiSuzukiciaz = {"sedan", "low", 2800, 5};
        carsInfo ToyotaFortuner = {"suv", "premium", 6500, 7};
        carsInfo MGGloster = {"suv", "premium", 6200, 7};
        carsInfo MahindraXuv700 = {"suv", "moderate", 5500, 7};
        carsInfo KiaSeltos = {"suv", "moderate", 4800, 5};
        carsInfo HyundaiCreta = {"suv", "low", 4500, 5};
        carsInfo MercedesBenz = {"convertible", "premium", 14000, 4};
        carsInfo AudiA5 = {"convertible", "premium", 13500, 4};
        carsInfo BMWZ4 = {"convertible", "moderate", 12000, 2};
        carsInfo MiniCooper = {"convertible", "low", 10500, 4};
        carsInfo FordMustang = {"convertible", "moderate", 11500, 4};
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
            cout << "There your's car info related to your budget: " << actualCost << endl;
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
        if(actualCost == 0)
            cout << "printing low: " << low << endl << "printing high: " << high << endl;
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
                cout << "Temp: "<< Temp[i] << endl;
            }
        }
        else{
            int n = tempLow.size();
            int j = tempHigh.size();
            for(int i = 0; i < j; i++){
                    cout << "Temp high: " << tempHigh[i] << endl;
            }
            for(int i = 0; i < n; i++){
                cout << "Temp low: " << tempHigh[i] << endl;
            }
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
            //searchingClass a;
           // a.luxury(luxuryTemp);


            break;
        case 4:
            cout << "We have three types of car: " << endl << "1. SUV" << endl << "2. Sedan" << endl << "3. Convertible" << endl << "Enter your number of choise: " ;
            int cartypeTemp;
            cin >> cartypeTemp;
            //searchingClass a;
           // a.carType(cartypeTemp);


        default:
            cout << "Sorry we are still Working on more categories" << endl;
            break;
        }

    }
};

//Shows which type of user getting in
class access{
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
