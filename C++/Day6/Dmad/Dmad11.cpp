/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

/* PLACEMENT NEW OPERATOR */

#include <iostream>
using namespace std;
int main ()
{
   	int *p = new int [10]; //pre-determined memory location
	int i;
   	for(i = 0; i < 10; i++)
        	cout << (p + i) << endl;
   	cout << "...............\n";
   	int *s = new (p) int [5]; // placement new operator
   	for (int i = 0; i < 5; i++)
	{
		s[i] = i;
	}

	for ( int i = 0; i < 5; i++ )
	{	
		cout << (s + i) << " " << *(s + i) << endl;
	}
	return 0; 
}
