#include "data.h"
#include <iostream>
using namespace std;

struct userinfo{
    string name;
    string mailId;
    string password;
    string phoneNo;
}
class Data {
public:
    void displayData();
};

void Data::displayData(){
    cout << "Hello I am here:" << endl;
}