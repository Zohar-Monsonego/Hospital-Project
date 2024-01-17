//
// Created by Zohar Monsonego on 16/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_OBSTETRICIAN_H
#define HOSPITAL_MANAGEMENT_SYSTEM_OBSTETRICIAN_H

#include "Doctor.h"
#include <string>

class Obstetrician : public Doctor{
private:
    int births_number;
public:
    Obstetrician():Doctor(),births_number(0){};
    Obstetrician(const string &ob_name,long ob_id,int ob_age,char ob_sex,const string &ob_start_date,const string &ob_degree_level,const string &ob_specialization,int ob_y_experience,int ob_surgery_number,int ob_births_number): Doctor(ob_name,ob_id,ob_age,ob_sex,ob_start_date,ob_degree_level,ob_specialization,ob_y_experience,ob_surgery_number),births_number(ob_births_number){};
    void performSurgery() override;
    void printInfo() override;
    [[nodiscard]] int getBirthsNumber() const;
    ~Obstetrician() override = default;

};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_OBSTETRICIAN_H
