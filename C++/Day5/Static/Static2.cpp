/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
using namespace std;

class StaticExample
{
	private:
		static int a;
		static const int b = 100; 
		static const float c;
		static const int   d[ ];
		static const float e[ ];
		static const char  f[ ];
	public:
		void GetVal( );
		
};

int StaticExample::a;
const float StaticExample::c = 5.5 ;
const int StaticExample::d[ ] = { 1, 3, 4, 5, 6 };
const float StaticExample::e[ ] = { 1.1, 3.1, 4.1, 5.1, 6.1 };
const char StaticExample::f[ ] = { 'A', 'B', 'C', 'D', 'E' };


void StaticExample :: GetVal( )
{
	cout << "a = " << a << endl;
	cout << "c = " << c << endl;
	for( int i = 0; i < 5; i++ )
	{
		cout << "d[" << i << "] = " << d[i] << " e[" << i << "] = " << e[i] << " f[" << i << "] = " << f[i] << endl;
	}
	cout << endl;
}


int main( )
{
	StaticExample Se1;
	Se1.GetVal( );	
	
	return 0;
}
