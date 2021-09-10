#include <iostream>
#include "headers/human.h"
#include "headers/physician.h"
#include "headers/patient.h"

using namespace std;
    
 int main(){
    Patient patient1("Henry", 23);
    patient1.introduction();
    patient1.biometrics();
    patient1.heart_metrics();
    patient1.collect_symptoms();
    patient1.verify_symptoms();

    Physcian doc1("Mark", 41, "Stevenson", "General Practice", "UCSD");
    doc1.introduction();
    doc1.Patient_BMI(patient1.return_weight_lbs(), patient1.return_height_inches());
    doc1.evaluate_bp(patient1.return_systolic(), patient1.return_diastolic());
    
    return 0;
}