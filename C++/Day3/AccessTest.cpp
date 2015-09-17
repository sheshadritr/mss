/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */


#include <iostream>
using namespace std;

struct AccessTest 
{
	private:
		int a;
		int b;
	public:
		int c;
		void SetValue( int x )
		{
			a = x;
			b = ++x;
			c = ++x;
		}

		void GetValue( int y )
		{
			cout << "x = " << x << " y = " << y << " z = " << z << endl;
		}
};

int main( )
{

	AccessTest At1, At2 ;
	
	At1.a = 15;
	At1.b = 16;
	At1.c = 17;

	At2.a = 9;
	At2.b = 10;
	At2.c = 11;
	
	At1.Setvalue(2);
	At1.GetValue();	

	At2.SetValue(3);
	At2.GetValue();

	return 0;
		
}

