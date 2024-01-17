//
// Created by Zohar Monsonego on 14/01/2024.
//

#include "Gynecologist.h"

void Gynecologist::printInfo(){
    Doctor::printInfo();
    this->performSurgery();
}
void Gynecologist::performSurgery(){
    cout<<"Performing surgeries: hysterectomies and other gynecological procedures"<<endl;
}