/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */
#include <iostream>
using namespace std;

class Singleton
{
	private:
		int Data;
		static Singleton *Ptr;
	public:
		static Singleton * GetInstance( )
		{
			
			if( Ptr == NULL )
			{
				Ptr = (Singleton *)malloc(sizeof(Singleton));
			}	
			return Ptr;
		}
};

Singleton * Singleton::Ptr = NULL;

int main( )
{
	Singleton *S1 = Singleton::GetInstance( );
	cout << "S1 = " << S1 << endl;
	Singleton *S2 = Singleton::GetInstance( );
	cout << "S2 = " << S2 << endl;
	Singleton *S3 = Singleton::GetInstance( );
	cout << "S3 = " << S3 << endl;

	return 0;
}




