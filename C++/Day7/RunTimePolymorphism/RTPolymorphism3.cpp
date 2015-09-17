/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */

#include <iostream>

using namespace std;


class Shape
{
	public:
		virtual void Draw( )
		{
			cout << "Shape::Draw"  << endl;
		}
};

class Circle : public Shape
{
	public:
		void Draw( )
		{
			cout << "Circle::Draw" << endl;
		}
};

class Rectangle : public Shape
{
	public:
		void Draw( )
		{
			cout << "Rectangle::Draw" << endl;
		}
};

class Rhombus : public Shape
{
	public:
		void Draw( )
		{
			cout << "Rhombus::Draw" << endl;
		}
};


int main( )
{
	Shape *SPtr[ ] = { new Circle , new Rectangle, new Rhombus };
	
	for( int i = 0; i < 3; i++ )
	{
		SPtr[i]->Draw( );
	}
	return 0;
}
