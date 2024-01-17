#include <iostream>
using namespace std;
#include "Person.h"
#include "Employee.h"
#include "Doctor.h"
#include "Gynecologist.h"
#include "Cardiologist.h"
#include "Ophtalmologist.h"
#include "Anesthesiologist.h"
#include "Dermatologist.h"
#include "FamilyDoctor.h"
#include "Metologist.h"
#include "Neurologist.h"
#include "Obstetrician.h"
#include "Oncologist.h"
#include "Otolaryngology.h"
#include "Pulmonologist.h"
#include "Physiotherapist.h"
#include "Allergist.h"
#include "Surgeon.h"
#include "Intern.h"
int main() {
    Gynecologist g("Moshe Ohana",123456789,34,'m',"1/1/22","BA","gynecologist",3,8);
    g.printInfo();
    cout<<endl;
    Cardiologist c("Oren Vaknin",132467895,25,'m',"25/3/17","Doctorate","Cardiology",10,12);
    c.printInfo();
    cout<<endl;
    Ophtalmologist o("Zohar Monsonego",214067662,20,'f',"21/2/23","master's degree","Ophthalmology",5,6);
    o.printInfo();
    cout<<endl;
    Anesthesiologist a("Vered Shira",223145678,40,'f',"12/6/22","BA","Anesthesiology",10,20);
    a.printInfo();
    cout<<endl;
    Dermatologist d("Layla",324566789,34,'f',"12/12/20","Doctorate","Dermatology",10,20);
    d.printInfo();
    cout<<endl;
    FamilyDoctor f("Naama Dery",208403139,26,'f',"4/5/17","BA","General Medicine",5,0);
    f.printInfo();
    cout<<endl;
    Metologist m("Yosef.M",675901823,40,'m',"11/9/23","BA","Hematology",10,0);
    m.printInfo();
    cout<<endl;
    Neurologist n("Yuly.O",123434356,30,'M',"4/5/20","Doctorate","Neurology",7,0);
    n.printInfo();
    cout<<endl;
    Obstetrician ob("Shira.V",434256789,35,'F',"4/8/19","Master's degree","Obstetrician",12,6,13);
    ob.printInfo();
    cout<<endl;
    Oncologist on("Avi Dadon",111111111,45,'M',"13/6/10","Doctorate","Oncology",15,10);
    on.printInfo();
    cout<<endl;
    Otolaryngology ot("May Asher",234236758,29,'F',"29/12/23","BA","Otolaryngology",5,3);
    ot.printInfo();
    cout<<endl;
    Pulmonologist p("Noam Mor",221212321,37,'M',"5/7/17","Master's degree","Pulmonology",10,0);
    p.printInfo();
    cout<<endl;
    Physiotherapist ph("Roy.M",333333333,60,'F',"12/3/97","BA","Physiotherapist",30,0);
    ph.printInfo();
    cout<<endl;
    Allergist al("Alon Ohayon",879687954,32,'M',"4/8/16","BA","Allergist",7,0);
    al.printInfo();
    cout<<endl;
    Surgeon s("Omer Menashe",445345456,39,'M',"21/2/17","Master's degree","Surgeon",10,15,"Cancer");
    s.printInfo();
    cout<<endl;
    Intern in("Ziv Maman",333889897,27,'M',"21/3/23","Intern","Cardiology",1,0,"21/3/27");
    in.printInfo();
    return 0;



}
