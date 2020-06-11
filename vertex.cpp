#include "graph.h" 

vertex::vertex()
{
    head = NULL;
    decisionData = NULL;
}

vertex::vertex(decision * dec_toadd)
{
    head = NULL;
    decisionData = nullptr; //decision is a struct, so I'm thinking about whether this is safe/good
    this->decisionData = dec_toadd;

}

vertex::~vertex()
{
    //de-allocate decisinodata
    //de-allocate edge list
}


