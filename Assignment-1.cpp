#include<iostream>
using namespace std;
class complex
{
	public:
		int x,y;
			complex operator +(complex);
			complex operator -(complex);
			complex operator *(complex);
			complex operator /(complex);
			int display();
						
};
complex complex::operator +(complex c)
{
	complex ans;
	ans.x = x+c.x;
	ans.y = y+c.y;
	return ans;
	
}
complex complex::operator -(complex c)
{
	complex ans;
	ans.x = x-c.x;
	ans.y = y-c.y;
	return ans;
	
}
complex complex::operator *(complex c)
{
	complex ans;
	ans.x = x*c.x-y*c.y;
	ans.y = x*c.y +y*c.x;
	return ans;
	
}
complex complex::operator /(complex c)
{
	complex a1,ans;
	int d;
	d = c.x*c.x+c.y*c.y;
	a1.x = x*c.x+y*c.y;
	a1.y = c.x*y-c.y*x;
	ans.x = a1.x/d;
	ans.y = a1.y/d;
	return ans;
	
}
int complex::display()
{
	cout<<x<<"+"<<y<<"i"<<endl;
	return 0;
	
}
int main()
{
	complex c1,c2,c3;
	cout<<"Enter the first complex No. :"<<endl;
	cin>>c1.x>>c1.y;
	cout<<"Enter the Second No. :"<<endl;
	cin>>c2.x>>c2.y;
	cout<<"First no. :"<<endl;
	c1.display();
	cout<<"Second No. :	"<<endl;
	c2.display();
	c3 = c1 + c2;
	cout<<"Addition :"<<endl;
	c3.display();
	c3 = c1-c2;
	cout<<"Substraction"<<endl;
	c3.display();
	c3 = c1*c2;
	cout<<"Multiply :"<<endl;
	c3.display();
	c3 = c1 /c2;
	cout<<"Divide :"<<endl;
	c3.display();
	return 0;
	
}
