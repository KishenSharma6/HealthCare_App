#include <iostream>
#include "headers/human.h"
#include "headers/physician.h"
#include "headers/patient.h"


#define inch_to_cm(x)((x * 2.54) /100)
#define lb_to_kg(x)(x / 2.20462)
#define patient_bmi(kg, meters)(kg/(meters * meters))

using namespace std;
    
 int main(){
    Patient patient1("Henry", 23, "Fireman");
    patient1.introduction();
    patient1.collect_symptoms();
    patient1.verify_symptoms();

    return 0;
}