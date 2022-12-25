#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
	char name[10];
	int ID;
	double salary;
	public:
		void accept()
		{
			cout<<"Enter Employee Name: ";
			cin>>name;
			cout<<"Enter Employee ID";
			cin>>ID;
			cout<<"Employee salary:";
			cin>>salary;
			
		}
		void dispaly()
		{
			cout<<"\n-----------------------------------------";
			cout<<"\n*details*";
			cout<<"\nName : "<<name;
			cout<<"\nID"<<ID;
			cout<<"\nSalary : "<<salary;
			
		}
		
};
int main()
{
	Employee obj[5];
	fstream f;
	int i,n;
	f.open("file1.txt");
	cout<<"\nHow many elements do you want to store ?";
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cout<<"\nEnter information of Employee:";
		obj[i].accept();
		f.write((char*)&obj[i],sizeof obj[i]);
	}
	f.close();
	f.open("file1.txt",ios::in);
	cout<<"\n Information of Employee is as follows:";
	
		for(i=1;i<=n;i++)
		{
			f.write((char*)&obj[i],sizeof obj[i]);
			obj[i].dispaly();
			
		}
		f.close();
		return 0;
	}
