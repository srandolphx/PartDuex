
#include "TriangleStack.h"

TriangleStack::TriangleStack(float b, float h)
{
	this->base = b;
	this->height = h;
}

float TriangleStack::getArea(float b, float h)
{
	return (b * h) / 2;
}
