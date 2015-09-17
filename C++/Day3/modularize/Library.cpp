/* This Document is the intellectual property of MindSculptor Systems Pvt. Ltd., Bangalore. No part of this document should be reproduced, sold, hired  * or should not be public broadcasted without the prior written consent of the authors of MindSculptor Systems Pvt. Ltd. People found guilty would be  * sued as per law.This document should be used only for educational purposes. The author nor the company is responsible for any damage caused out of * this document/material directly or indirectly.All rights reserved by MindSculptor Systems Pvt. Ltd.
 *
 * Author: Subhash.K.U ( www.subhashku.com or www.mindsculptorsys.com)
 * Revision: 1.0
 * Date: 07.01.2013
 */


#include "Class.h"

void Book :: EnterBookDetails( const char *ArgAuthor, int ArgPage, double ArgPrice )
{
	Author = (char *)malloc(strlen(ArgAuthor) + 1 );	
	strcpy(Author, ArgAuthor);
	Pages = ArgPage; 	
	Price = ArgPrice;
}

void Book :: QueryBookDetails( )
{
	cout << "Author : " << Author << endl;
	cout << "Pages  : " << Pages  << endl;
	cout << "Price  : " << Price  << endl;
} 

