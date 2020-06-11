//This is the implementation of the decision struct.
//it stores business logic and functions that help it operate.
#include <iostream>
#include <cctype>
#include <cstring>

struct decision
{
    //default constructor
    decision();

    //parameterized constructor
    decision(char * data);

    ~decision();
   
    //copies the parm into the operand
    //int copyDecision();

    //compare
    //display
    int display();
    
    //copy constructor
    //decision(decision & decision_toadd);

    int copyData(decision & decisionToadd);

    //comparison, returns 1 if match
    int compareData(decision *& decision_tocheck);
    
    char * decisionData;
};
