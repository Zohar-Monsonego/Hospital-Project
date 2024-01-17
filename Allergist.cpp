//
// Created by Zohar Monsonego on 16/01/2024.
//

#include "Allergist.h"

void Allergist::performSurgery(){
    cout<<"Performing surgeries: no surgeries performed"<<endl;
}
void Allergist::printInfo(){
    Doctor::printInfo();
    this->performSurgery();
}