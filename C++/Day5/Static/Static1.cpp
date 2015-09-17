/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
using namespace std;

int a = 9;
class StaticExample
{
	private:
		static int a;
		static int b;
		int c;
	public:
		StaticExample( )
		{	
			a++;
			b++;
			c++;
		}
		void GetVal( )
		{
			cout << "a = " << a << " b = " << b << " c = " << c << endl;
		}
};

int StaticExample::a;
int StaticExample::b = a + 1;
int main( )
{
	StaticExample Se1, Se2, Se3;
	
	Se1.GetVal( );
	Se2.GetVal( );
	Se3.GetVal( );
	
	return 0;
}
