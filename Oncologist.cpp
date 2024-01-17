//
// Created by Zohar Monsonego on 16/01/2024.
//

#include "Oncologist.h"

void Oncologist::performSurgery(){
    cout<<"Performing surgeries: surgeries to diagnose, stage and treat cancer"<<endl;
}
void Oncologist::printInfo(){
    Doctor::printInfo();
    this->performSurgery();
}