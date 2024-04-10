#include "..\header\linked_list.h"

// this is a simple implementation of a basic linked list

// this function adds to the provided index if the index exists otherwise adds to tail or head as necessary
bool Linked_list::add(int index, int data)
{
    if (this->IsEmpty()) // Checking if list is empty
    {
        std::cout << "The list is empty and added at head" << std::endl;
        addToHead(data);
    }
    Node *temp = Head;
    int i = 0;
    while (temp != nullptr) // a loop for traversing the list
    {
        if (i == index)
        {
            Node *temp = new Node;
            temp->data = data;
            temp->next = Head;
            Head = temp;
            std::cout << "Sucess" << std::endl;
            return true;
        }
        temp = temp->next;
    }
    std::cout << "The list only goes up to " << i << " therefore added at tail" << std::endl;
    if (addToTail(data))
    {
        return true;
    }
    std::cout << "Failed to add" << std::endl;
    return false;
}

bool Linked_list::addToHead(int data)
{

    if (this->IsEmpty())
    {
        Node *temp = new Node;
        temp->data = data;
        temp->next = nullptr;
        Head = temp;
        Tail = temp;
        std::cout << "Sucess" << std::endl;
        return true;
    }
    else
    {
        Node *temp = new Node;
        temp->data = data;
        temp->next = Head;
        Head = temp;
        std::cout << "Sucess" << std::endl;
        return true;
    }
    return false;
}

bool Linked_list::addToTail(int data)
{
    if (this->IsEmpty())
    {
        Node *temp = new Node;
        temp->data = data;
        temp->next = nullptr;
        Head = temp;
        Tail = temp;
        std::cout << "Sucess" << std::endl;
        return true;
    }
    else
    {
        Node *temp = new Node;
        temp->data = data;
        temp->next = nullptr;
        Tail->next = temp;
        Tail = temp;
        std::cout << "Success" << std::endl;
        return true;
    }
    return false;
}

bool Linked_list::remove(int data)
{
    Node *temp = Head;
    if (!this->IsEmpty())
    {
        while (temp != nullptr && temp->next->data != data)
        {
            temp = temp->next;
        }
        if (nullptr != temp)
        {
            Node *node_to_delete = temp->next;
            temp->next = node_to_delete->next;
            try
            {
                delete node_to_delete;
                return true;
            }
            catch (std::exception &e)
            {
                std::cerr << e.what() << std::endl;
                return false;
            }
        }
    }
    else
    {
        std::cout << "The list is empty" << std::endl;
        return false;
    }
    std::cout << "There is no such data " << std::endl;
    return false;
}

bool Linked_list::removeFromHead(int &data)
{
    if (!this->IsEmpty())
    {
        Node *temp = Head;
        Head = Head->next;
        data = temp->data;
        if (Head == nullptr)
        {
            Tail = nullptr;
        }
        try
        {
            delete temp;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
            return false;
        }
        return true;
    }
    return false;
}

bool Linked_list::removeFromTail(int &data)
{
    if (!this->IsEmpty())
    {
        Node *temp = Head;
        Node *node_to_delete = Tail;
        data = Tail->data;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        Tail = temp;
        if (Head == temp)
        {
            Tail = nullptr;
            Head = nullptr;
        }
        else
        {
            temp->next = nullptr;
        }

        try
        {
            delete node_to_delete;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
            return false;
        }

        return true;
    }
    return false;
}

bool Linked_list::IsEmpty()
{
    return (Head == nullptr && Tail == nullptr);
}

void Linked_list::print()
{
    if (this->IsEmpty())
    {
        std::cout << "Empty" << std::endl;
    }
    Node *temp = this->Head;
    while (temp != nullptr)
    {
        std::cout << "data : " << temp->data << std::endl;
        temp = temp->next;
    }
}

Linked_list::~Linked_list()
{
    int data;
    int counter{};
    while (true)
    {
        if (this->IsEmpty())
        {
            break;
        }
        std::cout << counter << std::endl;
        counter++;
        removeFromHead(data);
    }
}