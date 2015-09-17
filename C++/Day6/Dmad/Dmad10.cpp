/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */
#include <iostream>
#include <cstring>
#include <new>

using namespace std;
const int size = 10;


class Subhash
{
	char String[size];
	public:
		Subhash( )
		{
			cout << "Subhash in Constructor\n";
			memset(String, '+', sizeof(String));
		}

		~Subhash( )
		{
			cout << "Subhash in Destructor\n";
		}
		
		void Display( )
		{
			cout << "Subhash" << endl;
		}
		void * operator new (size_t size)
		{
		//	cout << this << endl; 
			cout << "Size = " << size << endl;
			cout << "Size = " << sizeof(Subhash) << endl;
			return :: operator new (size);
		}
		void operator delete ( void *Ptr, size_t size )
		{
			cout << "Size = " << size << endl;
			cout << "Size = " << sizeof(Subhash) << endl;
			::operator delete(Ptr);
		}
};

int main( )
{
	Subhash *Ptr = new Subhash;
	Ptr->Display( );
	delete Ptr;
}
