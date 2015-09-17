/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>

using namespace std;

class Base
{
	public:
		void F( )
		{
			cout << "Base::F( )" << endl;
		}
		int F( int x )
		{
			cout << "Base::F(int)" << endl;	
			return 8;
		}
};

class Derived_1 : public Base
{
	public:
		
};

class Derived_2 : public Base
{
	public:
		int F(char *String )
		{
			cout << "Derived_2::F( )" << endl;
			return 9;
		}
};

class Derived_3 : public Base
{
	public:
		void F( )
		{
			cout << "Derived_3::F( )" << endl;
		}
};

class Derived_4 : public Base
{
	public:
		void F( int x )
		{
			cout << "Derived_4::F( )" << endl;
		}
};

int main( )
{
	Base b;
	b.F( );
	int x = b.F(5);	
	cout << x << endl;
		
	Derived_1 d1;
	d1.F( );
	int y = d1.F(5);
	cout << y << endl;

/*	Derived_2 d2;
	d2.F( ); */

	Derived_3 d3;
	d3.F( );
	
	Derived_4 d4;
//	d4.F( );
	d4.F(5);
}
