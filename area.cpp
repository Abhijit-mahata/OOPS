#include <iostream>
#include <math.h>
using namespace std;
class AREA
{
public:
    float area(float a, float b)
    {
        return (a * b);
    }
    float area(float a)
    {
        float c = (22 / 7) * (a * a);
        return c;
    }
    float area(float a, float b, float c)
    {
        float s = (a + b + c) / 2;
        float d = sqrt(s * (s - a) * (s - b) * (s - c));
        return d;
    }
};
int main()
{
    AREA abc;
    float a, b, c;
    int n;
    while (1)
    {
        cout << "\n press 1 for  calculate the area of  rectengle \n";
        cout << "\n press 2 for calculte the are a of the circle \n";
        cout << "\n press 3 for calculate the area of the triangle \n";
        cout << "\n enter your choice\n ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "\n  enter two side of the rectengle   \n";
            cin >> a >> b;
            cout << "area of rectengle\n"<< abc.area(a, b);
            break;
        case 2:
            cout << "\n  enter the radious of the circle   \n";
            cin >> a;
            cout << "area of circle =\n"<< abc.area(a);
            break;
        case 3:
            cout << " \n   enter the value of a b c \n";
            cin >> a >> b >> c;
            cout << "\n  area of the triangle is =  \n"<< abc.area(a, b, c);
            break;
        default:
             cout<<"enter valid choice \n";
        }
    }
    return 0;
}