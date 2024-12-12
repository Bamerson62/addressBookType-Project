#include "extPerson.h"

int main()
{
//Create object
extPersonType p("Goof", "Goofy", 2, 6, 1965, "Disney Street", "Los Angels", "CA", 91340, "Family");
//Setter for phone number
p.setPhonenumber("215-782-9000");
//Display details
p.print();
return 0;
}