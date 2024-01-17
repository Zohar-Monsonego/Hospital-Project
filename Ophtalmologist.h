//
// Created by Zohar Monsonego on 14/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_OPHTALMOLOGIST_H
#define HOSPITAL_MANAGEMENT_SYSTEM_OPHTALMOLOGIST_H

#include "Doctor.h"
#include <string>

class Ophtalmologist :public Doctor{
public:
    Ophtalmologist():Doctor(){};
    Ophtalmologist(const string &o_name,long o_id,int o_age,char o_sex,const string &o_start_date,const string &o_degree_level,const string &o_specialization,int o_y_experience,int o_surgery_number): Doctor(o_name,o_id,o_age,o_sex,o_start_date,o_degree_level,o_specialization,o_y_experience,o_surgery_number){};
    void performSurgery() override;
    void printInfo() override;
    ~Ophtalmologist() override=default;



};
#endif //HOSPITAL_MANAGEMENT_SYSTEM_OPHTALMOLOGIST_H
