//
// Created by Zohar Monsonego on 15/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_FAMILYDOCTOR_H
#define HOSPITAL_MANAGEMENT_SYSTEM_FAMILYDOCTOR_H

#include "Doctor.h"
#include <string>

class FamilyDoctor :public  Doctor{
public:
    FamilyDoctor():Doctor(){};
    FamilyDoctor(const string &f_name,long f_id,int f_age,char f_sex,const string &f_start_date,const string &f_degree_level,const string &f_specialization,int f_y_experience,int f_surgery_number): Doctor(f_name,f_id,f_age,f_sex,f_start_date,f_degree_level,f_specialization,f_y_experience,f_surgery_number){};
    void performSurgery() override;
    void printInfo() override;
    ~FamilyDoctor()override =default;

};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_FAMILYDOCTOR_H
