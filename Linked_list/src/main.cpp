#include "..\header\linked_list.h"

int main()
{
    int data{};
    Linked_list List;
    List.addToHead(1);
    for (int i = 2; i < 10; i++)
    {
        List.addToTail(i);
    }
    List.print();

    List.remove(5);

    List.removeFromHead(data);
    std::cout << "Data: " << data << std::endl;
    List.print();
    List.~Linked_list();
    List.print();
    return 0;
}