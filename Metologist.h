//
// Created by Zohar Monsonego on 15/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_METOLOGIST_H
#define HOSPITAL_MANAGEMENT_SYSTEM_METOLOGIST_H

#include "Doctor.h"
#include <string>

class Metologist :public Doctor{
public:
    Metologist():Doctor(){};
    Metologist(const string &m_name,long m_id,int m_age,char m_sex,const string &m_start_date,const string &m_degree_level,const string &m_specialization,int m_y_experience,int m_surgery_number): Doctor(m_name,m_id,m_age,m_sex,m_start_date,m_degree_level,m_specialization,m_y_experience,m_surgery_number){};
    void performSurgery() override;
    void printInfo() override;
    ~Metologist() override = default;
    


};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_METOLOGIST_H
