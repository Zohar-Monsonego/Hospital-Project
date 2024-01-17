//
// Created by Zohar Monsonego on 14/01/2024.
//

#include "Ophtalmologist.h"

void Ophtalmologist::performSurgery(){
    cout<<"Performing surgeries: cataract surgery, laser eye surgery and procedures for conditions such as glaucoma or retinal issues"<<endl;
}
void Ophtalmologist::printInfo(){
    Doctor::printInfo();
    this->performSurgery();
}