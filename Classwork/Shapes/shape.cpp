#include "Shape.h"

Shape::Shape() : _area(0), _perimeter(0)
{

}

float Shape::get_area(bool has_depth) const // needed to add bool has_depth parametr in the function here and in H file
{
	return _area;
}
