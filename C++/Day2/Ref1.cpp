/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>
using namespace std;

void Swap_Val(int, int);
void Swap_Ptr(int *, int *);
void Swap_Ref(int &, int &);

int main( )
{
	cout << endl;

	int x = 5, y = 6;
	cout << "Before Swap by Val : x = " << x << " y = " << y << endl;
	Swap_Val(x, y);
	cout << "After Swap by Val  : x = " << x << " y = " << y << endl;

	cout << endl;

	int r = 5, s = 6;
	cout << "Before Swap by Ptr : r = " << r << " s = " << s << endl;
	Swap_Ptr( &r, &s);
	cout << "After Swap by Ptr  : r = " << r << " s = " << s << endl;

	cout << endl;

	int p = 5, q = 6;
	cout << "Before Swap by Ref : p = " << p << " q = " << q << endl;
	Swap_Ref( p, q);
	cout << "After Swap by Ref  : p = " << p << " q = " << q << endl;

	cout << endl;

	return 0;

}
void Swap_Val(int x, int y)
{
	int Temp;
	Temp = x;
	x = y;
	y = Temp;
}

void Swap_Ptr(int *r, int *s)
{
	int Temp;
	Temp = *r;
	*r = *s;
	*s = Temp;
}

void Swap_Ref(int &p, int &q)
{
	int Temp;
	Temp = p;
	p = q;
	q = Temp;
}
