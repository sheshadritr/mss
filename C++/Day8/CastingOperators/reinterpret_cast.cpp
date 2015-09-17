/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */


#include <iostream>

using namespace std;

const int size = 100;

struct ABC 
{
	int a[size];
};

void print( ABC *ptr )
{
	for( int i = 0; i < size; i++ )
	{
		cout << ptr->a[i] << ' ';
	}
	cout << endl << "----------------------" << endl;
}

int main( )
{
	ABC obj;
	print( &obj );
	int *xp = reinterpret_cast <int *> ( &obj );
	for( int *i = xp; i < xp + size; i++ )
		*i = 0;
	
	print( reinterpret_cast<ABC *>(xp));

	print( &obj );
}
