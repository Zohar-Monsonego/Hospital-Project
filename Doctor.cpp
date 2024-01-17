//
// Created by Zohar Monsonego on 11/01/2024.
//

#include "Doctor.h"


string Doctor::getDegreeLevel() const{
    return degree_level;
}
string Doctor::getSpecialization() const{
    return specialization;
}
int Doctor::getYearExperience() const{
    return y_experience;
}
int Doctor::getSurgeryNumber() const{
    return surgery_number;
}
void Doctor::printInfo(){
    cout<<"Doctor's name: "<<this->getName()<<endl;
    cout<<"Doctor's ID: "<<this->getId()<<endl;
    cout<<"Doctor's age: "<<this->getAge()<<endl;
    cout<<"Doctor's sex: "<<this->getSex()<<endl;
    cout<<"The doctor's start date: "<<this->getStartDate()<<endl;
    cout<<"Doctor's degree level: "<<this->getDegreeLevel()<<endl;
    cout<<"Doctor's specialization: "<<this->getSpecialization()<<endl;
    cout<<"Doctor's years of experience: "<<this->getYearExperience()<<endl;
    cout<<"Doctor's surgeries number: "<<this->getSurgeryNumber()<<endl;
}