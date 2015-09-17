/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
using namespace std;

class Y;
	
class X
{
	private:
		int Data;
	public:
		void SetVal(int x)
		{
			Data = x;
		}
//		friend void GetVal( X &, Y &);
};

class Y
{
	private:
		int Data;
	public:
		void SetVal( int y )
		{
			Data = y;
		}	
//		friend void GetVal( X &, Y &);
};

void GetVal( X &x , Y &y )
{
	cout << "X's Data = " << x.Data << endl;
	cout << "Y's Data = " << y.Data << endl;
}

int main( )
{
	X x;
	Y y;

	x.SetVal(5);
	y.SetVal(6);

	GetVal(x, y);
	
	return 0;
}
