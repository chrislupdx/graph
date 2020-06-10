//This is the implemntation of the .cpp file //of the graph class. the underlying data structure
//is a flexible list.
#include "graph.h"
//default constructor for table
table::table(int size)
{
    list_size = size;
    for(int i = 0; i< list_size; i++)
    {
        vlist[i].decisionData = NULL;
        vlist[i].head = NULL;    
    }
}

//this is the recursive call
//int table::addVertex(nodex*& vlist, decision * decision_toadd)
//{
//    if(!vlist) return 0; //if !root
//    //im pretty sure with insretion we need to create the first item:
//
//    //recurse to the end of the list
//    add_vertex(vlist->next, decision_toadd);
//
//    //if we find an empty spot out of the limited number
//    if(!vlist.avertex)
//    {
//        //create a new vertex
//        vlist.avertex->head = NULL;
//        vlist.avertex->decisionData = new decision;
//    }
//    return 1;
//}

//creates a vertex and adjacency list
int table::addVertex( vertex * vertex_toadd)
{
    //create the node
    //1. fill the node with data
    //2. who needed the node?
    //3. where do we go from here?h
    
    //1. empty
    //2. one  vertex
    //3. if the array of vertices are full 

    if(!verticelist) //if it's empty
    {
    verticelist = new vertex; //create a new vlist
    verticelist->decisionData = vertex_toadd->decisionData; //load it's header data
    }
    else  //we have at least 1 node
    {
        //positional insert
        //vertex needs to be added (append to head)
        //append to tail?
        
        //edgelists need to be modified
    }
    return 1;
}

//default destructor
table::~table()
{
 list_size = 0;
 vlist = new vertex; //i think?
}

//this is the default constructor for node
node::node()
{
}

//this is the default destructor for nodes
node::~node()
{

}
