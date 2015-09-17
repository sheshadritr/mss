/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */
#include <iostream>

using namespace std;

int main( )
{
	int i = 5, j = 2, c;
	try
	{
		if( j != 0 )
		{
			c = i / j;
			cout << "C = " << c << endl;
		}
		else
		{
			throw j;
		}
	}
	catch( int x )
	{
		cout << "CAUGHT with " << x << endl;
		cout << "CANNOT DIVIDE BY ZERO" << endl;
	}
	cout << "PERFECT PRACTICE MAKES MAN AND WOMAN PERFECT" << endl;
	return 0;
}
