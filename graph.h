//Project 6
//This is the implementation of the .h file of 
//my graph class, the underlying data structure is a
//flexible list (an array of linear linked lists) 
//comprised of nodes. This is an adjacency list.
//these are the nodes to our list of vertices
//Chris Lu
//graph.h

#include "decision.h"

//This is the struct stores the decision and the edgelist for that decision
struct vertex
{
    //default constructor 
    vertex();  

    //parameterized constructor
    vertex(decision * dec_toadd);

    //copies vertex data
    int copyVertex(vertex * vertex_to_copy);

    //prints the edgelist of its vertex
    int printEdges();

    decision * decisionData; //our struct
    struct node * head; //this is our edgelist
};

//these are the nodes to our edgelist
struct node
{
    vertex * avertex; //stores a pointer to a bona fide vertex
    node * next; //points to the next item in the edgelist
};

class vlist
{
    public:
        vlist(int size = 10); //a table of 10 vertices
        ~vlist(); //class destructor

        //adds a one-directional edge from first to second 
        int createEdges(char * first, char * second);

        //displays all vertices
        int displayVertices();

        //displays all edges
        int displayEdges();

        //adds a vertex to the list of vertices
        int addVertex(vertex * vertex_toadd); 

    private:
        //returns the array position of the search key if a match is found
        int findIndex(char * key); 
        
        //removeLLL is called in the class destructor
        int removeLLL(node *& head);

        vertex * verticelist;  
        int list_size;
};
