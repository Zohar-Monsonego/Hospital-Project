cmake_minimum_required(VERSION 3.26)
project(HospitaL_Management_System)

set(CMAKE_CXX_STANDARD 17)

add_executable(HospitaL_Management_System main.cpp
        Person.cpp
        Person.h
        Employee.cpp
        Employee.h
        Doctor.cpp
        Doctor.h
        Gynecologist.cpp
        Gynecologist.h
        Cardiologist.cpp
        Cardiologist.h
        Ophtalmologist.cpp
        Ophtalmologist.h
        Anesthesiologist.cpp
        Anesthesiologist.h
        Dermatologist.cpp
        Dermatologist.h
        FamilyDoctor.cpp
        FamilyDoctor.h
        Metologist.cpp
        Metologist.h
        Neurologist.cpp
        Neurologist.h
        Obstetrician.cpp
        Obstetrician.h
        Oncologist.cpp
        Oncologist.h
        Otolaryngology.cpp
        Otolaryngology.h
        Pulmonologist.cpp
        Pulmonologist.h
        Physiotherapist.cpp
        Physiotherapist.h
        Allergist.cpp
        Allergist.h
        Surgeon.cpp
        Surgeon.h
        Intern.cpp
        Intern.h)
