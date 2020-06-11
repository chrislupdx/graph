//Project 5
//This is the implentation of the main.cpp file
//Chris Lu
//main.cpp
#include "graph.h"
#include <iostream>
using namespace std;

int createVertex(vlist & graph); //This is the helper function that stores outgoing user interaction and calls the class functions
int createEdges(vlist & graph); //Like the one above, this stores outgoing user interaction and calls the class functions

int main()
{
    vlist graph;
    createVertex(graph);
    graph.displayVertices();
    graph.displayEdges();
    
    createEdges(graph);
    
    return 1;
}

int createEdges(vlist & graph)
{
    bool done = false;
    do
    {
        cout << "Create an edge from a node to another (1 directional):" << endl;

        cout << "Specify the origin: " << endl;
        char first[20]; //it comes from 
        char second[20]; //it points to 
        cin.get(first, 100, '\n');
        cin.ignore(100, '\n');

        cout << "Specify the destination for " << first << ":" << endl;
        cin.get(second, 100, '\n');
        cin.ignore(100, '\n');

        graph.createEdges(first, second);
        std::cout << std::endl; 
        graph.displayEdges();
        
        cout << "Create another edge? y/n" << endl;
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
        vertex * newVertex = new vertex(newDecision);
        graph.addVertex(newVertex); //thinking about this

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
