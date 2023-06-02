#include<iostream>
using namespace std;
class MATRIX
{
     int r,c;
     int m[10][10];
     public:
        void getdata();
        void mat_display();
     MATRIX operator+(MATRIX);
     MATRIX operator-(MATRIX);
     MATRIX operator*(MATRIX);

};
void MATRIX::getdata()
{
    cout<<"Enter the order of the matrix:";
    cin>>r>>c;
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Ente the matrix element"<<"m[i][j]:";
            cin>>m[i][j];
        }
    }
}
void MATRIX::mat_display()
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<m[i][j] <<" ";
        }
        cout<<"\n";
    }
}
MATRIX MATRIX::operator+(MATRIX a) 
{
     int i,j;
     MATRIX k;
    k.r=a.r;
     k.c=a.c;
    for(i=0;i<k.r;i++)
    {
        for(j=0;j<k.c;j++)
        {
            k.m[i][j]=m[i][j]+a.m[i][j];
        }
    }
return(k);
}
MATRIX MATRIX::operator-(MATRIX a) 
{
     int i,j;
     MATRIX k;
    k.r=a.r;
     k.c=a.c;
    for(i=0;i<k.r;i++)
    {
        for(j=0;j<k.c;j++)
        {
            k.m[i][j]=m[i][j]-a.m[i][j];
        }
    }
return(k);
}
MATRIX MATRIX::operator*(MATRIX a)
{
    int i,j,k;
    MATRIX tem;
    if(c!=a.r)
    {
        cout<<"Multiplay matirx is not possible\n";
    }
    else
    {
        tem.r=a.r;
         tem.c=a.c;
         for(i=0;i<tem.r;i++)
         {
             for(j=0;j<tem.c;j++)
             {
                tem.m[i][j]=0;
                for(k=0;k<a.c;k++)
                {
                    tem.m[i][j]=m[i][k]*a.m[k][j];
                }

             }

         }
    }
    return(tem);   

}

int main()
{
MATRIX s,r,add,sub,mul;
int choice;

cout<<"Input the value\n";
cout<<"Ente the first martix\n";
s.getdata();
cout<<"Enter the 2nd martix\n";
r.getdata();	
cout<<"display the first martix\n";
s.mat_display();
cout<<"display the 2nd martrix\n";
r.mat_display();


while(1)
{
cout<<"press  1 for matrix addition"<<endl;
cout<<"press 2 for matrix subtraction"<<endl;
cout<<"press 3 for matrix muktiplication"<<endl;
cout<<"press 4 display the matruix"<<endl;
cout<<"enter your choice : ";
cin>>choice;
	switch(choice){

	case 1:
	
	cout<<"Sum of two matrix\n";
        add=s+r;
	add.mat_display();
	break;
	
	case 2:
	cout<<"Subtraction of two martix\n";
	sub=s-r;
	sub.mat_display();
	break;

	case 3:
	cout<<"Multiplay of two martix\n";
	mul=s*r;
	mul.mat_display();
	break;
	}
}
	



return(0);
}
