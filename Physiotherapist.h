//
// Created by Zohar Monsonego on 16/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_PHYSIOTHERAPIST_H
#define HOSPITAL_MANAGEMENT_SYSTEM_PHYSIOTHERAPIST_H

#include "Doctor.h"
#include <string>

class Physiotherapist :public Doctor{
public:
    Physiotherapist():Doctor(){};
    Physiotherapist(const string &ph_name,long ph_id,int ph_age,char ph_sex,const string &ph_start_date,const string &ph_degree_level,const string &ph_specialization,int ph_y_experience, int ph_surgery_number): Doctor(ph_name,ph_id,ph_age,ph_sex,ph_start_date,ph_degree_level,ph_specialization,ph_y_experience,ph_surgery_number){};
    void performSurgery() override;
    void printInfo() override;
    ~Physiotherapist() override = default;

};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_PHYSIOTHERAPIST_H
