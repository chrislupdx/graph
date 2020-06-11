//Project 5
//This is the implentation of graph.cpp
//Chris Lu
//graph.cpp
#include "graph.h"

//default constructor for table
vlist::vlist(int size)
{
    list_size = size;
    verticelist = new vertex[size];
}

//creates a vertex and adjacency list
int vlist::addVertex( vertex * vertex_toadd)
{
    for(int i = 0; i < list_size; i++)
    {
        if(!verticelist[i].decisionData) //if there's an open spot
        {
            verticelist[i].decisionData = new decision(*vertex_toadd->decisionData);
            return 1;
        }
    }
    return 1;
}

//default destructor
vlist::~vlist()
{
    for(int i = 0; i < list_size; i++)
    {
    if(verticelist[i].head)
    {
        removeLLL(verticelist[i].head);
    }
    }
    list_size = 0;
}

//Recursive deletion
int vlist::removeLLL(node *& head)
{
    if(!head) return 0;

    int count = 1 + removeLLL(head->next);    

    delete head;
    head = NULL; 
    return count;
}

//findindex (for the 2 keys), adding to the LLL of the 1st and then pointing to the node of the 2nd
int vlist::findIndex(char * key)
{
    //search through vlist for one, make it ref
    for(int i = 0; i < list_size; i++)
        if(verticelist[i].decisionData && 
                strcmp(key, verticelist[i].decisionData->decisionData) == 0)
            return i; //we're returning the index we found!
    return 0; //failure condition
}

//createEdges
int vlist::createEdges(char * first, char * second)
{ 
    int firstAddres = findIndex(first); 
    int secondAddres = findIndex(second);

    node * toadd = new node; //new edge
    toadd->next = verticelist[firstAddres].head;  //attach the new node 
    toadd->avertex = &verticelist[secondAddres]; //check if the address of the secondAddres is going through
    verticelist[firstAddres].head = toadd;

    return 1;
}

//goes through the entire vertice array printing out each spot (including open ones)
int vlist::displayVertices()
{
    for(int i = 0; i < list_size; i++)
    {
        std::cout << "Position " << i << std::endl;
        if(verticelist[i].decisionData) //hmmm 
        {
            verticelist[i].decisionData->display();
        }
        std::cout << std::endl;
    }
    return 1;
}

//displays edge lists of each vertice that has one
int vlist::displayEdges()
{
    //go through each vertice 
    for(int i = 0; i < list_size; i++)
    {
        if(verticelist[i].decisionData)
        {
            verticelist[i].decisionData->display();
            std::cout << " has these edges in their list :" << std::endl;
            verticelist[i].printEdges();  //it's a while loop that goes through and prints the entire LLL of edges
            std::cout << std::endl;
        }
    }    
    return 1;
}
