/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */


#include <iostream>

using namespace std;

class A
{
	public:
		virtual void display( )
		{
			cout << "Subhash" << endl;
		}
};

class B : public A
{
	public:
		void display( )
		{
			cout << "MindSculptor Systems" << endl;
		}
};
class C : public A
{
	public:
		void display( )
		{
			cout << "TeachGuru Foundation" << endl;
		}
};

int main( )
{
	A *aptr;
	B b1, *bptr;
	cout << bptr << endl;
	C c1;
	aptr = &c1;
	aptr->display( );
	bptr = dynamic_cast <B *> (aptr);
	if( bptr == NULL )
	{
		cout << "Invalid" << endl;
	}
	else
	{
		bptr->display( );
	}

	return 0;
}
