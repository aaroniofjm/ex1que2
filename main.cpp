#include "Worker.h"
using namespace std;


bool posCheker(int salary, int hours, int donations){
    if (salary <0||hours<0||donations<0)
        return false;
    return true;

}

int main() {

    Worker highestSalary, lowestSalary, tempWorker;

    //initializing my temp worker
    tempWorker.setHoursWorked(0);
    tempWorker.setDonationsBroughtIn(0);
    tempWorker.setHourlyRate(0);

    int tz, hours;
    char name[21];
    float salary,min=0, donations;

    int max=0;


    cout<<"enter details, to end enter 0:"<<endl;
    cin>>tz;
    while (tz!=0)
    {
        cin.ignore();
        cin.getline(name,21, ' ');
        cin>>salary;
        cin>>hours;
        cin>>donations;

        if (!posCheker(salary, hours, donations))           //made a funciton that checks the varibles and makes sure they are positive
        {
            cout<<"ERROR"<<endl;
            goto getNewInput;//so that i don't lose my previous input (if any)
        }

        tempWorker.setID(tz);
        tempWorker.setName(name);
        tempWorker.setHourlyRate(salary);
        tempWorker.setHoursWorked(hours);
        tempWorker.setDonationsBroughtIn(donations);

        if(min==0)                                          //must take care of the first iteration
        {
            min=tempWorker.getDonationsBroughtIn();
            lowestSalary=tempWorker;
        }
        else{
            if (lowestSalary.getDonationsBroughtIn()>tempWorker.getDonationsBroughtIn())            //comparing the latest entry with the newst
            {
                lowestSalary=tempWorker;
            }
        }

        if (max==0)
        {
            max=tempWorker.salaryCalculator();
            highestSalary=tempWorker;
        }
        else
            if (tempWorker.salaryCalculator()>highestSalary.salaryCalculator())      //comparing the latest entry with the newst
        {
            highestSalary=tempWorker;
        }


        getNewInput:
        cin>>tz;//to make it loop again...
    }

        cout<<"minimum sum: "<<lowestSalary.getDonationsBroughtIn()<<" "<<lowestSalary.getName()<<" "<<lowestSalary.getID();
        cout<<endl;
        cout<<"highest salary: "<<highestSalary.salaryCalculator()<<" "<<highestSalary.getName()<<" "<<highestSalary.getID();


    return 0;
}
