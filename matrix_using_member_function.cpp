#include <iostream>
using namespace std;
class matrix
{
    int r, c;
    int m[3][3];

public:
    void getdata();
    void matdisplay();
    void mat_add(matrix, matrix);
    void mat_sub(matrix, matrix);
    void mat_mul(matrix, matrix);
};
void matrix ::getdata()
{
    int i, j;
    cout<<"enter the order of the matrix"<<endl;
    cin>>r>>c;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout<<"enter x["<<i<<"]["<<j<<"]= :";
            cin >> m[i][j];
        }
    }
}
void matrix::matdisplay()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << m[i][j]<< " ";
        }
        cout << "\n";
    }
}
void matrix::mat_add(matrix a, matrix b)
{
    int i, j;
    r = a.r;
    c = a.c;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m[i][j] = a.m[i][j] + b.m[i][j];
        }
    }
}
void matrix::mat_sub(matrix a, matrix b)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m[i][j] = a.m[i][j] - b.m[i][j];
        }
    }
}
void matrix::mat_mul(matrix a, matrix b)
{
    int i, j, k;
    if (a.c != b.r)
    {
        cout << "we can not multiply the matrix \n";
    }
    else
    {
        r = a.r;
        c = a.c;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                m[i][j] = 0;
                for (k = 0; k < a.c; k++)
                {
                    m[i][j] += a.m[i] [k] * b.m[k] [j];
                }
            }
        }
    }
}
int main()
{
    matrix s, r, add, sub,mul;
    int choice;
    
  
    s.getdata();
    cout << "enter  the first matrix \n";
    cout << "enter the second matrix \n";
    r.getdata();
    while(1){
    cout<<"press 1 for display the first matrix"<<endl;
    cout<<"press 2 for diplay the second matrix"<<endl;
    cout<<"press 3 for addition and display the matrix"<<endl;
    cout<<"press 4 for subtraction display the matrix"<<endl;
    cout<<"press 5 for multiplication display the matrix"<<endl;
    cout<<"enter your choice :";
    cin>>choice;
    switch(choice){
    case 1:
     //cout << "display the first matrix \n";
     s.matdisplay();
     cout<<"\n";
     break;
     case 2:
     //cout << "display the second matrix \n";
     r.matdisplay();
     cout<<"\n";
     
     break;
     case 3:
     cout << "sum of two matrix \n";
     add.mat_add(s, r);
     add.matdisplay();
     cout<<"\n";
     break;
     
     
     case 4:
     cout << "subtraction of the two  matrix \n";
     sub.mat_sub(s, r);
     sub.matdisplay();
     cout<<"\n";
     break;
     
     
     case 5:
     cout << "multiplication of the two matrix \n";
     mul.mat_mul(s, r);
     mul.matdisplay();
     cout<<"\n";
     break;
     }
   }
    
    return 0;
}
