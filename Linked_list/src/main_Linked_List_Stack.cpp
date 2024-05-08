#include "../header/linked_list.h"
#include "../header/Linked_list_stack.h"

int main(){
    int user_input{};
    LinkedStack stack;
    do
    {
        std::cout << "Enter number of data: ";
        std::cin >> user_input;

        if (!std::cin.fail())
        {
            break;
        }
        else if (user_input < 0)
        {
            std::cout << "Please enter a positive number" << std::endl;
        }
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    } while (true);
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