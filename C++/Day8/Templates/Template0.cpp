/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main( )
{
	int i1 = 10;
	int i2 = -10;
	
	float f1 = 2.3;
	float f2 = -2.3;

	long l1 = 5.6;
	long l2 = -5.6;

	cout << "abs(" << i1 << ")  = " << abs(i1) << endl;
	cout << "abs(" << i2 << ")  = " << abs(i2) << endl;

	cout << "fabs(" << f1 << ") = " << fabs(f1) << endl;
	cout << "fabs(" << f2 << ") = " << fabs(f2) << endl;

	cout << "labs(" << l1 << ") = " << labs(l1) << endl;
	cout << "labs(" << l2 << ") = " << labs(l2) << endl;
}

