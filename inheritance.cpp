#include<iostream>
using namespace std;
class Office
{
	protected:
	int basic,hra,a=0;
	public:
		void getdata();
		void putdata();
		
};
void Office::getdata()
{
	bool k;
	cout<<"\nenter the basic of the employee : \n";
	cin>>basic;
	cout<<"\nenter the hra of the employee  : \n ";
	cin>>hra;
	cout<<"\nif the emplpoyee is the manager then enter 1 :: ";
	cin>>k;
	if(k==true)
	{
		cout<<"enter the addition allowence";
		cin>>a;
	}
}
void Office::putdata()
{
	cout<<"\nenter the basic of the employee ";
	cout<<basic;
	cout<<"\nenter the hra oof the employee ";
	cout<<hra;
	cout<<"\nthe additional allowence of the employee is:\n";
	cout<<a;
	
}

class kolkata:public Office
{
	public:
	  float k;
	  void getdatak()
	  {
	   cout<<"\n enter the city allowence:\n";
	   cin>>k;
	  }
	  void putdatak()
	  {
	   cout<<"\nthe city alowence is :"<<k;
	   cout<<"\ntotal salary of the employee is :\n"<<basic+hra+a+k<<endl;
	  }
		 
};

class delhi:public Office
{
	public:
	float d;
	void getdata_d()
	{
	 cout<<"\nenter the city allowence:\n";
	 cin>>d;
	}
	void putdata_d()
	{
	 cout<<"\nthe city alowence is :\n"<<d;
	 cout<<"\ntotal salary of the employee is :\n\n"<<basic+hra+a+d<<endl;
	}
		 
};

class darjeeling:public Office 
{
	public:
	float l;
	void getdata_l()
	{
	 cout<<"\nenter the city allowence:\n";
	 cin>>l;
	}
	void putdata_l()
	{
	 cout<<"\nthe city alowence is :\n"<<l;
	 cout<<"\ntotal salary of the employee is \n:\n"<<basic+hra+a+l<<endl;
	}
		 
};

int main()
{
	kolkata a;
	delhi m;
	darjeeling n;
	cout<<"\nenter the information who work in kolkata\n";
	a.getdata();
	a.getdatak();
	cout<<"\nenter the information who work in delhi\n";
	m.getdata();
	m.getdata_d();
	cout<<"\nenter the information who work in darjeeling\n";
	n.getdata();
	n.getdata_l();
	cout<<"\nemployee information whow work in kolkata\n";
	a.putdata();
	a.putdatak();
	cout<<"\nenter the information who work in deldi\n";
	m.putdata();
	m.putdata_d();
	cout<<"\nenter the information who work in darjeeling\n";
	n.putdata();
	n.putdata_l();	
	return 0;
}



























