//
// Created by Zohar Monsonego on 16/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_SURGEON_H
#define HOSPITAL_MANAGEMENT_SYSTEM_SURGEON_H

#include "Doctor.h"
#include <string>

class Surgeon : public Doctor{
private:
    string sub_spec;//sub-specialization
public:
    Surgeon():Doctor(),sub_spec(){};
    Surgeon(const string &s_name,long s_id,int s_age,char s_sex,const string &s_start_date,const string &s_degree_level,const string &s_specialization,int s_y_experience, int s_surgery_number,const string &s_sub_spec): Doctor(s_name,s_id,s_age,s_sex,s_start_date,s_degree_level,s_specialization,s_y_experience,s_surgery_number),
                                                                                                                                                                                                                           sub_spec(s_sub_spec){};
    string getSubSpec();
    void performSurgery() override;
    void printInfo() override;
    ~Surgeon() override = default;

};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_SURGEON_H
