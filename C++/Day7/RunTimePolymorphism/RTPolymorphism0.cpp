/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */
#include <iostream>

using namespace std;


class Vehicle
{
	public:
		void Display( )
		{
			cout << "Vehicle" << endl;
		}
};

class Car : public Vehicle                /* Car is a vehicle */
{
	public:
		void Display( )
		{
			cout << "Car" << endl;
		}
};

int main( )
{
	Vehicle v;
	v.Display( );
	
	Car c;
	c.Display( );
	
	Vehicle *vPtr1 = new Vehicle;
	vPtr1->Display( );
	
	Car *cPtr = new Car;
	cPtr->Display( );

	Vehicle * vPtr2 = new Car;
	vPtr2->Display( );

	return 0;
}
