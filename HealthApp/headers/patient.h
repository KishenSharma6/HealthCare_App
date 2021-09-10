#ifndef PATIENT_H
#define PATIENT_H

#include "human.h"
#include "physician.h"
#include <iostream>
#include <list>

using namespace std;

class Patient: public Human{
private: //Should this information be private?
    int Systolic;
    int Diastolic;
    int RestHR;
    float height_inches;
    float weight_lbs;
    list<string> Symptoms;

public:   
    //Constructors
    Patient(){
        cout<< "Patient does not have attributes"<< endl;
    };
    Patient(string name, int age): Human(name, age){
        cout << "Patient attributes set" << endl;
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
    int return_systolic(){
        return Systolic;
    }
    int return_diastolic(){
        return Diastolic;
    }
    void biometrics(){
        cout << "Enter patient Resting Heart Rate(BPM):"<<endl;
        cin >> RestHR;

        cout << "Enter patient height(inches):"<<endl;
        cin >> height_inches;

        cout << "Enter patient weight(pounds):"<<endl;
        cin >> weight_lbs;

    }   
    int return_height_inches(){
        return height_inches;
    }
    int return_weight_lbs(){
        return weight_lbs;
    } 

    void collect_symptoms(){
        //Collect patient symptoms
        cout<<"Input symptoms patient is suffering from. Enter \"-1\" when completed" << endl;
        
        //string termination = "-1";
        string temp; //Hold user input to append to Symptoms 
            
        while (cin >> temp) {
            Symptoms.push_back(temp);
            if (temp == "-1"){
                Symptoms.pop_back();
                break;
            };
        }}
    void verify_symptoms(){
        cout << "Patient Symptoms were input as follows:" << endl;
        for (auto i :Symptoms){
            cout << i <<endl;
        }

        cout << "Are these symptoms correct? Y/N" << endl;
        string response;
        cin >> response;
        if (response == "N"){
            cout << "Clearing Patient Symptoms. ";
            collect_symptoms();
        }
        else if (response == "Y"){
            cout <<"Confirmed" << endl;
        }
        else{
            cout << "Invalid input" << endl;
            verify_symptoms();
        };
        
        }
    void read_symptoms(){
        cout << "Patient Symptoms are as follows:" << endl;
        for (auto i :Symptoms){
            cout << i <<endl;
        }
    }
};

#endif

