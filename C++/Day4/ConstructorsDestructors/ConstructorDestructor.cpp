/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
using namespace std;

class Example 
{
	private:
		int Data;
	public:
		Example( int );
		~Example( );
};
Example :: Example( int x )
{
	cout << "Constructor " << x << " Called\n";
	Data = x;	
}

Example :: ~Example( )
{
	cout << "Destructor " << Data << " Called\n";
}

int main( )
{
	Example e1(1);
	Example e2(2);
	{
		Example e3(3);
		Example e4(4);
	}	
	Example e5(5);
	Example e6(6);
	{
		Example e7(7);
	}
	Example e8(8);
	Example e9(9);

	return 0;
}

