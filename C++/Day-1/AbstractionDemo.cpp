/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
#include <list>

using namespace std;

void show( list <int> & );

int main( )
{
	list <int> l;
	cout << "The size of the list initially is = " << l.size( ) << endl;

	cout << "Enter 5 elements into the list from back" << endl;
	for( int i = 0; i < 5; i++ )
	{
		int x;
		cin >> x;
		l.push_back(x);
	}
	cout << "The elements are..." << endl;
	show(l);
	cout << "The size of the list after inserting from back is = " << l.size( ) << endl;

	cout << endl;

	cout << "Enter 5 elements into the list from front" << endl;
	for( int i = 0; i < 5; i++ )
	{
		int x;
		cin >> x;
		l.push_front(x);
	}
	cout << "The elements are..." << endl;
	show(l);
	
	cout << "The size of the list after inserting from front is = " << l.size( ) << endl;

	cout << endl;

	cout << "Deleting from back..." << endl;
	l.pop_back( );
	cout << "The elements are..." << endl;
	show(l);
	
	cout << endl;

	cout << "Deleting from front..." << endl;
	l.pop_front( );
	cout << "The elements are..." << endl;
	show(l);

	return 0;	
	
}
 
void show( list <int> &l )
{
	list <int> :: iterator p;
	
	for( p = l.begin( ); p != l.end( ); ++p )
	{
		cout << *p << " ";
	}
	cout << "\n" << endl;
}
