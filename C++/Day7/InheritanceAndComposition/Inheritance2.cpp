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
		Base(int)
		{
			cout << "Base constructor called" << endl;
		}
		~Base( )
		{
			cout << "Base destructor called" << endl;
		}
};

class Composite1 
{
	public:
		Composite1(int)
		{
			cout << "Composite1 constructor called" << endl;
		}
		~Composite1( )
		{
			cout << "Composite1 destructor called" << endl;
		}
};

class Composite2 
{
	public:
		Composite2(int)
		{
			cout << "Composite2 constructor called" << endl;
		}
		~Composite2( )
		{
			cout << "Composite2 destructor called" << endl;
		}
};
class Composite3 
{
	public:
		Composite3(int)
		{
			cout << "Composite3 constructor called" << endl;
		}
		~Composite3( )
		{
			cout << "Composite3 destructor called" << endl;
		}
};
class Composite4 
{
	public:
		Composite4(int)
		{
			cout << "Composite4 constructor called" << endl;
		}
		~Composite4( )
		{
			cout << "Composite4 destructor called" << endl;
		}
};

class Derived_1 : public Base
{
		Composite1 c1;
		Composite2 c2;
	public:
		Derived_1(int): c2(1), c1(3), Base(5)
		{
			cout << "Derived_1 constructor" << endl;
		}
		~Derived_1( )
		{
			cout << "Derived_1 destructor" << endl;
		}
	
};

class Derived_2 : public Derived_1
{
		Composite3 c3;
		Composite4 c4;
	public:
		Derived_2( ): c3(2), Derived_1(4), c4(8)
		{
			cout << "Derived_2 constructor" << endl;
		} 
		~Derived_2( )
		{
			cout << "Derived_2 destructor" << endl;
		} 

	
};

int main( )
{
	Derived_2 d2;
}
