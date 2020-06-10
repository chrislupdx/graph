//This is the implementation of the .h file of 
//my graph class, the underlying data structure is a
//flexible list (an array of linear linked lists) 
//comprised of nodes. This is an adjacency list.
#include "decision.h"

struct vertex
{
    vertex * next; //for contiuity?
    decision * decisionData; //our bsnssdata
    struct node * head; //this is our edgelist
};

struct node
{
    vertex * avertex;
    node * next;
};

class table
{
    public:
        table(int size = 10); //a table of 10 vertices
        ~table();
        
        //int createDecision(decision * decision_toadd);

        int addVertex(vertex * vertex_toadd);
        
        
        //connectVertices(takes two) //order matters, this is assymetrical connection 
        //displayAll (print each of the vertices)
        //displayAdjavent (given a vertex, display its edge list)

    private:
        //int addVertex(vertex *& vlist, decision * decision_toadd);
        vertex * verticelist;  
        int list_size;
};
