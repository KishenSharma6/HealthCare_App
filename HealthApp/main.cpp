#include <iostream>
#include "headers/human.h"
#include "headers/physician.h"
#include "headers/patient.h"


#define inch_to_cm(x)((x * 2.54) /100)
#define lb_to_kg(x)(x / 2.20462)
#define patient_bmi(kg, meters)(kg/(meters * meters))

using namespace std;

float height_inches;
float weight_lbs;
float bmi;
float meters;
float kg;

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
int main(){
    // cout << "Input patient height in inches: ";
    // cin >> height_inches;
    // meters= inch_to_cm(height_inches);
    // cout << "Patient is "<< meters << " meters." << endl;

    // cout << "Input patient weight in pounds: ";
    // cin >> weight_lbs;
    // kg= lb_to_kg(weight_lbs);
    // cout << "Patient weighs "<< kg << " kg." << endl;

    // cout<< "Patient's BMI is " << patient_bmi(kg, meters) << endl;
    // isPatientHealthy(patient_bmi(kg, meters));

    Human person1("Jim", 38, "Physician");
    person1.introduction();

    Patient person2("Henry", 33, 33, 85, 69, 139);
    person2.introduction();
    return 0;
}