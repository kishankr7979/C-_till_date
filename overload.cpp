#include <iostream>

using namespace std;

void run()
{

	cout<<"Run is runnning"<<endl;

}

void run(int a)
{
	cout<<"Run with int"<<a<<" is running"<<endl;

}

void run(char a)
{

cout<<"Kaho"<<a<<"is running"<<endl;


}
void run(int a, int b)
{

cout<<"Kaho"<<endl;

}

int main()
{
run();
run(5);
run();
run(1,2);

return 0;

}