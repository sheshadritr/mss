/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>

using namespace std;

class UnaryMinus
{
	private:
		int a;
		int b;
	public:
		UnaryMinus( )
		{
	
		}

		UnaryMinus( int x, int y)	
		{
			a = x;
			b = y;
		}


		friend UnaryMinus operator - ( UnaryMinus & );

		void Display( )
		{
			cout << "a = " << a << " b = " << b << endl;
		}
};

UnaryMinus operator - ( UnaryMinus &Data )
{
	return UnaryMinus( -(Data.a), -(Data.b) );
}

int main( )
{
	UnaryMinus Um1(5, 6);
	UnaryMinus Um2;

	Um2 = -Um1;

	Um1.Display( );	
	Um2.Display( );	

	return 0;
}
