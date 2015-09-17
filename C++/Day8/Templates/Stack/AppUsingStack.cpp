/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include "Stack.h"

int main( )
{
	Stack <float> s1;

	s1.Push( 4.5 );
	s1.Push( 3.5 );
	cout << " Popping..." << s1.Pop( ) << endl;
	cout << " Popping..." << s1.Pop( ) << endl;

	Stack <int> s2;

	s2.Push( 8 );
	s2.Push( 9 );
	cout << " Popping..." << s2.Pop( ) << endl;
	cout << " Popping..." << s2.Pop( ) << endl;
	return 0;
}

