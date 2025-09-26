#include "data.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct userinfo{
    string name;
    string mailId;
    string password;
    string phoneNo;
}
class Data {
    vector <usetinfo> users;
    public:
    Data(string name, int phoneNo, string mainId, string password){
        userinfo temp;
        temp.name = name;
        temp.pphoneNo = phoneNo;
        temp.mailId = mailId;
        temp.password = password;
        users.push-back(temp);
    }
    
};

void Data::displayData(){
    cout << "Hello I am here:" << endl;
}