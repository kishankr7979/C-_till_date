
#include<iostream>
#include<string>

using namespace std;




class laptop
{
public :

laptop()
{
	cout<<"base class 2 called"<<endl;
}

string name;
float price;




};

class gamingLaptop : public laptop
{
public :

gamingLaptop()
{
	cout<<"Derived class 1 called"<<endl;

}

	string name;
	int vram;
};
class gamingSystem : public gamingLaptop
{
	public :
	gamingSystem()
	{
		cout<<"derived class 2 called"<<endl;

	}
};


int main()
{

gamingSystem lap1;


	return 0;

}