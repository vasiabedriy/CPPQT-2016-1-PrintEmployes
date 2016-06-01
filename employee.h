#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
#include "printable.h"

class Employee: public Printable
{
public:
    Employee();
    Employee(std::string name, std::string phone, std::string adress, int salary, int workyear);
    void setName(std::string name);
    void setPhone(std::string phone);
    void setAdress(std::string adress);
    void setSalary(int salary);
    void setWorkYear(int workyear);
    std::string getName();
    std::string getPhone();
    std::string getAdress();
    int getSalary();
    int getWorkYear();
    void print();

private:
    std::string m_name;
    std::string m_phone;
    std::string m_adress;
    int m_salary;
    int m_workyear;


};

#endif // EMPLOYEE_H
