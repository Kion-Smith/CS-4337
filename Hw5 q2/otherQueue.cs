using System;
//Same as Java and C++

//using generic type t					
public class Node<T>
{
	//node attribuites
	public Node<T> next;
	public T data;
	
	//default constructor
	public Node()
	{
		
	}
	//add data to node
	public Node(T d)
	{
		data = d;
	}
	
	
}
//generic queue (same as java and c++)
public class queue<T>
{
	public Node<T> head;
	public Node<T> tail;
	
	public queue()
	{
		head = null;
		tail = null;
	}
	//add element (generic type t)
	public void enequeue(T d)
	{
		//create the genreic node to hold datta
		Node<T> hold = new Node<T>(d);
		//if empty
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
	//remove element (generic type t)
	public void dequeue()
	{
		if(head != null)
		{
			head = head.next;
		}
	}
	
	public void empty()
	{
		head = null;
		tail = null;
	}
}