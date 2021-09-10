#include <iostream>
#include "headers/human.h"
#include "headers/physician.h"
#include "headers/patient.h"

using namespace std;
    
 int main(){
    Patient patient1("Henry", 23, "Fireman");
    patient1.introduction();
    patient1.collect_symptoms();
    patient1.verify_symptoms();

    return 0;
}