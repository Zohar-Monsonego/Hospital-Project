//
// Created by Zohar Monsonego on 11/01/2024.
//
#include <iostream>
using namespace std;
#include "Person.h"

string Person::getName() const{
    return name;
}
long Person::getId() const{
    return id;
}
int Person::getAge() const{
    return age;
}
char Person::getSex() const{
    return sex;
}
