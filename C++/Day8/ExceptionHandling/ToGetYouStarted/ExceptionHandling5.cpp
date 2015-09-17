/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */
#include <iostream>

using namespace std;

void check(int) throw ( int );

int main( )
{
	cout << "I am in main" << endl;
	
	check(1);
	try
	{
		check(2);
	}
	catch( ... )
	{
		cout << "Catchy......" << endl;
	}
	check(3);

	return 0;	
}

void check( int r ) throw( int )
{
		if( r == 1 )
			throw 5;
		if( r == 2 )
			throw 5.5;
		if( r == 3 )
			throw 'x';
	
}
