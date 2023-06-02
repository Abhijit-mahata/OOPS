#include<iostream>
using namespace std;

class Time
{
	int hour, minute, second;
	
public:
	Time()
	{
		hour=minute=second=0;
	}
	Time(int h, int m, int s)
	{
		hour=h;
		minute=m;
		second=s;
	}
	Time operator+(Time );
	void display();
};

Time Time::operator+(Time t2)
{
	Time t;
	t.hour=hour+t2.hour;
	t.minute=minute+t2.minute;
	t.second=second+t2.second;
	if(t.second>59)
	{
		t.minute=t.minute+(t.second/60);
		t.second=t.second%60;
	}
	if(t.minute>59)
	{
		t.hour=t.hour+(t.minute/60);
		t.minute=t.minute%60;
	}
	return t;
}

void Time::display()
{
	if(hour<10)
		cout<<"0";
	cout<<hour<<"-";
	if(minute<10)
		cout<<"0";
	cout<<minute<<"-"<<second<<endl;
	
}

int main()
{
	int h, m, s;
	cout<<"Enter the first time(H-M-S):: ";
	cin>>h>>m>>s;
	Time t1(h,m,s);
	
	cout<<"Enter the second time(H-M-S):: ";
	cin>>h>>m>>s;
	Time t2(h,m,s);
	
	Time t3;
	t3=t1+t2;
	cout<<"The total time after addition::\n";
	t3.display();
	return 0;
	
}


































