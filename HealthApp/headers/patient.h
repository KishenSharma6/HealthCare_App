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
    int Systolic;
    int Diastolic;
    int RestHR;
    float height_inches;
    float weight_lbs;

    Patient(int systolic, int diastolic, int pulse, float height, float weight){
        Systolic= systolic;
        Diastolic= diastolic;
        RestHR= pulse;
        height_inches= height;
        weight_lbs= weight;

    };
    
    int blood_pressure(){
        if (Systolic < 120 & Diastolic < 80){
            cout << "Blood pressure is Normal" << endl;
        } else if (129 >= Systolic>= 120 & Diastolic < 80)
        {
            cout << "Blood pressure is Elevated" << endl;
        } else if (139 >= Systolic>= 130 | 89 >= Diastolic >= 80){
            cout << "High blood pressure STAGE 1 - Hypertension" << endl;
        } else if ((180 > Systolic>= 140 | 120 > Diastolic > 90))
        {
            cout << "High blood pressure STAGE 2 - Hypertension" << endl;
        } else{
            cout << "Hypertensive Crisis - Please consult a Cardiologist immediately" << endl;
        }
        
        return 0;
    }

};

#endif

