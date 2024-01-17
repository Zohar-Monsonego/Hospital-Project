//
// Created by Zohar Monsonego on 16/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_ALLERGIST_H
#define HOSPITAL_MANAGEMENT_SYSTEM_ALLERGIST_H

#include "Doctor.h"
#include <string>

class Allergist :public Doctor{
public:
    Allergist():Doctor(){};
    Allergist(const string &al_name,long al_id,int al_age,char al_sex,const string &al_start_date,const string &al_degree_level,const string &al_specialization,int al_y_experience, int al_surgery_number): Doctor(al_name,al_id,al_age,al_sex,al_start_date,al_degree_level,al_specialization,al_y_experience,al_surgery_number){};
    void performSurgery() override;
    void printInfo() override;
    ~Allergist() override = default;

};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_ALLERGIST_H
