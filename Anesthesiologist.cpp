//
// Created by Zohar Monsonego on 14/01/2024.
//

#include "Anesthesiologist.h"

void Anesthesiologist::performSurgery(){
    cout<<"Performing surgeries: involved in all types of surgeries, births or other medical procedures"<<endl;
}
void Anesthesiologist::printInfo(){
    Doctor::printInfo();
    this->performSurgery();
}