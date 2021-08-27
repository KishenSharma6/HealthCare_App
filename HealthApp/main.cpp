#include <iostream>

#define inch_to_cm(x)(x * 2.54)
#define lb_to_kg(x)(x / 2.20462)
#define patient_bmi(kg, meters)(kg/(meters * meters))

using namespace std;

float height_inches;
float weight_lbs;
float bmi;
float meters;
float kg;

int main(){
    cout << "Input patient height in inches: ";
    cin >> height_inches;
    meters= inch_to_cm(height_inches);
    cout << "Patient is "<< meters << " cm." << endl;

    cout << "Input patient weight in pounds: ";
    cin >> weight_lbs;
    kg= lb_to_kg(weight_lbs);
    cout << "Patient weighs "<< kg << " kg." << endl;

    cout<< "Patient's BMI is " << patient_bmi(kg, meters);

    return 0;
}