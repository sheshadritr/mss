/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

/* NOTE: THIS CODE IS DUE TO PROF.BJARNE STROUSTRUP FROM THE BOOK "THE C++ PROGRAMMING LANGUAGE 2nd EDITION" */

#include <iostream>
using namespace std;


namespace X 
{
    int i, j, k;
}

int k;
void f1() throw()
{
	int i = 0;
    	using namespace X;  // make names from X accessible
  	i++;       // local i
  	j++;       // X::j
  	k++;       // Error: Ambiguity: Global k or X::k ???
  	::k++;     // Global k
  	X::k++;    // X::k
}

void f2() throw()
{
  	int i = 0;
  	using X::i; // Error: i declared twice in f2()
  	using X::j;
  	using X::k; // Hides Global k
	i++;
	j++; // X::j
	k++; // X::k 
}
