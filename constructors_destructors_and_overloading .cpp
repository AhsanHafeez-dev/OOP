#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;

class Employee
{
public:
    // members or feeds
    string name;
    string adress;
    int salary;
    // methods
    void sighnin();
    void promote();
    Employee();           // constructor(called automtically when creating instance of this class)
    Employee(int salary); // function overloading
    ~Employee();
};



int main(){

    Employee *e = new Employee;
    delete e;
    e = new Employee(70000);
    delete e;
    e = NULL;
    // e1.salary=9;
    Employee *eptr;
    // eptr=&e1;
    eptr = new Employee;
    (*eptr).name = "as";
    eptr->sighnin();
    return 0;
}

void Employee::sighnin()
{
    cout << "SIGHNING IN ....... " << endl;
}
void Employee::promote()
{
    cout << "EMPLOY IS PROMOTED" << endl;
}
Employee::Employee()
{
    cout << "CREATING AN INSTANCE OF CLASS EMPLOYEE" << endl;
    salary = 10000;
    cout << "THE SALARY OF THIS EMPLOYEE IS :" << salary << endl;
}
Employee::Employee(int salary)
{
    cout << "CREATING AN INSTANT OF EMPLOYEE" << endl;
    this->salary = salary;
    cout << "THE SALARY OF THIS EMPLOYEE IS :" << salary << endl;
}
Employee::~Employee()
{
    cout << "DELETING THE INSTANCE OF EMPLOYEE" << endl;
}
