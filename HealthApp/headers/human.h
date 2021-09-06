#include <iostream>
#include <list>
#include "physician.h"
using namespace std;

#ifndef HUMAN_H
#define HUMAN_H
class Human
{
private:
    list<string> UnderlyingConditions;

public:
    string Name;
    int Age;
    string Occupation;

    Human(){
        cout << "Person attributes have not been included" << endl;
    };

    Human(string name, int age, string occupation){
        Name= name;
        Age= age;
        Occupation= occupation;
    };
    
    void introduction(){
        cout << "Hi, my name is " << Name<< endl;
               
    };
        
};

#endif