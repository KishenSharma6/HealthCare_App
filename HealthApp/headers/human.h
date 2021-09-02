#include <iostream>
#include "physician.h"
using namespace std;

#ifndef HUMAN_H
#define HUMAN_H
class Human
{
public:
    string Name;
    int Age;
    string Role;

    Human(){

    };
    Human(string name, int age, string role){
        Name= name;
        Age= age;
        Role= role;
    };
    void introduction(){
        if (Role == "Physician"){
            cout << "Hi there, I am Dr." <<Name << " and I am your phsycian for today's visit" << endl;
        } else 
        {
            cout << "Hi, my name is " << Name<< endl;
        }
        
    };

};

#endif