#include "Worker.h"
void Worker::setID(int idNumber) {      //simple setter
    id=idNumber;
}
int Worker::getID() {return id;}            //simple getter

void Worker::setName(char* string) {        //simple setter
    strcpy(name,string);
}

char* Worker::getName() {return name;}      //simple getter


void Worker::setHourlyRate(float rate)          //simple setter
{
    hourlyRate=rate;
}


float Worker::getHourlyRate(){      //simple getter
    return hourlyRate;
}

void Worker::setHoursWorked(int hours){  //simple setter
    hoursWorked=hours;
}
int Worker::getHoursWorked()            //simple getter
{return hoursWorked;}

void Worker::setDonationsBroughtIn(float donations)       //simple setter
{
    donationsBroughtIn=donations;
}

float Worker::getDonationsBroughtIn(){      //simple getter
    return donationsBroughtIn;
}

float Worker::salaryCalculator() {

    float dba=getDonationsBroughtIn();
    float salary = dba < 1000 ? 0.1 * dba : 100;//right away i can take care of the best-case scenaro
    dba -= 1000;


    if (dba>0)
    {
        if (dba>1000)
        {
            salary+=150;
            dba-=1000;
            if(dba>2000)
            {
                salary+=400;
                dba-=2000;
                if(dba>1000)
                {
                    salary+=300;
                    dba-=1000;
                    if(dba>0)
                    {
                        salary+=0.4*dba;
                    }
                }
                else
                    {
                    salary+=0.3*dba;
                }
            }
            else
            {
                salary+=0.2*dba;
            }
        }
        else
        {
           salary+=0.15*dba;
        }


    }
    return getHourlyRate()*getHoursWorked()+(salary);//does the salary calculation here

}
