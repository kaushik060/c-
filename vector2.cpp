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
//        cout << "\nentered Vector is: " << endl;
        for (int i = 0; i < MAX; i++)
            cout << v[i] << " ";
        cout << endl;
    
	}
	Vector operator *(int x)
	{ 
	    Vector v3;
		for (int i = 0; i < MAX; i++)
            v3.v[i] = x* v[i] ;
            return v3;
	}
	Vector operator /(int x)
	{ 
	    Vector v3;
		for (int i = 0; i < MAX; i++)
            v3.v[i] = v[i] /x;
            return v3;
	}
};
int main()
{
    cout<<"Enter 5 size vector";
    Vector v1, v2,v3 ,v4;
    int p,q;
    cout<<"\nenter 1st vector  ";
     v1.setvec();
     cout<<"\nenter value to multiply : ";
     cin>>p;
     v2=v1*p;
      
     
     cout<<"\nvector after multiplication : ";
     v2.showvec();
     cout<<"\nenter 2nd vector  ";
     v3.setvec();
     cout<<"\nenter value to divide : ";
     cin>>q;
     v4=v3/q;
     cout<<"vector after divison : ";
     v4.showvec();
     return 0;
}
