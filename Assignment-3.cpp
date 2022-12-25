// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class publication
{
	protected:
		string title;
		float price;
	public:
	publication()
	//DEFAULT CONSTRUCTOR
	{
		title="";
		price=0.0;
		}	
	publication(string t,float p)
	{
		title = t;
		price = p;
		
		}	
};
class Book:public publication
{
	int pagecount;
	public:
	Book(){
			pagecount = 0;
			
			}
		Book(string t,float p,int pc):publication(t,p)
		{
			pagecount = pc;
		}
		void print(){
		
		try{
			if(pagecount>10){
				cout<<"BOOK NAME IS :"<<title<<endl;
				cout<<"PRICE : "<<"Rs"<<price<<endl;
				cout<<"PAGECOUNT:"<<pagecount<<endl;
				
			}
			else
			{
				throw(pagecount);
			}
		}
		catch(int pagecount)
		{
			cout<<"Book Nane is : "<<title<<endl;
			cout<<"Price : "<<"Rs"<<price<<endl;
			cout<<"PAGECOUNT IS :"<<pagecount<<"N/A"<<endl;
		}
	}
};
class tape: public publication
{
	float playtime;
	public:
		tape()
		{
			playtime = 0.0;
			
		}
		tape(string t,float p,int time):publication(t,p)
		{
			playtime = time;
			
		}
		void display()
		{
			cout<<"BOOK NAME IS :"<<title<<endl;
			cout<<"PRICE : "<<price<<"Rs"<<endl;
			cout<<"PLAYTIME : "<<playtime<<"min";
			
		}
};
int main()
{
	cout<<"***BOOK DATA**"<<endl;
	Book b("C++",550,5);
	b.print();
	cout<<endl<<"**AUDIO BOOK DATA**"<<endl;
	tape t("Data Analysis",220,120);
	t.display();
	return 0;
}
