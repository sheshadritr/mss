/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

/* DEMONSTRATES OBJECT SLICING */

#include <iostream>

using namespace std;

class Base
{
	public:
		int x, y;
};

class Child : public Base
{	
	public:
		int z;
};

int main( )
{
	Base b;
	Child c;
	b.x = 10;
	b.y = 20;
	cout << "b.x = " << b.x << " b.y = " << b.y << endl;
	c.x = 30;
	c.y = 40;
	c.z = 50;
	cout << "c.x = " << c.x << " c.y = " << c.y <<" c.z = " << c.z << endl;
	b = c; // Object is getting sliced 
	cout << "b.x = " << b.x << " b.y = " << b.y << endl;
	
}
