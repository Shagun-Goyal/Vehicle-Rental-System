#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct userinfo {
    string name;
    string mailId;
    string password;
    string phoneNo;
};

class puttingData {
    vector<userinfo> users;  // container for multiple users

public:
    // Constructor that adds one user
    puttingData(string name, string phoneNo, string mailId, string password) {
        userinfo temp;
        temp.name = name;
        temp.phoneNo = phoneNo;
        temp.mailId = mailId;
        temp.password = password;
        users.push_back(temp);

        displayData();  // show after adding
    }

    // Display all stored users
    void displayData() {
        cout << "\n--- User List ---\n";
        // for (auto &u : users) {
            cout << "Name: " << users[0].name << endl;
            cout << "Phone: " << users[0].phoneNo << endl;
            cout << "Mail: " << users[0].mailId << endl;
            cout << "Password: " << users[0].password << endl;
            cout << "-------------------\n";
        // }
    }
};
