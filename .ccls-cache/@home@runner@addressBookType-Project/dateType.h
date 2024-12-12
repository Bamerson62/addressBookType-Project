#ifndef dateType_H
#define dateType_H

class dateType
{
public:
void setDate(int month, int day, int year);


int getDay() const;


int getMonth() const;


int getYear() const;
void print() const;


dateType(int month = 1, int day = 1, int year = 1900);


bool isLeapYear(int yera);


private:
int dMonth; 
int dDay; 
int dYear; 
};

#endif



    
