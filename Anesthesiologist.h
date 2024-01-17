//
// Created by Zohar Monsonego on 14/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_ANESTHESIOLOGIST_H
#define HOSPITAL_MANAGEMENT_SYSTEM_ANESTHESIOLOGIST_H

#include "Doctor.h"
#include <string>

class Anesthesiologist : public Doctor{
public:
    Anesthesiologist():Doctor(){};
    Anesthesiologist(const string &a_name,long a_id,int a_age,char a_sex,const string &a_start_date,const string &a_degree_level,const string &a_specialization,int a_y_experience, int a_surgery_number): Doctor(a_name,a_id,a_age,a_sex,a_start_date,a_degree_level,a_specialization,a_y_experience,a_surgery_number){};
    void performSurgery() override;
    void printInfo() override;
    ~Anesthesiologist() override =default;

};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_ANESTHESIOLOGIST_H
