//Class that determines presriptions patient needs given vitals
#ifndef PHYSICIAN_H
#define PHYSICIAN_H

#include <iostream>

using namespace std;
#include "human.h"

class Physcian:public Human{
public:
    string LastName;
    string Specialization;
    string MedicalSchool;    
    
    void isPatientHealthy(float bmi){
    if (bmi >= 30){
        cout<< "Patient is obese" << endl;
    } else if (bmi < 30 and bmi >=25)
    {
        cout<< "Patient is overweight" <<endl;
    } else if (bmi <25)
    {
        cout<<"Patient is healthy" << endl;
    }

};
};
#endif