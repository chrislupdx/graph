//This is the implementation of the .h file of 
//my graph class, the underlying data structure is a
//flexible list (an array of linear linked lists) 
//comprised of nodes. This is an adjacency list.  #include "decision.h" 
//these are the nodes to our list of vertices
#include "decision.h"

struct vertex
{
    vertex();
    vertex(decision * dec_toadd);
    int copyVertex(vertex * vertex_to_copy);
    ~vertex(); //unfinished

    decision * decisionData; //our bsnssdata
    struct node * head; //this is our edgelist
};

//these are the nodes to our edgelist
struct node
{
    vertex * avertex;
    node * next;
};

class vlist
{
    public:
        vlist(int size = 10); //a table of 10 vertices
        ~vlist();

        int addVertex(vertex * vertex_toadd);
    
        int createEdges(char * first, char * second);
        
        int displayVertices();

        int displayEdges();
        
        //displayAll (print each of the vertices)

        //displayAdjavent (given a vertex, display its edge list)

    private:
        //int addVertex(vertex *& vlist, decision * decision_toadd);
        int findIndex(char * key); 
        vertex * verticelist;  
        int list_size;
};
