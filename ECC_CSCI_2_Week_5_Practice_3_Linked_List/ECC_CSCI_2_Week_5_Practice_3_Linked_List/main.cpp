/*
 Program Name: main.cpp
 Programmer: Moris Gomez
 Date: Saturday 03/14/2024
 Version Control: 1.0
 About: Week 5, CSCI 2, Professor's example.
 Description:
   Create a simple Linked List for practice using Professor's example.
*/

#include <iostream>
using namespace std;

//STEP 1) create class for Node objects:
class Node
{
public:
    int data;
    Node* next; //contains address.
public:
    //default constructor:
    Node()
    {
        data = 0; //assigns 0 when Node object created w/o passing arguments.
        next = NULL; //points to nothing (empty pointer).
    }
    
    //constructor w/ 1 argument:
    Node(int d)
    {
        data = d; //pass a data value.
        next = NULL; //pointer w/ no address.
    }
    
};//end Node class.

int main()
{
//1) create 3 empty Node pointers:
    Node *n; //
    Node *temp; //
    Node *head; //will point to 1st Node.
    
//2) create actual nodes and link them
    n = new Node; //creates the first Node and its address is stored in 'n'
    n->data = 2; //first node assiged data 2
    
    //make the first node a 'head'
    head = n; //head points 1st node now
    temp = n; //temp points to 1st node now
    //head, temp, n all point to 1st node. temp and n are pointers changed for each new Node.
    
    
    n = new Node; //create 2nd Node and assign address of it to 'n'
    n->data = 4; //2nd node will have 4 as data value
    temp->next = n; //temp node (pointing to first node still) will now point to 2nd node. links 1st w/ 2nd.
    temp = n; //temp points to 2nd node
    
    
    n = new Node; //create 3rd node.
    n->data = 8; //value data of 2nd node = 8
    temp->next = n; //temp points to 3rd node // temp and n point to 3rd node.
    n->next = NULL; //3rd points to null.
    
    
 //4) print linked list
    //head:
    cout << "address of head: " << head << endl;
    cout << "data of head: " << head->data << endl;
    cout << "head points to second node address: " << head->next << endl;
    
    //second: pointer to 2nd node stayed in 'temp'
    cout << "address of second node: " << temp << endl;
    cout << "data of second node: " << temp->data << endl;
    cout << "second node points to third node address: " << temp->next << endl;
    
    //second: pointer to 3rd node stayed in 'n'
    cout << "address of third node: " << n << endl;
    cout << "data of third node: " << n->data << endl;
    cout << "third node points to NULL address: " << n->next << endl;
    
    return 0;
}


//NOTE: professor's example makes it more complicated than needed to be. he combines steps 3 and 4 which makes it confusing.
//step 1: create empty pointers.
//step 2: create Nodes
//step 3: assign nodes to corresponding pointers
//step 4: link all noes
//step 5: print
