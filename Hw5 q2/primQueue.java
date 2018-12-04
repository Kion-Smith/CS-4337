class Node<T>
{
	//10 character names
	public T data;
	public Node next; //refrence to last node
	
	//default constructor
	public Node()
	{
		
	}
	
	//overloaded constructor
	public Node(T d)
	{

		data = d;
	
	}
}

public class primQueue<T> 
{
	
	
	private Node head;
	private Node tail;
	
	//default constructor
	public primQueue()
	{
		head = null;
		tail = null;
	}
	
	
	
	//not sure if this is meant to empty the queue or do somthing elese, this is emptying queue
	public void empty()
	{
		head = null;
		tail = null;
	}
	
	public void enqueue(T data)
	{
		Node hold = new Node(data);
		//if empty head is the node
		if(head == null)
		{
			head = hold;
		}
		else
		{	//link prev tail to node
			tail.next = hold;
		}
		//set the tail to current node
		tail = hold;
	}
	
	public void dequeue()
	{
		//if empty do nothing
		if(head != null)
		{
			//if tail is equal to head, tail == null
			if(tail == head)
			{
				tail = null;
			}
			//remove head by pointing to next element of head
			else if(head.next != null)
			{
				head = head.next;
			}
		}
	}
}
