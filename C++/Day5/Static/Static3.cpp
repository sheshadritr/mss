/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
using namespace std;

class MemberObjects
{
	public:
		MemberObjects( )
		{
			cout << "Constructor called for MemberObject" << endl;
		}
		~MemberObjects( )
		{
			cout << "Destructor called for MemberObject" << endl;
		}
};


class StaticExample
{
	private:
		static MemberObjects Me0;
		static const MemberObjects Me1;
		static const MemberObjects Me2[ ];
	public:
		
	
};

MemberObjects StaticExample::Me0;
const MemberObjects StaticExample::Me1 = { MemberObjects( ) };
const MemberObjects StaticExample::Me2[ ] = { MemberObjects( ), MemberObjects( ), MemberObjects( ) };

int main( )
{
	StaticExample Se;	
} 
