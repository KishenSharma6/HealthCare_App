//Class that determines presriptions patient needs given vitals
#ifndef PHYSICIAN_H
#define PHYSICIAN_H

#include <iostream>
#include "human.h"

using namespace std;

#define inch_to_cm(x)((x * 2.54) /100)
#define lb_to_kg(x)(x / 2.20462)
#define patient_bmi(kg, meters)(kg/(meters * meters))

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
    int evaluate_bp(int Systolic, int Diastolic ){
        if (Systolic < 120 & Diastolic < 80){
            cout << "Blood pressure is Normal" << endl;
        } else if (129 >= Systolic & Diastolic < 80)
        {
            cout << "Blood pressure is Elevated" << endl;
        } else if (139 >= Systolic | 89 >= Diastolic){
            cout << "High blood pressure STAGE 1 - Hypertension" << endl;
        } else if ((180 > Systolic | 120 > Diastolic))
        {
            cout << "High blood pressure STAGE 2 - Hypertension" << endl;
        } else{
            cout << "Hypertensive Crisis - Please consult a Cardiologist immediately" << endl;
        }
        
        return 0;
    }
};
#endif