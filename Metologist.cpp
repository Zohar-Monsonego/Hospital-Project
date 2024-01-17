//
// Created by Zohar Monsonego on 15/01/2024.
//

#include "Metologist.h"

void Metologist::performSurgery(){
    cout<<"Performing surgeries: they may collaborate with surgical teams but do not typically perform surgeries"<<endl;
}
void Metologist::printInfo(){
    Doctor::printInfo();
    this->performSurgery();
}