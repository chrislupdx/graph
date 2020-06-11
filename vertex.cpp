//Project 6
//This is the implementation of the vertex.cpp.
//Chris Lu
//Vertex.cpp

#include "graph.h" 

//Default vertex constructor
vertex::vertex()
{
    head = NULL;
    decisionData = NULL;
}

//Parameterized constructor that makes dec_toadd it's decisionData
vertex::vertex(decision * dec_toadd)
{
    head = NULL;
    decisionData = nullptr; //decision is a struct, so I'm thinking about whether this is safe/good
    this->decisionData = dec_toadd;
}

//Prints the edgelist of a specific vertex
int vertex::printEdges()
{
    node * temp = head;
    while(temp)
    {
        temp->avertex->decisionData->display();
        temp = temp->next;
    }
    return 1;
}
