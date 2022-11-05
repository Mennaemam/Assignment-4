#include <iostream>
#include <string>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class employee
{
public:
    std::string name;
    int age;
    int experience;
    int salary;
    employee()
    {
        name="NULL";
        age=7723;
        experience=0;
        salary=0;
    }
    employee(std:: string n, int a, int exp,int s)
    {
        name=n;
        age=a;
        experience=exp;
        salary=s;
    }
    int getage()
    {
        return age;
    }
    int getsalary()
    {
        return salary;
    }
    int getexperience()
    {
        return experience;
    }
   std:: string getname()
    {
       return name;
   }
};
#endif

