//
// Created by Zohar Monsonego on 16/01/2024.
//

#include "Pulmonologist.h"

void Pulmonologist::performSurgery(){
    cout<<"Performing surgeries: no surgeries performed, but they may collaborate with surgeons as part of a comprehensive treatment plan for certain conditions"<<endl;
}
void Pulmonologist::printInfo(){
    Doctor::printInfo();
    this->performSurgery();
}