#include "../header/linked_list.h"
#include "../header/Linked_list_stack.h"

int main(){
    int user_input{};
    LinkedStack stack;
    std::cout<<"Enter total input: ";
    std::cin >> user_input;
    try{
    std::cout<<"Popping an empty stack"<<std::endl;
    std::cout<<stack.pop()<<std::endl;}
    catch(const char* a){
        std::cerr<<a<<std::endl;
    }
    for(int i =  0 ; i<user_input;i++){
        stack.push(i+1);
    }
    std::cout<<"\nPeeking top: "<< stack.top();
    std::cout<<"\nRemoving top: "<< stack.pop();
    std::cout<<"\nTop after removal: "<<stack.top();
    stack.clear();

    try{
    std::cout<<"\nPOP after clearing all data:"<<std::endl;
    std::cout<<stack.pop()<<std::endl;}
    catch(const char* a){
        std::cerr<<a<<std::endl;
    }
    try{
    std::cout<<"\nTOP after clearing all data:"<<std::endl;
    std::cout<<stack.top()<<std::endl;}
    catch(const char* a){
        std::cerr<<a<<std::endl;
    }
    return 0;
}