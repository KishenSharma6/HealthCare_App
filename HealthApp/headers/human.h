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

    Human(){
        cout << "Human attributes have not been included" << endl;
    };

    Human(string name, int age){
        Name= name;
        Age= age;
    };
    
    void introduction(){
        cout << "Hi, my name is " << Name<< endl;
               
    };
        
};

#endif