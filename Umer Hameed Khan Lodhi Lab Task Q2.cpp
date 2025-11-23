#include<iostream>
#include<string>
using namespace std;
int main ()
{
	string name, dept;
	int rollNo;
	float eng, math, phy;
	cout<<"Enter Student Name: ";
	cin>>name;
	cout<<"Enter Roll Number: ";
	cin>>rollNo;
	cout<<"Enter Department: ";
	cin>>dept;
	cout<<"Enter marks in English: ";
	cin>>eng;
	cout<<"Enter marks in Math: ";
	cin>>math;
	cout<<"Enter marks in Physics: ";
	cin>>phy;
	
	float total= eng+ math+ phy;
	float percentage= (total/ 300)*100;
	string grade;
	if(percentage>= 85)
	grade= "A+";
	else if (percentage>= 70)
	grade= "A";
	else if (percentage>= 60)
	grade= "B";
	else if (percentage>=50)
	grade= "C";
	else
	grade= "F";
	cout<<"\n====================================\n";
	cout<"\tSTUDENT RESULT CARD\n";
	cout<<"Name:\t\t"<<name<<endl;
	cout<<"Roll No:\t"<<rollNo<<endl;
	cout<<"Depatment:\t"<<dept<<endl;
	cout<<"====================================\n";
	cout<<"Subject\t\tMarks\n";
	cout<<"====================================\n";
	cout<<"English\t\t"<<eng<<endl;
	cout<<"Math\t\t"<<math<<endl;
	cout<<"Physics\t\t"<<phy<<endl;
	cout<<"====================================\n";
	cout<<"Total Marks:\t"<<total<<"/300\n";
	cout<<"Percentage:\t"<<percentage<<"%\n";
	cout<<"Grade:\t\t"<<grade<<endl;
	cout<<"====================================\n";
	cout<<"Congralutions "<<name<<"!\n";
	cout<<"====================================\n";
	
	return 0;
}
