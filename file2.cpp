#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class File
{
	string con, cap;

public:
	void create_file(string fn1, string fn2);
	void display_file(string fn1, string fn2);
};
void File::create_file(string fn1, string fn2)
{
	ofstream cont(fn1), capt(fn2);
	if (cont.fail() != 0 || capt.fail() != 0)
	{
		cout << "File not created";
	}
	else
	{
		int n, temp;
		cout << "Enter how many number of the country that you want to enter : \n";
		cin >> n;
		temp = n;
		cin.get();
		while (temp)
		{
			cout << "enter the name of the country: ";
			getline(cin, con);
			cont << con;
			cont << endl;
			temp--;
		}
		temp = n;
		while (temp)
		{
			cout << "enter the name of the capital: ";
			getline(cin, cap);
			capt << cap;
			capt << endl;
			temp--;
		}
		cont.close();
		capt.close();
		cout << "////File create successfully////"<<endl;
	}
}
void File::display_file(string fn1, string fn2)
{
	ifstream cont(fn1), capt(fn2);
	if (cont.fail() != 0 || capt.fail() != 0)
	{
		cout << "file not created" << endl;
	}
	else
	{
		getline(cont, con);
		getline(capt, cap);
		while (capt && cont)
		{
			cout << "the capital of " << con << " is " << cap<<endl;
			getline(cont, con);
			getline(capt, cap);
		}
		cout << "\n";
		cont.close();
		capt.close();
	}
}
int main()
{
	string fn1, fn2;
	File fl;
	// cout<<"enter the first file name\n";
	// cin>>f1_name;
	// cout<<"enter the second file name\n";
	// cin>>f2_name;
	fl.create_file("country.txt", "capital.txt");
	fl.display_file("country.txt", "capital.txt");
	return 0;
}
