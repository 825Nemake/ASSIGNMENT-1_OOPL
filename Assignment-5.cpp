#include <iostream>
using namespace std;
template<class T>
class sort{
	public:
		T a[50];
		int n;
		void accept()
		{
			cout<<"\Enter no of elements : ";
			cin>>n;
			cout<<"Enter a elements\n";
			for (int i=0;i<n;i++){
				cin>>a[i];
				
			}
		}
		void selection_sort(){
			T temp;
			for(int i=0;i<n;i++){
				int min=i;
				for(int j=i+1;j<n;j++){
					if(a[j]>a[min]){
						swap(a[i],a[min]);
						
					}
					
				}
			}
		}
		void display(){
			for(int i=0;i<n;i++){
				cout<<a[i]<<"\n";
				
			}
		}
};
int main(){
	int v;
	char ch;
	sort<int>s1;
	sort<float>s2;
	
	cout<<"*****SELECTION SORT****\n";
	do{
		cout<<"Sorting of integers and float array"<<"\n";
		cout<<"1.for int array\n";
		cout<<"2.for float array\n";
		cout<<"Enter your choice\n";
		cin>>v;
		switch(v)
		{
			case 1:
				s1.accept();
				cout<<"\nElements are\n";
				s1.display();
				s1.selection_sort();
				cout<<"\nSorted elements are :";
				s1.display();
				break;
			case 2:
				s2.accept();
				cout<<"\n Elements are :\n";
				s2.display();
				s2.selection_sort();
				cout<<"\nSorted elements are :\n";
				s2.display();
				break;
		}
			cout<<"\ndo you want to continue";
			cin>>ch;
	}
		while(ch=='y'||ch=='Y');
		return 0;		}
	

