#include "addressBookType.h"
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;


addressBookType::addressBookType(int size) : maxSize(size), length(0) {
    addressList = new extPersonType[maxSize];
}


addressBookType::~addressBookType() {
    delete[] addressList;
}

void addressBookType::initEntry(const string& fileName) {
    ifstream inFile(fileName);
    if (!inFile) {
        cerr << "Error opening file " << fileName << endl;
        return;
    }

    extPersonType temp;
    while (inFile >> temp && length < maxSize) { 
        addEntry(temp);
    }

    inFile.close();
}

// Add an entry to the address book
void addressBookType::addEntry(const extPersonType& entry) {
    if (length < maxSize) {
        addressList[length++] = entry;
    } else {
        cerr << "Address book is full!" << endl;
    }
}


void addressBookType::findPerson(const string& lastName) const {
    for (int i = 0; i < length; ++i) {
        if (addressList[i].getLastName() == lastName) {
            addressList[i].print();
            return;
        }
    }
    cout << "Person not found!" << endl;
}


void addressBookType::findBirthdays(int month) const {
    for (int i = 0; i < length; ++i) {
        if (addressList[i].getBirthMonth() == month) {
            addressList[i].print();
        }
    }
}


void addressBookType::findRelations(const string& relation) const {
    for (int i = 0; i < length; ++i) {
        if (addressList[i].getRelation() == relation) {
            addressList[i].print();
        }
    }
}


void addressBookType::print() const {
    for (int i = 0; i < length; ++i) {
        addressList[i].print();
    }
}


void addressBookType::sortEntries() {
    insertionSort();
}


void addressBookType::insertionSort() {
    for (int current = 1; current < length; ++current) {
        int index = current;
        while (index > 0 && addressList[index].getLastName() < addressList[index - 1].getLastName()) {
            swap(addressList[index], addressList[index - 1]);
            --index;
        }
    }
}


void addressBookType::showMenu() {
    cout << "===== Address Book Menu =====\n";
    cout << "1. Add Entry\n";
    cout << "2. Find Person\n";
    cout << "3. Find Birthdays\n";
    cout << "4. Find Relations\n";
    cout << "5. Print All Entries\n";
    cout << "6. Sort Entries\n";
    cout << "7. Quit\n";
    cout << "=============================\n";
}
