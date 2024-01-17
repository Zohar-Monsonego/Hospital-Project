//
// Created by Zohar Monsonego on 16/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_ONCOLOGIST_H
#define HOSPITAL_MANAGEMENT_SYSTEM_ONCOLOGIST_H

#include "Doctor.h"
#include <string>

class Oncologist : public Doctor{
public:
    Oncologist():Doctor(){};
    Oncologist(const string &on_name,long on_id,int on_age,char on_sex,const string &on_start_date,const string &on_degree_level,const string &on_specialization,int on_y_experience, int on_surgery_number): Doctor(on_name,on_id,on_age,on_sex,on_start_date,on_degree_level,on_specialization,on_y_experience,on_surgery_number){};
    void performSurgery() override;
    void printInfo() override;
    ~Oncologist() override = default;

};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_ONCOLOGIST_H
