#include <iostream>

using namespace std;
//node to hold attrabiutes
struct Node<Type T>
{
    T data;
    Node *next;

};
//actual queue with template
class queue<Type T>
{
    public:
        Node *head, *tail;
        queue()
        {
            head = nullptr;
            tail = nullptr;

        }
		//prototypes
        void enqueue(Type T);
        void dequeue();
        void empty();

};

///add tempalte type
void queue::enqueue(T d)
{
	//create temp item to hold data to add to queue
    Node *hold = new Node;
    hold ->data = d;
    hold->next = nullptr;

	//if already empty
    if(head == nullptr)
    {
       head = hold;
       tail = hold;

    }
    else
    {
        tail->next =hold;
        tail = hold;
    }

}
//remoove  elements
void queue::dequeue()
{
    if(head != nullptr)
    {
        if(head == tail)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            head = head ->next;

        }
    }

}
//not sure if empty is meant to make queue empty or is meant to be an isEmpty function
void queue::empty()
{
    head = nullptr;
    tail = nullptr;
}

