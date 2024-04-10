#pragma once 
#include <iostream>

class Node{
    public:
    int data;
    Node* next;

    Node(){}
    Node(int a):data(a),next(NULL){}
    Node(int a , Node * next_):data(a),next(next_){}
};

class Linked_list{
    Node a;
    public:
    bool add(int data);
    bool addToHead(int data);
    bool addToTail(int data);

    bool remove(int data);
    bool removeFromHead(int &data);
    bool removeFromTail(int &data);
};