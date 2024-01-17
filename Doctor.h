//
// Created by Zohar Monsonego on 11/01/2024.
//

#ifndef HOSPITAL_MANAGEMENT_SYSTEM_DOCTOR_H
#define HOSPITAL_MANAGEMENT_SYSTEM_DOCTOR_H
#include <iostream>
using namespace std;
#include <string>
#include <utility>
#include "Employee.h"

class Doctor : public Employee{
private:
    string degree_level; //if the doctor has BA,Master's degree, Doctorate
    string specialization;
    int y_experience; //years of experience
    int surgery_number;
public:
    Doctor(): Employee(),degree_level(),specialization(),y_experience(0),surgery_number(0){};
    Doctor(const string &doctor_name, long doctor_id,int doctor_age, char doctor_sex, const string &doctor_start_date, const string &degree_level, const string &d_specialization, int d_y_experience, int d_surgery_number): Employee(doctor_name,doctor_id,doctor_age,doctor_sex,doctor_start_date),
                                                                                                                                                                                                        degree_level(std::move(degree_level)),
                                                                                                                                                                                                        specialization(d_specialization),y_experience(d_y_experience),surgery_number(d_surgery_number){};
    [[nodiscard]] string getDegreeLevel() const;
    [[nodiscard]] string getSpecialization() const;
    [[nodiscard]] int getYearExperience() const;
    [[nodiscard]] int getSurgeryNumber() const;
    virtual void performSurgery()=0;
    void printInfo() override;
    ~Doctor() override=default;

};


#endif //HOSPITAL_MANAGEMENT_SYSTEM_DOCTOR_H
