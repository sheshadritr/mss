/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
using namespace std;

int main( )
{
	int Var1 = 15;
	int Var2 = 16;
	int &RefVar1 = Var1;

	
	cout << "Var1  = " << Var1  << " " << "RefVar1  = " << RefVar1  << "\n";
	cout << "&Var1 = " << &Var1 << " " << "&RefVar1 = " << &RefVar1 << "\n";

	Var1++;
	cout << "Var1  = " << Var1  << " " << "RefVar1  = " << RefVar1  << "\n";
 
	RefVar1++;
	cout << "Var1  = " << Var1  << " " << "RefVar1  = " << RefVar1  << "\n";

	RefVar1 = Var2; 
	cout << "Var1  = " << Var1  << " " << "RefVar1  = " << RefVar1  << "\n";

	int *Ptr = &Var1;
	int * &RefPtr = Ptr;
	
	cout << "*Ptr = " << *Ptr << " " << "*RefPtr = " << " " << *RefPtr << endl;
	cout << " Ptr = " <<  Ptr << " " << " RefPtr = " << " " <<  RefPtr << endl;
	cout << "&Ptr = " << &Ptr << " " << "&RefPtr = " << " " << &RefPtr << endl; 

	int &RefVal2 = *Ptr;
	cout << "Var1 = " << Var1 << " " << "*Ptr = " << *Ptr << " " << "RefVal2 = " << RefVal2 << endl;			
	RefVal2 = 13;
	cout << "Var1 = " << Var1 << " " << "*Ptr = " << *Ptr << " " << "RefVal2 = " << RefVal2 << endl;			

	int Arr[5] = { 2, 5, 6, 7, 8 };
	int (&RefArr)[5] = Arr; 
	
	for( int i = 0; i < 5; i++ )
		cout << "Arr[" << i << "] = " << Arr[i] << " " << "RefArr[" << i << "] = " << RefArr[i] << endl;

	double &d1 = 1;  // Error
	const double &d2 = 1 // Works well
		
	return 0;

}
