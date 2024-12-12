#include <iostream>
#include "extPersonType.h"

using namespace std;

int main()
{
    cout << "Testing default constructor ... " << endl;
    extPersonType defPerson;
    defPerson.print();
    cout << endl;

    cout << "Testing constructor with parameters ... " << endl;
    extPersonType Person("George", "Smith", 4, 30, 1994, "145 South Street, Apt. 5", "Hampton", "VA", 23554, "757-444-5555", "Friend");
    Person.print();
    cout << endl;

    cout << "Testing invalid relationship (Spouse) ... " << endl;
    Person.setRelationship("Spouse");
    Person.print();
    cout << endl;

    cout << "Testing valid relationship (Business) ... " << endl;
    Person.setRelationship("Business");
    Person.print();
    cout << endl;

}
