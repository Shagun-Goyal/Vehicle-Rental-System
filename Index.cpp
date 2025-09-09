#include <iostream>
using namespace std;

// Shows which type of user getting in
class access {
    string registeredAs;
    public:
    access(){
        cout << endl;
        string temp;
        cout << "Who you are" << endl << "1. Admin" << endl << "2. Customer" << endl << "Enter Here: ";
        cin >> temp;
        this-> registeredAs = temp;
        cout << registeredAs << endl;
    }
    void checking(){
        int n = registeredAs.size();
        for(int i = 0; i < n; i++){
            int temp = registeredAs[i];
            if(temp < 97){
                registeredAs[i] = registeredAs[i] - 65 + 97;
            }
        }
        cout << registeredAs;
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
    accessManager.checking();
    

}
