/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>

using namespace std;

class BinaryPlus
{
	private:
		int a;
		int b;
	public:
		BinaryPlus( )
		{
	
		}

		BinaryPlus( int x, int y)	
		{
			a = x;
			b = y;
		}


		BinaryPlus operator + (BinaryPlus &Data )
		{
			return BinaryPlus( a + (Data.a), b + (Data.b) );
		}
		
		void operator = ( const BinaryPlus &Data )
		{
			cout << "Overloaded Assignment Operator\n";
			this->a = Data.a;
			this->b = Data.b;	
		}
		void Display( )
		{
			cout << "a = " << a << " b = " << b << endl;
		}

};


int main( )
{
	BinaryPlus Bm1(5, 6);
	BinaryPlus Bm2(1, 2);
	BinaryPlus Bm3;

	Bm3 = Bm1 + Bm2;	

	Bm1.Display( );	
	Bm2.Display( );	
	Bm3.Display( );	

	return 0;
}
