#include <iostream>

using namespace std;
//node to hold attrabiutes
struct Node
{
    string characterName[10];
    Node *next;

};
//actual queue
class queue
{
    public:
        Node *head, *tail;
		//contstructor
        queue()
        {
            head = nullptr;
            tail = nullptr;

        }

		//prototypes
        void enqueue(String s);
        void dequeue();
        void empty();

};
//same code as java but using pointer
void queue::enqueue(string s[])
{
	//make new ptr to hold data
    Node *hold = new Node;
    hold ->characterName = s;
    hold->next = nullptr;

	//if empty add hold to q
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
//same code as java 
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

