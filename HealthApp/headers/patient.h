#ifndef PATIENT_H
#define PATIENT_H

#include "human.h"
#include "physician.h"
#include <iostream>
#include <list>
#include <vector>


using namespace std;

class Patient: public Human{
private: //Should this information be private?
    int Systolic;
    int Diastolic;
    int RestHR;
    float height_inches;
    float weight_lbs;
    vector<string> Symptoms;

public:   
    //Constructors
    Patient(){
        cout<< "Patient does not have attributes"<< endl;
    };
    Patient(string name, int age): Human(name, age){
        cout << "Patient attributes set" << endl;
    };
    int bp_metrics(){
        //Capture Patient Systolic & Diastolic
        cout << "Enter patient Systolic Blood Pressure:"<<endl;
        cin >> Systolic;
              
        cout << "Enter patient Diastolic Blood Pressure:"<<endl;
        cin >> Diastolic;

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
        cout<<"Input symptoms patient is suffering from. Enter \"-1\" when completed" << endl;
        
        string input;
        while (input != "-1"){
            cin >> input;
            cin.ignore();
            Symptoms.push_back(input);
            }

        if (input== "-1"){
            Symptoms.pop_back();
        }
        }
    
    void verify_symptoms(){
        cout << "Patient Symptoms were input as follows:" << endl;
        for (string i :Symptoms){
            cout << i << endl ;
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
    int read_symptoms(){
        cout << "Patient Symptoms are as follows:" << endl;
        for (auto i :Symptoms){
            cout << i <<endl;
        }
        return 0;
    }
};

#endif

