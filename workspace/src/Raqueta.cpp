// Raqueta.cpp: implementation of the Raqueta class.
//
//////////////////////////////////////////////////////////////////////

#include "Raqueta.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Raqueta::Raqueta()
{
<<<<<<< HEAD
    velocidad.x=0;
=======
	velocidad.x=0;
>>>>>>> 961bee9e3f0b4c4a177828e5555b6cadcb6a8ee2
    velocidad.y=0;
}

Raqueta::~Raqueta()
{

}

void Raqueta::Mueve(float t)
{
<<<<<<< HEAD
	x1 = x1 + velocidad.x*t;
=======
    x1 = x1 + velocidad.x*t;
>>>>>>> 961bee9e3f0b4c4a177828e5555b6cadcb6a8ee2
    x2 = x2 + velocidad.x*t;

    y1 = y1 + velocidad.y*t;
    y2 = y2 + velocidad.y*t;
}
