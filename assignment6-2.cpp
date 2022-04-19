#include <iostream>
#include <cstring>
#include<string.h>
using namespace std;
class VegCuisine {
protected:
    char name[20];
    int cost;
public:
    VegCuisine(char *n, int c) {
        strcpy(name, n);
        cost = c;
    }
    ~VegCuisine() {
        cout << "\nVegCuisine class object destroyed\n";
    }
    virtual void printData() {
        cout << "\nName:" << name << ' ' << "\ncost:" << cost << '\n';
    }
};
class NonVegCuisine {
protected:
    char name[20];
    int cost;
public:
    NonVegCuisine(char *n2, int c2) {
        strcpy(name, n2);
        cost = c2;
    }
    ~NonVegCuisine() {
        cout << "\nNonVegCuisine class object destroyed\n";
    }
    virtual void printData() {
        cout << "\nName:" << name << ' ' << "\ncost:" << cost << '\n';
    }
};
class ComboCuisine: public VegCuisine, public NonVegCuisine {
public:
    ComboCuisine(char *n1, char *n2, int c1, int c2): NonVegCuisine(n2, c2), VegCuisine(n1, c1) {

    }
    ~ComboCuisine() {
        cout << "ComboCuisine object destroyed\n";
    }
    void printData() {
        cout << "Printdata of Combocuisine class\n";
    }
};
int main() {
    char s1[20], s2[20];
    int c1, c2;
    cout << "Enter the name and cost of VegCuisine:" ;
//    cin.getline(s1, 20, '\n');
cin>>s1;
    cin >> c1;
    cout << "Enter the name and cost of NonVegCuisine:";
//    fflush(stdin);
//    cin.getline(s2, 20, '\n');
cin>>s2;
    cin >> c2;
//    VegCuisine *v1 = new ComboCuisine(s1, s2, c1, c2);
//    v1->printData();
//    delete v1;
//    v1 = new VegCuisine(s1, c1);
//    v1->printData();
//    delete v1;
//    NonVegCuisine *v2 = new ComboCuisine(s1, s2, c1, c2);
//    v2->printData();
//    v2 = new NonVegCuisine(s2, c2);
//    v2->printData();
//    delete v2;
 ComboCuisine ob1(s1,s2,c1,c2);
 VegCuisine *v1=&ob1;
 v1->printData();
 VegCuisine ob2(s1, c1);
  v1 = &ob2;
  v1->printData();
 ComboCuisine ob3(s1,s2,c1,c2);
 NonVegCuisine *v2=&ob3;
 v2->printData();
  NonVegCuisine ob4(s2, c2);
 v2 = &ob4;
 v2->printData();
    return 0;
}
