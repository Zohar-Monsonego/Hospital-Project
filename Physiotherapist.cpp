//
// Created by Zohar Monsonego on 16/01/2024.
//

#include "Physiotherapist.h"

void Physiotherapist::performSurgery(){
    cout<<"Performing surgeries: no surgeries performed"<<endl;
}
void Physiotherapist::printInfo(){
    Doctor::printInfo();
    this->performSurgery();
}