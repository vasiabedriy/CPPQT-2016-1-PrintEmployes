#include "employee.h"

Employee::Employee()
{
    m_name = "NULL";
    m_phone = "NULL";
    m_adress = "NULL";
    m_salary = -1;
    m_workyear = -1;
}

Employee::Employee(std::string name, std::string phone, std::string adress, int salary, int workyear)
{
    m_name = name;
    m_phone = phone;
    m_adress = adress;
    m_salary = salary;
    m_workyear = workyear;
}

void Employee::setName(std::string name)
{
     m_name = name;
}

void Employee::setPhone(std::string phone)
{
    m_phone = phone;
}

void Employee::setAdress(std::string adress)
{
    m_adress = adress;
}

void Employee::setSalary(int salary)
{
    m_salary = salary;
}

void Employee::setWorkYear(int workyear)
{
    m_workyear = workyear;
}

std::string Employee::getName()
{
    return m_name;
}

std::string Employee::getPhone()
{
    return m_phone;
}

std::string Employee::getAdress()
{
    return m_adress;
}

int Employee::getSalary()
{
    return m_salary;
}

int Employee::getWorkYear()
{
    return m_workyear;
}

void Employee::print()
{
     std::cout << m_name << ", " << m_phone << ", " << m_adress << ", " << m_salary << ", " << m_workyear <<std::endl;
}


