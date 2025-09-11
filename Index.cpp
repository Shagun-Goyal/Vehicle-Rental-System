#include <iostream>
using namespace std;

//Class For Admin Login(Idea: Can include the booking for the admin in low costs)
class adminClass{

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
            cin >> budgetTemp;
            break;
        case 2:
            int seatsTemp;
            cin >> seatsTemp;
            break;
        case 3:
            cout << "There are three types of luxury: " << endl << "1. Premium" << endl << "2. Moderate" << endl << "3. Low" << endl << "Enter the number of the luxury: ";
            int luxury;
            cin >> luxury;
            break;
        case 4:
            cout << "We have three types of car: " << endl << "1. SUV" << endl << "2. Sedan" << endl << "3. Convertible" << endl << "Enter your number of choise: " ;
            int carType;
            cin >> carType;
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
