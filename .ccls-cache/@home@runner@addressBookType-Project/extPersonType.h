#include<iostream>
#include<string>
using namespace std;
class personType {
private:
string firstName, lastName;
public:
//setters
void setFirstName(string name) {
firstName = name;
}
void setLastName(string name) {
lastName = name;
}
//Getters
string getFirstName() {
return firstName;
}
string getLastName() {
  return lastName;
  }
  //Constructor
  personType(string f="", string l="") {
  setFirstName(f);
  setLastName(l);
  }
  };
  class addressType {
  
  private:
  string address, city, state;
  int pincode;
  public:
  
  void setAddress(string a){
  address = a;
  }
  void setCity(string c) {
    city = c;
    }
    void setState(string s) {
    state = s;
    }
    void setPincode(int p) {
    pincode = p;
    }
    //Getters
    string getAddress() {
    return address;
    }
    string getCity() {
    return city;
    }
    string getState() {
    return state;
    }
    int getPincode() {
      return pincode;
      }
      //Constructor
      addressType(string a = "", string c = "", string s = "XX", int p = 10000) {
      setAddress(a);
      setCity(c);
      setState(s);
      setPincode(p);
      }
      };
      class dateType {
      //Member variables
      private:
      int dYear, dMonth, dDay;
      //Member functions
      public:
    void setDate(int d, int m, int y) {
    if (m >= 1 && m <= 12) {
    dMonth = m;
    }
    else {
    dMonth = 1;
    }
    if (y >= 1900) {
    dYear = y;
    }
    else {
    dYear = 1900;
    }
    if (dMonth == 1 || dMonth == 3 || dMonth == 5 || dMonth == 7 || dMonth == 8 || dMonth == 10 || dMonth == 12 && d >= 1 && d <= 31) {
    dDay = d;
    }
      else if (dMonth == 4 || dMonth == 6 || dMonth == 9 || dMonth == 11 && d >= 1 && d <= 30) {
      dDay = d;
      }
      else if(dMonth==2 && dYear%4==0 && dYear%100==0 && dYear%400==0 && d>=1 && d<=29)
      {
      dDay = d;
      }
      else if (dMonth == 2 && dYear % 4 != 0 && dYear % 100 != 0 && dYear % 400 != 0 && d >= 1 && d <= 28)
      {
      dDay = d;
      }
      else {
      dDay = 1;
      }
      }
    int getDay() {
    return dDay;
    }
    int getMonth() {
    return dMonth;
    }
    int getYear() {
    return dYear;
    }
    //Validate input
    bool validate(int d, int m, int y) {
    if (m < 1 || m>12) {
    return false;
    }
    if (y < 1900) {
    return false;
    }
      if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 ||m == 12 && d >= 1 && d>=31) {
      return true;
      }
      else if (m == 4 || m == 6 || m == 9 || m == 11 && d >= 1 && d >= 31) {
      return true;
      }
      else if (m == 2 && isLeapYear(y) && d >= 1 && d <= 29)
      {
      return true;
      }
      else if (m == 2 && isLeapYear(y)==false && d >= 1 && d <= 28)
      {
      return true;
      }
      return false;
      }
      //Validate year
      bool isLeapYear(int y) {
      if (y % 4 == 0 && y % 100 == 0 && y % 400 == 0) {

        return true;
        }
        return false;
        }
        //Constructor
        dateType(int d = 1, int m = 1, int y = 1900) {
        setDate(d, m, y);
        }
        };
        class extPersonType :public personType {
        //Member variables
        private:
        addressType address;
        dateType birthdate;
        string phonenumber;
        string relationship;
        //Member functions
        public:
      void setPhonenumber(string p) {
      phonenumber = p;
      }
      string getPhoneNumber() {
      return phonenumber;
      }
      //Getter for month
      int getBirthMonth() {
      return birthdate.getMonth();
      }
      //Set and get relationship
      void setRelationship(string r) {
      if (r == "Family") {
        relationship = r;
        }
        else if (r == "Friend") {
        relationship = r;
        }
        else if (r == "Bussiness") {
        relationship = r;
        }
        else {
        relationship = "Friend";
        }
        }
        string getRelationship() {
        return relationship;
        }
        //Display person details
        void print() {
        cout << getFirstName() << " " << getLastName() << endl;
        cout << address.getAddress() << endl << address.getCity() << ", " << address.getState() << " " << address.getPincode() << endl;
          cout << phonenumber << endl;
          cout << "Birthday: " << birthdate.getDay() << "/" << birthdate.getMonth() << "/" << birthdate.getYear() << endl;
          cout << "Relationship: " << relationship << endl;
          }
extPersonType(string f = "", string l = "", int d = 1, int m = 1, int y = 1900, string a = "", string c = "", string s = "XX", int p = 10000,string r = "None") {
setFirstName(f);
setLastName(l);
address.setAddress(a);
address.setCity(c);
address.setState(s);
address.setPincode(p);
birthdate.setDate(d, m, y);
phonenumber = "";
relationship = r;
}
};