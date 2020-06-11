//Project 5
//This is the implementation of the decision.h
//Chris Lu
//decision.h

#include <iostream>
#include <cctype>
#include <cstring>

struct decision
{
    //default constructor
    decision();

    //parameterized constructor
    decision(char * data);

    //default destructor
    ~decision();

    //Just prints out the data members
    int display();
    
    //copies the parm into the operand
    int copyData(decision & decisionToadd);

    //comparison, returns 1 if match
    int compareData(decision *& decision_tocheck);
    
    char * decisionData;
};
