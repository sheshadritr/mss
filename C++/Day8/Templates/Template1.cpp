/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */


#include <iostream>


using namespace std;

int absolute( int n )
{
	return (n < 0) ? (-n) : (n);
}

float absolute( float n )
{
	return (n < 0) ? (-n) : (n);
}

long absolute( long int n )
{
	return (n < 0) ? (-n) : (n);
}

int main( )
{
	int i1 = 10;
	int i2 = -10;
	
	float f1 = 2.3;
	float f2 = -2.3;

	long int l1 = 5.6;
	long int l2 = -5.6;

	cout << "absolute(" << i1 << ")  = " << absolute(i1) << endl;
	cout << "absolute(" << i2 << ")  = " << absolute(i2) << endl;

	cout << "absolute(" << f1 << ") = " << absolute(f1) << endl;
	cout << "absolute(" << f2 << ") = " << absolute(f2) << endl;

	cout << "absolute(" << l1 << ") = " << absolute(l1) << endl;
	cout << "absolute(" << l2 << ") = " << absolute(l2) << endl;
}

