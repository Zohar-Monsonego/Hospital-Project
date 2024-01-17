//
// Created by Zohar Monsonego on 14/01/2024.
//

#include "Cardiologist.h"

void Cardiologist::performSurgery(){
    cout<<"Performing surgeries: coronary artery bypass surgery, heart valve repair"<<endl;
}
void Cardiologist::printInfo(){
    Doctor::printInfo();
    this->performSurgery();
}