#include<iostream>
const float PI = 3.14;
using namespace std;

class Point{
    protected :
        int xCo, yCo;
    public :
        Point(int x,int y)
        {
            xCo = x;
            yCo = y;
            cout << "\nObject created of point class";
        }
        ~Point()
        {
            cout << "\nObject destroyed of point class";
        }
        void print()
        {
            cout << " xCo = " << xCo << ", yCo = " << yCo;
        }
};
class Ellipse : public Point
{
protected :
    int a_axis, b_axis;
public:
    Ellipse(int x, int y, int a, int b) : Point(a,b)
    {
        a_axis = a;
        b_axis = b;
        cout << "\nObject created of Ellipse class";
    }
    ~Ellipse()
    {
        cout << "\nObject destroyed of Ellipse class";
    }
    void print()
    {
        cout << "\na_axis = " << a_axis << "and b_axis = " << b_axis;
        cout << "\n xCo = " << xCo << ", yCo = " << yCo;
    }
    float area()
    {
        float ar = PI * a_axis * b_axis;
        return ar;
    }
};

class Ellipsoid : public Ellipse
{
protected:
   int c_axis;
public:
    Ellipsoid(int x, int y, int a, int b, int c) : Ellipse(x,y,a,b)
    {
        c_axis = c;
         cout << "\nObject created of Ellipsoid class";
    }
    ~Ellipsoid()
    {
        cout << "\nObject destroyed of Ellipsoid class";
    }
    void print()
    {
        cout << "\na_axis = " << a_axis << "\nb_axis = " << b_axis;
        cout << "\nc_axis = " << c_axis;
        cout << "\nxCo = " << xCo << ", yCo = " << yCo;
    }
    float volumn()
    {
        float vol = area() * c_axis;
        return vol;
    }
};
int main()
{
    int x,y,a,b,c;
    cout << "\nEnter X and Y cordinates : " ;
    cin >> x >> y;
    cout << "\nEnter a_axis : ";
    cin >> a;
    cout << "\nEnter b_axis : ";
    cin >> b;
    cout << "\nEnter c_axis : ";
    cin >> c;
    Ellipsoid e1(x,y,a,b,c);
    e1.print();
    cout << "\nArea is : " << e1.area();
    cout << "\nVolumn is : " << e1.volumn();

    return 0;
}
