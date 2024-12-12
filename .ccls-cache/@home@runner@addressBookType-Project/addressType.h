#define ADDRESSTYPE_H
#include <iostream>
using namespace std;

/**
* addressType class
*/
class addressType{
private:
// private variables
string address;
string city;
string state;
int zipcode;
public:
// parameterized constructor
addressType(string addres = "", string cit = "", string sta = "XX", int zip = 10000){
address = addres;
  city = cit;
  if(sta.length() == 2){
  state = sta;
  }else{
  state = "XX";
  cout << " state should have only two characters" << endl;
  }
  if(zip >= 11111 && zip <= 99999){
  zipcode = zip;
  }else{
  zipcode = 10000;
  cout << "Zipcode should be between 11111 and 99999" << endl;
    }
};
    // setters of addressType
    void setAddress(string addres){
    address = addres;
};
    void setCity(string cit){
    city = cit;
};

void setState(string sta){
state = sta;
};
void setZipcode(int zip){
zipcode = zip;
};
// getters of addressType
string getAddress(){
return address;
};
string getCity(){
return city;
};
string getState(){
return state;
};
int getZipcode(){
return zipcode;
  };
  // print method
  void print(){
  cout << address << endl;
  cout << city << ", " << state << " " << zipcode << endl;
  }
};