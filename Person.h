//
// Created by Zohar Monsonego on 11/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_PERSON_H
#define HOSPITAL_MANAGEMENT_SYSTEM_PERSON_H
#include <iostream>
using namespace std;
#include <string>

class Person {
private:
    string name;
    long id;
    int age;
    char sex;
public:
    Person():name(),id(000000000),age(0),sex('f'){};
    Person(const string &name,long id,int age,char sex):name(name),id(id),age(age),sex(sex){};
    [[nodiscard]] string getName() const;
    [[nodiscard]] long getId() const;
    [[nodiscard]] int getAge() const;
    [[nodiscard]] char getSex() const;
    virtual void printInfo() =0;//prints information about the person
    virtual ~Person() = default;//there is no need for destructor here ,I write default


};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_PERSON_H
