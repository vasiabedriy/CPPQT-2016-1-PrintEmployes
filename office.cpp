#include "office.h"

Office::Office()
{
    m_name = "NULL";
    m_adress = "NULL";
    m_square = -1;
    m_worker = -1;
}

Office::Office(std::string name, std::string adress, int square, int worker)
{
    m_name = name;
    m_adress = adress;
    m_square = square;
    m_worker = worker;
}

void Office::setName(std::string name)
{
    m_name = name;
}

void Office::setAdress(std::string adress)
{
    m_adress = adress;
}

void Office::setSquare(int square)
{
    m_square = square;
}

void Office::setWorker(int worker)
{
    m_worker = worker;
}

std::string Office::getName()
{
    return m_name;
}

std::string Office::getAdress()
{
    return m_adress;
}

int Office::getSquare()
{
    return m_square;
}

int Office::getWorker()
{
    return m_worker;
}

void Office::print()
{
     std::cout << m_name << ", " << m_adress << ", " << m_square << ", " << m_worker <<std::endl;
}
