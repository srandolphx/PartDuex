#include "TriangleHeap.h"

TriangleHeap::TriangleHeap(float* b, float* h)
{
	this->base = b;
	this->height = h;

}

float TriangleHeap::getArea(float* b, float* h)
{
	return (*b * *h) / 2;
}
