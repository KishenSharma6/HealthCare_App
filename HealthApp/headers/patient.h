//Create class for patient being checked in at hospital
// Patient should have vitals collected by nurse (height, weight, BP, and resting heart rate) and name/age

#ifndef PATIENT_H
#define PATIENT_H

#include "human.h"
#include "physician.h"
#include <iostream>

using namespace std;

class Patient: public Human{
public: //Should this information be private?
    string Name;
    int Systolic;
    int Diastolic;
    int RestHR;
    float height_inches;
    float weight_lbs;

    Patient(string name, int systolic, int diastolic, int pulse, float height, float weight){
        Name= name;
        Systolic= systolic;
        Diastolic= diastolic;
        RestHR= pulse;
        height_inches= height;
        weight_lbs= weight;

    };
    //using Human::Human;

};

#endif

