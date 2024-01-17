//
// Created by Zohar Monsonego on 16/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_PULMONOLOGIST_H
#define HOSPITAL_MANAGEMENT_SYSTEM_PULMONOLOGIST_H

#include "Doctor.h"
#include <string>

class Pulmonologist : public Doctor{
public:
    Pulmonologist():Doctor(){};
    Pulmonologist(const string &p_name,long p_id,int p_age,char p_sex,const string &p_start_date,const string &p_degree_level,const string &p_specialization,int p_y_experience, int p_surgery_number): Doctor(p_name,p_id,p_age,p_sex,p_start_date,p_degree_level,p_specialization,p_y_experience,p_surgery_number){};
    void performSurgery() override;
    void printInfo() override;
    ~Pulmonologist() override = default;
};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_PULMONOLOGIST_H
