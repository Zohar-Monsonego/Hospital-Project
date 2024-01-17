//
// Created by Zohar Monsonego on 14/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_CARDIOLOGIST_H
#define HOSPITAL_MANAGEMENT_SYSTEM_CARDIOLOGIST_H

#include "Doctor.h"
#include <string>


class Cardiologist : public Doctor{
public:
    Cardiologist():Doctor(){};
    Cardiologist(const string &c_name,long c_id,int c_age,char c_sex,const string &c_start_date,const string &c_degree_level,const string &c_specialization,int c_y_experience,int c_surgery_number): Doctor(c_name,c_id,c_age,c_sex,c_start_date,c_degree_level,c_specialization,c_y_experience,c_surgery_number){};
    void performSurgery() override;//What surgeries the doctor can do
    void printInfo() override;
    ~Cardiologist() override=default;

};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_CARDIOLOGIST_H
