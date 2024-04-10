#include "header/linked_list.h"

bool Linked_list::add(int index,int data){

}

bool Linked_list::addToHead(int data){
    
    if(this->IsEmpty()){
        Node * temp = new Node;
        temp->data = data;
        temp->next = nullptr;
        Head = temp;
        Tail = temp;
        std::cout<<"Sucess"<<std::endl;
        return true;
    }
    else{
        Node * temp = new Node;
        temp->data = data;
        temp->next = Head;
        Head = temp;
        std::cout<<"Sucess"<<std::endl;
        return true;
    }
    return false;
}

bool Linked_list::addToTail(int data){
    if(this->IsEmpty()){
        Node * temp = new Node;
        temp->data = data;
        temp->next = nullptr;
        Head = temp;
        Tail = temp;
        std::cout<<"Sucess"<<std::endl;
        return true;
    }
    else{
        Node * temp = new Node;
        temp->data = data;
        temp->next = nullptr;
        Tail->next = temp ;
        Tail = temp;
        std::cout<<"Success"<<std::endl;
        return true;
    }
    return false;
}

bool Linked_list::remove(int data){
    
}

bool Linked_list::removeFromHead(int &data){
    Node * temp = Head;
    Head =  Head->next;
    data = temp->data;
    try{
   delete temp;
   }catch(std::exception &e){
    std::cout<<e.what()<<std::endl;
    return false;
   } 
   return true; 
}

bool Linked_list::removeFromTail(int &data){
    Node * temp = Head;
    data = Tail->data;
    while(temp->next!=nullptr){
        temp = temp -> next;
    }
    temp->next = nullptr;
    try{
        delete Tail;
    }
    catch(std::exception &e){
    std::cout<<e.what()<<std::endl;
    return false;
   }
   Tail = temp;
   return true;
}

bool Linked_list::IsEmpty(){
    return (Head==nullptr && Tail==nullptr);
}

void Linked_list::print(){
    Node *temp = this->Head;
    while(temp!=nullptr){
        std::cout<<"data : "<<temp->data<<std::endl;
        temp = temp->next;
    }
}