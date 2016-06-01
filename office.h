#ifndef OFFICE_H
#define OFFICE_H

#include <string>
#include <iostream>
#include "printable.h"

class Office: public Printable
{
public:
    Office();
    Office(std::string name, std::string adress, int square, int worker);
    void setName(std::string name);
    void setAdress(std::string adress);
    void setSquare(int square);
    void setWorker(int worker);
    std::string getName();
    std::string getAdress();
    int getSquare();
    int getWorker();
    void print();

private:
    std::string m_name;
    std::string m_adress;
    int m_square;
    int m_worker;
};

#endif // OFFICE_H





// 4. Створіть новий клас Office (офіс) який буде містити інформацію про офіси
// нашої фірми та їх місцезнаходження. Додайте до нього методи для задання
// різноманітної інформації:
//    * Назва офісу
//    * Адреса офісу
//    * Робоча площа (у кв метрах)
//    * Кількість працівників що працюють всередині
// Клас має мати окремий *.h-файл з описом та окремий *.cpp файл що міститиме реалізацію.
