//Project 5
#include "graph.h"
#include <iostream>
using namespace std;

int createVertex(vlist & graph);
int createEdges(vlist & graph);
int main()
{
    vlist graph;
    createVertex(graph);
    graph.displayVertices();
    createEdges(graph);
    graph.displayEdges();

    return 1;
}

int createEdges(vlist & graph)
{
    cout << "create an edge from a node to another (1 directional" << endl;

    cout << "Specify the origin: " << endl;
    char first[20]; //it comes from 
    char second[20]; //it points to 
    cin.get(first, 100, '\n');
    cin.ignore(100, '\n');

    cout << "Specify the destination for " << first << endl;
    cin.get(second, 100, '\n');
    cin.ignore(100, '\n');

    graph.createEdges(first, second);

    return 1;
}

int createVertex(vlist & graph)
{
    bool done = false;
    do
    {
    cout << "create a new vertex (decision)" << endl;
    char choice[20]; 
    cin.get(choice, 100, '\n'); 
    cin.ignore(100, '\n'); cout << endl;
    
    decision * newDecision = new decision(choice);
    //put this decision into the next piece
    vertex * newVertex = new vertex(newDecision);
    graph.addVertex(newVertex);

    //clean this menu up
    cout << "Create another vertex? (you need 2 min to have edges) y/n" << endl;
    char res;
    cin >> res;
    cin.ignore(100, '\n');
    if(res == 'n')
    {
        done = true;
    }

    }
    while(done == false);

    return 1;
}
