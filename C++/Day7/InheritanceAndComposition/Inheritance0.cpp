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
	private:
		int x;
	public:
		int y;
	protected:
		int z;
};

class B : public A
{
	public:
		void func1( )
		{
			x = 1;
			z = 2;
			y = 3;
		}
};

class C : public B
{
	public:
		void func2( )
		{
			x = 1;
			y = 2;
			z = 3;
		}
};

int abc( B &b1 )
{
	b1.x = 20;
	b1.y = 30;
	b1.z = 30;
}

int main( )
{
	A a1;
	B b1;
	C c1;

	b1.func1( );
	c1.func2( );
	abc(b1);

	return 0;
}
