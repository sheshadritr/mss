/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */


#include <iostream>
#include <typeinfo>

using namespace std;

int main( )
{
	char w;
	int x;
	float y;
	double z;
	
	class A 
	{      
	};
	class B 
	{      
	};

	A a1;
	B b1;
	
	class Base
	{
		public:
			virtual void Display( )
			{
				//Code goes here
			}   
	};
	class Derived:public Base 
	{ 
		public:
			void Display( )
			{
				// Code goes here
			}
	};

	Base B;
	Base *Bptr;
	Derived D;
	Derived *Dptr;
	
	class Parent
	{
		public:
			void Display( )
			{
				//Code goes here
			}   
	};
	class Child:public Parent 
	{ 
		public:
			void Display( )
			{
				// Code goes here
			}
	};

	Parent P;
	Parent *Pptr;
	Child C;
	Child *Cptr;

	const char *type_of_object;

	type_of_object = typeid(w).name( );
	cout << type_of_object << endl;

	type_of_object = typeid(x).name( );
	cout << type_of_object << endl;

	type_of_object = typeid(y).name( );
	cout << type_of_object << endl;

	type_of_object = typeid(z).name( );
	cout << type_of_object << endl;

	if( typeid(x) == typeid(y) )
	{
		cout << "Both are of same type" << endl;
	}
	else
	{
		cout << "Both are of different type" << endl;
	}

	if( typeid(x) != typeid(1) )
	{
		cout << "Not of integer type" << endl;
	}
	else
	{
		cout << "Of Integer type" << endl;
	}
		
	
	cout << typeid(a1).name( ) << endl;
	cout << typeid(b1).name( ) << endl;

	Bptr = &B;
	cout << typeid(*Bptr).name( ) << endl;

	Dptr = &D;
	cout << typeid(*Dptr).name( ) << endl;

	Bptr = &D;
	cout << typeid(*Bptr).name( ) << endl;

	if( typeid(*Bptr) == typeid(D))
	{
		cout << "True" << endl;
	}	
	else
	{
		cout << "False" << endl;
	}

	if( typeid(Bptr) == typeid(Base *))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	
	Pptr = &C;
	cout << typeid(*Pptr).name( ) << endl;

	return 0;
}


