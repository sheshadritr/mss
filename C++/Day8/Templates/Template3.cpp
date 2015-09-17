/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */


#include <iostream>


using namespace std;

template <class T>
T  search( T * Ptr, T item, int size )
{
	for(int i = 0; i < size; i++ )
	{
		if( Ptr[i] == item )
			return i + 1;
		else
			return 0;
	}
}

int main( )
{
	char ch;
	int in;
	double dou;
	int Found;
	char chArray[ ] = { 's', 'u', 'b', 'h', 'a', 's', 'h', '\0' };
	int inArray[ ] = { 5, 3, 2, 1, 9, 4, 6, 0 };
	double doArray[ ] = { 1.2, 2.1, 3.4, 5.5, 6.4, 6.6, 7.8, 2.2 };

	cout << "Enter a character to search\n";
	cin >> ch;

	if( Found = search( chArray, ch, 8 ) )
	{
		cout << "Character found at position " <<  Found << endl;
	}
	else
	{
		cout <<  "Character not Found\n" ;
	}

	cout << "Enter an integer to search\n";
	cin >> in;


	if( Found = search( inArray, in, 8 ) )
	{
		cout << "Character found at position " << Found << endl;
	}
	else
	{
		cout << "Character not found\n";
	}

	cout << "Enter a double to search\n";
	cin >> dou;

	if( Found = search( doArray, dou, 8 ) )
	{
		cout << "Character found at position " << Found << endl;
	}
	else
	{
		cout << "Character not found" << endl;
	}
}

