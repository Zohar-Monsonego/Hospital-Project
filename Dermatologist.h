//
// Created by Zohar Monsonego on 15/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_DERMATOLOGIST_H
#define HOSPITAL_MANAGEMENT_SYSTEM_DERMATOLOGIST_H

#include "Doctor.h"
#include <string>

class Dermatologist :public Doctor{
public:
    Dermatologist():Doctor(){};
    Dermatologist(const string &der_name,long der_id,int der_age,char der_sex,const string &der_start_date,const string &der_degree_level,const string &der_specialization,int der_y_experience,int der_surgery_number): Doctor(der_name,der_id,der_age,der_sex,der_start_date,der_degree_level,der_specialization,der_y_experience,der_surgery_number){};
    void performSurgery() override;
    void printInfo()override;
    ~Dermatologist() override =default;

};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_DERMATOLOGIST_H
