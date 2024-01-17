//
// Created by Zohar Monsonego on 16/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_INTERN_H
#define HOSPITAL_MANAGEMENT_SYSTEM_INTERN_H

#include "Doctor.h"
#include <string>

class Intern : public Doctor{
private:
    string end_intern_date;
public:
    Intern():Doctor(),end_intern_date(){};
    Intern(const string &in_name,long in_id,int in_age,char in_sex,const string &in_start_date,const string &in_degree_level,const string &in_specialization,int in_y_experience, int in_surgery_number,const string &in_end_intern_date): Doctor(in_name,in_id,in_age,in_sex,in_start_date,in_degree_level,in_specialization,in_y_experience,in_surgery_number),
                                                                                                                                                                                                                                           end_intern_date(in_end_intern_date){};
    string getEndDate();
    void performSurgery() override;
    void printInfo() override;
    ~Intern() override = default;

};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_INTERN_H
