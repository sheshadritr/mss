/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>

using namespace std;

class Increment
{
	private:
		int a;
		int b;
	public:
		Increment( )
		{
	
		}

		Increment( int x, int y)	
		{
			a = x;
			b = y;
		}

		Increment operator ++  ( )
		{
			return Increment( ++a, ++b );
		}	


		Increment operator ++  (int)
		{
			return Increment( a++, b++ );
		}

		void Display( )
		{
			cout << "a = " << a << " b = " << b << endl;
		}
};


int main( )
{
	Increment Inc1(5, 6);
	Increment Inc2;
	Increment Inc3;

	Inc2 = ++Inc1;
	Inc3 = Inc1++;

	Inc1.Display( );	
	Inc2.Display( );	
	Inc3.Display( );	

	return 0;
}
