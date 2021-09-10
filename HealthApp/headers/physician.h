//Class that determines presriptions patient needs given vitals
#ifndef PHYSICIAN_H
#define PHYSICIAN_H

#include "human.h"

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

#define inch_to_cm(x)((x * 2.54) /100)
#define lb_to_kg(x)(x / 2.20462)
#define patient_bmi(kg, meters)(kg/(meters * meters))

class Physcian:public Human{
public:
    string LastName;
    string Specialization;
    string MedicalSchool;    
//Constructors
    Physcian(){
        cout<< "Physcian does not have attributes"<< endl;
    };
    Physcian(string name, int age, string lastname, string specialization, string school): Human(name, age){
        LastName= lastname;
        Specialization= specialization;
        MedicalSchool= school;

        cout << "Physcian attributes set" << endl;
    };

    void introduction(){
        cout << "Hi, my name is Dr." << Name<< " " << LastName<< endl;
        cout << "I attended " << MedicalSchool << " where I specialized in " << Specialization<< endl;
        cout << "I am going to look at your numbers and see what we can do for you" << endl;
    };
    void Patient_BMI(float weight_lbs, float height_in){
    float weight_kg= lb_to_kg(weight_lbs);
    float height_m= inch_to_cm(height_in);
    float bmi= patient_bmi(weight_lbs, height_m);
    
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

    // void check_COVID(list<string> patient_symptoms, list<string> covid_symptoms){
    //     int counter;
    //     for (_List_iterator i= patient_symptoms.begin(); i != patient_symptoms.end(); i++){
    //         if (std::find(covid_symptoms.begin(), covid_symptoms.end(), i) != covid_symptoms.end()){
    //             counter ++;
    //         }
    //     }
    //     if (counter > 3){
    //         cout << "I am goint to order you a COVID test today just to be safe" << endl;
    //     } 

    // };
};
#endif