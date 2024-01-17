//
// Created by Zohar Monsonego on 15/01/2024.
//

#include "FamilyDoctor.h"

void FamilyDoctor::performSurgery(){
    cout<<"Performing surgeries: no surgeries are performed"<<endl;
}
void FamilyDoctor::printInfo(){
    Doctor::printInfo();
    this->performSurgery();
}