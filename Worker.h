#include <iostream>
#ifndef UNTITLED125_WORKER_H
#define UNTITLED125_WORKER_H
#include<cstring>
#include <cmath>

class Worker {
private:
    int id;
    char name[21];
    float hourlyRate;
    int hoursWorked;
    float donationsBroughtIn;

public:
    void setID(int);
    int getID();

    void setName(char*);
    char* getName();

    void setHourlyRate(float);
    float getHourlyRate();

    void setHoursWorked(int);
    int getHoursWorked();

    void setDonationsBroughtIn(float);
    float getDonationsBroughtIn();

    float salaryCalculator();

};


#endif //UNTITLED125_WORKER_H
