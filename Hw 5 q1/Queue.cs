using System;
//same as java and C++ code				
public class Node
{
	//data 
	public Node next;
	public String[] characterNames = new String[10];
	
	//constructor
	public Node(String[] s)
	{
		characterNames = s;
	}
	
	
}
public class queue
{
	public Node head;
	public Node tail;
	
	//empty queue (constructor)
	public queue()
	{
		head = null;
		tail = null;
	}
	//add element
	public void enequeue(String[] s)
	{
		Node hold = new Node(s);
		
		if(head == null)
		{
			head = hold;
			tail = hold;
		}
		else
		{
			tail.next = hold;
			tail= hold;
		}
		
	}
	//remove element
	public void dequeue()
	{
		if(head != null)
		{
			head = head.next;
		}
	}
	//empty list?
	public void empty()
	{
		head = null;
		tail = null;
	}
}