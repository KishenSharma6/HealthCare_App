//Create class for patient being checked in at hospital
// Patient should have vitals collected by nurse (height, weight, BP, and resting heart rate) and name/age
// Patient vitals should probably be private
#ifndef PATIENT_H
#define PATIENT_H

#include "human.h"
#include "physician.h"
#include <iostream>
#include <list>;

using namespace std;

class Patient: public Human{
private: //Should this information be private?
    int Systolic;
    int Diastolic;
    int RestHR;
    float height_inches;
    float weight_lbs;
    list<string> Symptoms;
   
    Patient(){
        cout<< "Patient does not have attributes"<< endl;
    };

    int heart_metrics(){
        //Capture Patient Systolic & Diastolic
        cout << "Enter patient Systolic Blood Pressure:"<<endl;
        cin >> Systolic;
              
        cout << "Enter patient Diastolic Blood Pressure:"<<endl;
        cin >> Diastolic;

        cout << "Enter patient Resting Heart Rate(BPM):"<<endl;
        cin >> RestHR;

        return 0;
    }
    void biometrics(){
        cout << "Enter patient Resting Heart Rate(BPM):"<<endl;
        cin >> RestHR;

        cout << "Enter patient height(inches):"<<endl;
        cin >> height_inches;

        cout << "Enter patient weight(pounds):"<<endl;
        cin >> weight_lbs;

    }

};

#endif

