//
// Created by Zohar Monsonego on 15/01/2024.
//

#include "Dermatologist.h"

void Dermatologist::performSurgery(){
    cout<<"Performing surgeries: excisions of skin lesions, mole removals and other dermatological surgeries"<<endl;
}
void Dermatologist::printInfo(){
    Doctor::printInfo();
    this->performSurgery();
}