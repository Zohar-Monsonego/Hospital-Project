//
// Created by Zohar Monsonego on 14/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_GYNECOLOGIST_H
#define HOSPITAL_MANAGEMENT_SYSTEM_GYNECOLOGIST_H
#include "Doctor.h"
#include <string>

class Gynecologist :public Doctor{
public:
    Gynecologist():Doctor(){};
    Gynecologist(const string &g_name, long g_id, int g_age, char g_sex, const string &g_start_date, const string &g_degree_level,const string &g_specialization, int g_y_experience, int g_surgery_number): Doctor(g_name,g_id,g_age,g_sex,g_start_date,g_degree_level,g_specialization,g_y_experience,g_surgery_number){};
    void printInfo() override;
    void performSurgery() override;//What surgeries the doctor can do
    ~Gynecologist() override=default;

};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_GYNECOLOGIST_H
