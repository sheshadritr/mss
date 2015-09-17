/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
using namespace std;

namespace A
{
    int x = 1;
    int z = 2;
}

namespace B 
{
    int y = 3;
    int z = 4;
}
void CheckThis(int i)
{
	cout << "Working....." << endl;
}
void Example( )
{
	using namespace A; 
	using namespace B;

     //Unqualified x unambiguously resolves to A::x
	CheckThis( x );
     // Unqualified y unambiguously resolves to B::y
	CheckThis( y );
     // The A:: qualifications makes this unambiguous
	CheckThis( A::z );
     // The B:: qualifications makes this unambiguous
	CheckThis( B::z );
     // Confusion and Ambiguity
     //	CheckThis( z );
	
	return 0;
}
int main()
{ 
	Example(); 
	return 0;
}
