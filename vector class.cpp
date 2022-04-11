#include <iostream>
#define MAX 5
using namespace std;

class Vector
{
    int v[MAX];

public:
    Vector()
    {
        for (int i = 0; i < MAX; i++)
            v[i] = 0;
    }

    void setvec()
    {
    	 cout << "\nenter element one by one  : ";
        for (int i = 0; i < MAX; i++)
        {
           
            cin >> v[i];
        }
    }

    void showvec()
    {
        cout << "\nentered Vector is: " << endl;
        for (int i = 0; i < MAX; i++)
            cout << v[i] << " ";
        cout << endl;
    }

    Vector operator-(Vector v2)
    {
        Vector v3;

        for (int i = 0; i < MAX; i++)
            v3.v[i] = this->v[i] - v2.v[i];

        return v3;
    }

   

    Vector operator*(Vector v2)
    {
        Vector v3;

        for (int i = 0; i < MAX; i++)
            v3.v[i] = this->v[i] * v2.v[i];

        return v3;
    }

    Vector operator/(Vector v2)
    {
        Vector v3;

        for (int i = 0; i < MAX; i++)
            v3.v[i] = this->v[i] / v2.v[i];

        return v3;
    }
    friend Vector operator+(Vector v1, Vector v2);
    friend void operator<<(ostream &out, Vector &v);
    friend void operator>>(istream &in, Vector &v);
};

Vector operator+(Vector v1, Vector v2)
{
    Vector v3;

    for (int i = 0; i < MAX; i++)
        v3.v[i] = v1.v[i] + v2.v[i];

    return v3;
}



void operator>>(istream &in, Vector &v1)
{
     cout << "\nEnter element of vector one by one : ";
    for (int i = 0; i < MAX; i++)
    {
       
        in >> v1.v[i];
    }
}
void operator<<(ostream &out, Vector &v1)
{

    out << "\nentered Vector elements are : " << endl;
    for (int i = 0; i < MAX; i++)
        out << v1.v[i] << " ";
    out << endl;
}
int main()
{
    cout<<"Enter 5 size vector";
    Vector v1, v2, v3;
    cout<<"\nenter 1st vector  ";
    cin >> v1;
     cout<<"\nenter 2nd vector  ";
    cin >> v2;
   int ch;
   while (1)
   {
   	cout<<"\n1.vector addition\n2.vector substractrion\n3.vector multiplication\n4.vector division\n5.exit";
   	cout<<"enter your choice : ";
   	cin>>ch;
   	switch(ch)
   	{
   		case 1 :
   			v3 = v1 + v2;
            cout << v3;
            break;
        case 2 :
   			v3 = v1 - v2;
            cout << v3;
            break;
		case 3 :
   			v3 = v1 * v2;
            cout << v3;
            break;
		case 4 :
   			v3 = v1 / v2;
            cout << v3;	
			break;
		case 5 :
		   exit(0);
		   break;
		default :
			cout<<"\nenter a valid choice..";
		   	    
	   }
   }
    
    return 0;
}
