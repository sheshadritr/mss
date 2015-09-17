/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */


/* NOTE: Please refer section 7.4 of "The C++ Programming Language - Bjarne Stroustrup" to understand overload resolution principle 

1. Exact match
2. Integral promotions match like char to int, int to long, short to int etc.
3. Standard conversions like int to double, double to int, double to long, Derived * to Base * etc.
4. Match using user-defined conversions
5. Match using ellipsis ( . . . )

*/

#include <iostream>
using namespace std;

void Display( int );
void Display( double );
void Display( char );

int main( )
{
	char c = 'A';
	int i = 5;
	double d = 5.5;

	Display(c);
	Display(i);
	Display(d);	

	return 0;
}

void Display( int x )
{
	cout << x << endl;
}

void Display( double y )
{
	cout << y << endl;
}

void Display( char z )
{
	cout << z << endl;
}

