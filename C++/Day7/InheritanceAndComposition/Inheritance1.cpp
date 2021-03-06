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
		Base()
		{
			cout << "Base constructor called" << endl;
		}
		~Base( )
		{
			cout << "Base destructor called" << endl;
		}
};


class Derived_1 : public Base
{
	public:
		Derived_1()
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
	public:
		Derived_2( )
		{
			cout << "Derived_2 constructor" << endl;
		} 
		~Derived_2( )
		{
			cout << "Derived_2 destructor" << endl;
		} 
};
class Derived_3 : public Derived_2
{
	public:
		Derived_3( )
		{
			cout << "Derived_3 constructor" << endl;
		} 
		~Derived_3( )
		{
			cout << "Derived_3 destructor" << endl;
		} 
};

int main( )
{
	Derived_2 d2;
}
