/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include "Operator+CompoundOperator.h"
int main( )
{
	Number N1(5,6);
	Number N2(1,2);
	Number N3(3,4);
	cout << "Adding two Number obects...\n" << endl;

	N3 += (N1 + N2);
	
	cout << "Value of N1:\n";
	N1.ShowVal( );
	cout << "Value of N2:\n";
	N2.ShowVal( );
	cout << "Value of N3:\n";
	N3.ShowVal( );

	return 0;
	
}
