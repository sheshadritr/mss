/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>

using namespace std;

class AddressOf
{
	private:
		int a;
		int b;
	public:
		AddressOf *GiveThis( )
		{
			return this;
		}
		AddressOf( )
		{
	
		}

		AddressOf( int x, int y)	
		{
			a = x;
			b = y;
		}

		friend AddressOf * operator & (AddressOf &);

		void Display( )
		{
			cout << "a = " << a << " b = " << b << endl;
		}
};

AddressOf * operator & (AddressOf &Ao)
{
	cout << "I am here\n" ;
	return 	Ao.GiveThis();
}


int main( )
{
	AddressOf Ao(5,6);
	AddressOf *Ptr = &Ao;


	Ptr->Display( );	

	return 0;
}
