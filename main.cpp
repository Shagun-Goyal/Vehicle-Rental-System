#include<iostream>
#include<mysql.h>
#include<mysqld_error.h>
#include<windows.h>
#include<sstream>
using namespace std;
const char* Host="host";
cosnt char* User="root";
const char* password="";
const char* Database="db";
class Car{
string Brand,Model;
int Registration,Rent;
bool Available;
public :
  Car(int registration, string brand,string model,int rent,bool available){
    Registration=registration;
    Brand=brand;
    Model=model;
    Rent=rent;
    Avail=avail;
} 
  int get_Registration(){
  return  Registration;
}
  string get_Brand(){
    return Brand;
  }
  string get_Model(){
    return Model;
  }
  int get_Rent(){
    return Rent;
  }
  bool get_Available(){
    return Available;
  }
int main(){
MYSQL* connection;
connection=mysql_init(NULL);
if(!mysql_real_connect(connection,Host,User,password,Database,5096,NULL,0)){
    cout<<"Error:"<<mysql_error(connection)<<endl;}
else{
  cout<<<"logged in !!"<<endl;
}
  Car car1(1945,"volkswagen","Tiger I",1946,True);
  Car car2(1940,"Henschel","Tiger",1000,True);
string save1="INSERT INTO cars (Serial,Brand,Model,Rent, Available) VALUES(1945,"volkswagen","Tiger I",1946,True)";
string save2="INSERT INTO cars (Serial,Brand,Model,Rent, Available) VALUES(1940,"Henschel","Tiger",1000,True)";
if(mysql_query(connection,save1.c-str())||mysql_query(connection,save2.c-str())){
  cout<<"ERROR"<<mysql_error(connection)<<endl;}
else{
  count<<"DATA SAVED"<<endl;}

mysql_close(connection);
