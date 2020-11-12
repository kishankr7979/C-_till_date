#include<iostream>

using namespace std;

struct Rectangle 
{
	int width, height;
	Rectangle(int w, int h)
	{
		width = w;
		height = h;

	}
	void areaofReactangle()
	{
		cout<<"Area of Rectangle is : "<<(width*height);

	}
};
int main (void)
{
	struct Rectangle rec = Rectangle(4,5);
	rec.areaofReactangle();
	return 0;
}