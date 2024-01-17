//
// Created by Zohar Monsonego on 16/01/2024.
//

#include "Neurologist.h"

void Neurologist::performSurgery(){
    cout<<"Performing surgeries: no surgeries performed"<<endl;
}
void Neurologist::printInfo(){
    Doctor::printInfo();
    this->performSurgery();
}