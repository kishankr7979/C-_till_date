#include<iostream>

using namespace std;

void pascal(int n)

{

	
   for(int i=0; i<=n; i++)
   {
       int c = 1;
       for(int j=1; j<=i; j++)
       {
       	cout<<c<<" ";

       	c = c *(i-j)/j;


       }
       cout<<endl;

   }
   


}

int main()                          
{

pascal(5);

pascal(7);


	return 0;

}