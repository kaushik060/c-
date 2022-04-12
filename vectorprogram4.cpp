#include<iostream>
#include<math.h>
using namespace std;
class Vector
{
    int v[200];
     int sizeS;
    public:
   Vector(int n)
   {
       sizeS = n;
    for(int i=0; i< sizeS; i++)
    {
        v[i] = 0;
    }   
   }
   Vector(int *x, int n);
   float magniture();
void display()
{
    for(int i = 0; i < sizeS; i++)
    {
        cout << v[i] << " ";
    }
}
 void toMatrix();
};
Vector :: Vector(int *x,int n)
{
       sizeS = n;
       for(int i=0; i<sizeS; i++)
       v[i] = x[i];
}
float Vector :: magniture()
{
    float magnsq = 0;
    for(int i = 0; i < sizeS; i++)
    {
        magnsq = magnsq + v[i] * v[i];
    }
   float magn = sqrt(magnsq);
   return magn;
}
void Vector :: toMatrix()
{
    cout << "\nEnter no. of rows : ";
    int row, col;
    cin >> row;
    cout << "\nEnter no. of columns : ";
    cin >> col;
    if(sizeS > row * col)
    cout << "\nMatrix can't be formed.. because you entered less size than vector size.";
    else{
        int cnt = 0;
        for(int i = 0; i < row; i++)
        {
            cout << "|";
            for(int j = 0; j < col; j++)
            {   
                if(cnt >= sizeS)
                cout << "0" << " ";
                else
                cout << v[cnt] << " ";
                cnt++;
            }
            cout << "|" << endl;
        }
    }   

}
int main()
{
    int n;
    cout << "\nEnter size of vector : ";
    cin >> n;
    int arr[n];
    cout << "\nEnter elements : ";
    for(int i = 0; i < n;  i++)
    cin >> arr[i]; 
    Vector v1(arr,n);
    int ch;
    bool loop = true;
    while(loop)
    {
    cout << endl << endl << "1)Convert to float type (magniture)";
    cout << "\n2)Convert to matrix type";
    cout << "\n3)exit";
    cout << "\nEnter choice : ";
    cin >> ch;
    if(ch == 1)
    {
        //float mag = v1.magniture();
        cout << "\nMagniture is : " << v1.magniture();
    }
    else if(ch == 2)
    {
        v1.toMatrix();
    }
    else if(ch == 3)
    {
        loop = false;
        cout << "\nExited..";
    }
    else
    {
        cout << "\nEnter valid choice..";
    }
   }
    return 0;
}
