//
// Created by Zohar Monsonego on 16/01/2024.
//

#include "Intern.h"

string Intern::getEndDate(){
    return end_intern_date;
}
void Intern::performSurgery(){
    cout<<"Performing surgeries: at an advanced stage of the internship, they can take responsibility and can perform surgeries themselves"<<endl;
}
void Intern::printInfo(){
    Doctor::printInfo();
    cout<<"Intern's internship end date: "<<this->getEndDate()<<endl;
    this->performSurgery();
}