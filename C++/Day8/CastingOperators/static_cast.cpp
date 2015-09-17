/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */


/* static_cast operator converts between related types */

#include <iostream>

using namespace std;


void func( int ) 
{
}

int main( )
{
	int i = 32767;
	long l;
	float f;

	l = i;
	f = i;

	l = static_cast <long> (i);
	f = static_cast <float> (i);

	i = l;
	i = f;

	i = static_cast <int> (l);
	i = static_cast <int> (f);
	char c = static_cast <char> (i);

	void *vp = &i;
	float *fp = (float *)vp;
	fp = static_cast <float *> (vp);

	double d = 0.0;
	int x = d;
	x = static_cast <int> (d);
	func(d);
	func( static_cast <int> (d));

	return 0;
}
