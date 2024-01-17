//
// Created by Zohar Monsonego on 16/01/2024.
//

#include "Obstetrician.h"

void Obstetrician::performSurgery(){
    cout<<"Performing surgeries: cesarean sections for childbirth, surgeries related to gynecological conditions affecting pregnant or postpartum women"<<endl;
}
void Obstetrician::printInfo(){
    Doctor::printInfo();
    cout<<"Doctor's number of births: "<<this->getBirthsNumber()<<endl;
    this->performSurgery();
}
int Obstetrician::getBirthsNumber() const{
    return births_number;
}