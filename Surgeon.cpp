//
// Created by Zohar Monsonego on 16/01/2024.
//

#include "Surgeon.h"

string Surgeon::getSubSpec(){
    return sub_spec;
}
void Surgeon::performSurgery(){
    cout<<"Performing surgeries: all types of surgery such as appendectomy and remove tumors"<<endl;
}
void Surgeon::printInfo(){
    Doctor::printInfo();
    this->performSurgery();
    cout<<"Surgeon's sub-specialization: "<<this->getSubSpec()<<endl;
}