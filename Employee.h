//
// Created by Zohar Monsonego on 11/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_EMPLOYEE_H
#define HOSPITAL_MANAGEMENT_SYSTEM_EMPLOYEE_H

#include <iostream>
using namespace std;
#include <string>
#include "Person.h"

class Employee : public Person{
private:
    string start_date;
public:
    Employee():Person(),start_date(){};
    Employee(const string &name, long id, int age, char sex, const string &start_date): Person(name,id,age,sex),start_date(start_date){};
    [[nodiscard]] string getStartDate() const;
    void printInfo() override = 0;
    ~Employee() override=default;


};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_EMPLOYEE_H
