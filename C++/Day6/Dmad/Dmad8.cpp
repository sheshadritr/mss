/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
#include <new>

using namespace std;
const int size = 10;
void CatchHandler( );
int Allocations;
int main( )
{
	set_new_handler(CatchHandler);
	int *Ptr;
	try
	{
		for( int i = 0; i < 100000; i++ )
		{
			Ptr = new int[10000000000];
			++Allocations;
			cout << Ptr << endl;
		}
	}
	catch ( bad_alloc )
	{
		cout << "Baddddy\n";
	}
	return 0;
}

void CatchHandler( )
{
	cout << "I am caught" << endl;
	cout << "Cannot allocate memory after " << Allocations << " allocations\n";
	exit(5);
}
