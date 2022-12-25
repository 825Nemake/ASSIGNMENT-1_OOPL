#include <iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	typedef map<string,int>maptype;
	maptype populationmap;
	populationmap.insert(pair<string,int>("Maharashtra",7026357));
	populationmap.insert(pair<string,int>("Rajastan",6578936));
	populationmap.insert(pair<string,int>("Karnataka",6678993));
	populationmap.insert(pair<string,int>("Punjab",5789032));
	populationmap.insert(pair<string,int>("West bangal",6676291));
	
	maptype ::iterator iter;
	cout<<"======POPULATION OF STATES IN INDIA======\n";
	cout<<"\nSize of PopulationMap :"<<populationmap.size()<<"\n";
	string state_name;
	cout<<"\n Enter name of the state :";
	cin>>state_name;
	iter = populationmap.find(state_name);
	if(iter != populationmap.end())
		cout<<state_name<<" 's population is "<<iter->second;
	else
	cout<<"Key is not populationmap"<<"\n";
	populationmap.clear();
}
