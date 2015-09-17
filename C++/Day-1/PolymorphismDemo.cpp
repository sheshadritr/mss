/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
using namespace std;

void DisplayData(int);
void DisplayData(double);
void DisplayData(char);

int main( )
{
	int x = 5;
	double y = 6.5;
	char z = 'A';

	DisplayData( x );
	DisplayData( y );
	DisplayData( z );

	return 0;
}


void DisplayData( int x )
{
	cout << x << endl;
}
 
void DisplayData( double y )
{
	cout << y << endl;
}

void DisplayData( char  z )
{
	cout << z << endl;
}

