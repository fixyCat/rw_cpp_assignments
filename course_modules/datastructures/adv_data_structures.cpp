#include <iostream>
#include <string>

// Struct walkthrough
struct Dummy
{
    int val = -1;
};


// enum walkthrough
enum Level
{
    LOW,
    MEDIUM,
    HIGH
};

// Linked Lists
// Singly linked list
struct SLL_Node
{
    std::string val;
    SLL_Node *next;

    SLL_Node(std::string val) : val(val), next(nullptr) {}
};

void print_sll(SLL_Node *head)
{
    if (head)
    {
        std::cout << head->val << " ";
        print_sll(head->next);
    }
}

int main()
{
    //Level level = HIGH;
    //std::cout << level << std::endl;

    SLL_Node head = SLL_Node("Hello");
    SLL_Node middle = SLL_Node("World");
    SLL_Node tail = SLL_Node("!");
    head.next = &middle;
    head.next->next = &tail;

    print_sll(&head);

    return 0;
}
