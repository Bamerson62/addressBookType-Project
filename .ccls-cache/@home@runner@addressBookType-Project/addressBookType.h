#ifndef ADDRESSBOOKTYPE_H
#define ADDRESSBOOKTYPE_H

#include "extPersonType.h" 
#include <string>
#include <vector>

class addressBookType {
private:
  extPersonType *addressList; 
  int length;                 
  int maxSize;                

  void insertionSort(); 

public:
  
  addressBookType(int size = 100); 
  ~addressBookType();

  // Member Functions
  void initEntry(const std::string
                     &fileName); 
  void addEntry(const extPersonType &entry); 
  void
  findPerson(const std::string &lastName) const; 
  void findBirthdays(int month) const; 
  void findRelations(
      const std::string &relation) const; 
  void print() const;                     
  void sortEntries();                     

  
  static void showMenu(); 
};

#endif
