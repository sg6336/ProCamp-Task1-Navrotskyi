/*
*  Write a program that gets two values from a user: height and
*  width of a rectangle in meters and calculates and prints the
*  perimeter and the area of the rectangle in inches
*/

// How to Convert Meter to Inch
// 1 m = 39.3700787402 in
// 1 in = 0.0254 m
//
// Example : convert 15 m to in :
// 15 m = 15 x 39.3700787402 in = 590.5511811024 in

#define METER_PER_INCH 39.3700787402f

float rectangle_perimeter(float width, float height)
{
	return 2 * (width + height);
}

float rectangle_area(float width, float height)
{
	return width * height;
}

float convertor_meters_to_inshes(float length_meters)
{
	return length_meters * METER_PER_INCH;
}

