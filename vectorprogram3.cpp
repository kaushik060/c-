#include<iostream>
using namespace std;
#include<conio.h>
#define n 5
class vector
{
public:int v[n];
public:
void get();
public: friend void operator++(vector&);
friend void operator--(vector&,int);
void disp();
};
void vector::get()
{
for(int i=0;i<n;i++)
{
cin>>v[i];
}
}
void operator++(vector &t)
{
for(int i=0;i<n;i++)
{
++t.v[i];
}
}
void operator--(vector &t,int)
{
for(int i=0;i<n;i++)
{
t.v[i]--;
}
}
void vector::disp()
{
cout<<"\n\nVector Series: ";
for(int i=0;i<n;i++)
{
cout<<v[i]<<"\t";
}
cout<<"\n";
}
int  main()
{
int j;
vector vect;
//clrscr();
cout<<"\nEnter the Vector Element: \n";
vect.get();
vect.disp();
++vect;
cout<<"\n\tAfter Pre-Increment \n";
vect.disp();
vect--;
cout<<"\n\tAfter Post-Decrement \n";
vect.disp();
getch();
return 0;
}
