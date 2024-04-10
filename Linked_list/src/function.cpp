#include "header/linked_list.h"

bool Linked_list::add(int data){

}

bool Linked_list::addToHead(int data){

}

bool Linked_list::addToTail(int data){

}

bool Linked_list::remove(int data){

}

bool Linked_list::removeFromHead(int &data){

}

bool Linked_list::removeFromTail(int &data){

}

bool Linked_list::IsEmpty(){
    return (Head==nullptr && Tail==nullptr);
}

void Linked_list::print(){
    Node *temp = this->Head;
    while(temp->next!=nullptr){
        std::cout<<"data : "<<temp->data<<std::endl;
        temp = temp->next;
    }
}