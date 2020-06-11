//This is the implemntation of the .cpp file //of the graph class. the underlying data structure
//is a flexible list.
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
            return 1; //this should stop
        }
    }
    return 1;
}

//default destructor
vlist::~vlist()
{
    list_size = 0;
    verticelist = new vertex; //i think?
}

//findindex (for the 2 keys), adding to the LLL of the 1st and then pointing to the node of the 2nd
int vlist::findIndex(char * key)
{
    //search through vlist for one, make it ref
    for(int i = 0; i < list_size; i++)
        if(verticelist[i].decisionData && 
                strcmp(key, verticelist[i].decisionData->decisionData) == 0)
            return i;
    return 0; //failure condition
}

//createEdges
int vlist::createEdges(char * first, char * second)
{ 
    int firstAddres = findIndex(first); 
    int secondAddres = findIndex(second);

    node * toadd = new node; //new edge
    toadd->next = verticelist[firstAddres].head;  //attach the new node 
    toadd->avertex = &verticelist[secondAddres]; //check if the address of the secondAddres is going through right
    verticelist[firstAddres].head = toadd; //

    return 1;
}

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

//displays all edges
int vlist::displayEdges()
{
    //go through each vertice 
    for(int i = 0; i < list_size; i++)
    {
        //the stuff below is mad
        //print each edglist
        while(verticelist->head)
        {

            if(verticelist)
            {
                std::cout << "Edge list for: " << std::endl;
                    verticelist[i].decisionData->display();
            }
            //issue: I don't see nodes being added in each case
            //print every item of the edge list EXCEPT for head
            if(verticelist->decisionData)
            {
                //this unfortunately isn't the actual edge. it's just head's data rn 
                    std::cout << "edge : " << verticelist->decisionData->display() << std::endl;
            }

            verticelist->head = verticelist->head->next; //traverse
        }
    }    
    return 1;
}
