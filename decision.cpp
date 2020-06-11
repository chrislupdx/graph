//Project 5
//This is the implementation of decision.h
//Chris Lu
//decision.cpp

#include "decision.h"

//default constructor
decision::decision()
{
    decisionData = nullptr; 
} 

//parameterized constructor
decision::decision(char * data_toadd)
{
    decisionData = nullptr;
    this->decisionData = new char[strlen(data_toadd) + 1];
    strcpy(this->decisionData, data_toadd);
}

//default destructor
decision::~decision()
{
    if(decisionData)
        delete [] decisionData;
}

//display
int decision::display()
{
    std::cout << decisionData;
    return 1;
}

//The operand copies the parm into itself
int decision::copyData(decision & decisionToadd)
{
    decisionData = new char[strlen(decisionToadd.decisionData) + 1];
    strcpy(decisionData, decisionToadd.decisionData);

    return 1;
}

//compare function: returns 1 on a match, 0 on failure
int decision::compareData(decision *& decision_tocheck)
{
    if(strcmp(decisionData, decision_tocheck->decisionData) == 0)
    {
        return 1;
    }
    return 0;
}
