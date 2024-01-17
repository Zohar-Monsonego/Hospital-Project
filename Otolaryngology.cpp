//
// Created by Zohar Monsonego on 16/01/2024.
//

#include "Otolaryngology.h"

void Otolaryngology::performSurgery(){
    cout<<"Performing surgeries: tonsillectomies, sinus surgeries, ear tube placements and surgeries to address issues with the throat and vocal cords"<<endl;
}
void Otolaryngology::printInfo(){
    Doctor::printInfo();
    this->performSurgery();
}