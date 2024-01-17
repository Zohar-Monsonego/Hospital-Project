//
// Created by Zohar Monsonego on 16/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_OTOLARYNGOLOGY_H
#define HOSPITAL_MANAGEMENT_SYSTEM_OTOLARYNGOLOGY_H

#include "Doctor.h"
#include <string>

class Otolaryngology :public Doctor{
public:
    Otolaryngology():Doctor(){};
    Otolaryngology(const string &ot_name,long ot_id,int ot_age,char ot_sex,const string &ot_start_date,const string &ot_degree_level,const string &ot_specialization,int ot_y_experience, int ot_surgery_number): Doctor(ot_name,ot_id,ot_age,ot_sex,ot_start_date,ot_degree_level,ot_specialization,ot_y_experience,ot_surgery_number){};
    void performSurgery() override;
    void printInfo() override;
    ~Otolaryngology() override = default;

};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_OTOLARYNGOLOGY_H
