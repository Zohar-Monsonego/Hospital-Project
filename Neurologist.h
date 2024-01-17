//
// Created by Zohar Monsonego on 16/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_NEUROLOGIST_H
#define HOSPITAL_MANAGEMENT_SYSTEM_NEUROLOGIST_H

#include "Doctor.h"
#include <string>

class Neurologist :public Doctor{
public:
    Neurologist():Doctor(){};
    Neurologist(const string &n_name,long n_id,int n_age,char n_sex,const string &n_start_date,const string &n_degree_level,const string &n_specialization,int n_y_experience,int n_surgery_number): Doctor(n_name,n_id,n_age,n_sex,n_start_date,n_degree_level,n_specialization,n_y_experience,n_surgery_number){};
    void performSurgery() override;
    void printInfo() override;
    ~Neurologist() override = default;

};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_NEUROLOGIST_H
