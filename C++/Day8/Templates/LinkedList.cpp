
/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>

using namespace std;

template<class TYPE>                  
struct Node                          
{
	TYPE data;             
	Node* next;           
};

template<class TYPE> 
class LinkedList      
{
	private:
   		Node<TYPE>* first;
	public:
   		LinkedList()
      		{
			first = NULL; 
		}
      		void additem(TYPE d); 
      		void display();     
};

template<class TYPE>
void LinkedList<TYPE>::additem(TYPE d) 
{
	Node<TYPE>* newlink = new Node<TYPE>;  
	newlink->data = d;
	newlink->next = first;
	first = newlink;
}
template<class TYPE>
void LinkedList<TYPE>::display()
{
	Node<TYPE>* current = first;
	while( current != NULL )
      	{
      		cout << endl << current->data; 
      		current = current->next;      
      	}
}

int main()
{
	LinkedList<double> ld; 
	ld.additem(11.5);   
	ld.additem(22.6);
	ld.additem(33.7);
	ld.display();      

	LinkedList<char> lch;
	lch.additem('a');
	lch.additem('b');
	lch.additem('c');
	lch.display();
	cout << endl;

	return 0;
}
