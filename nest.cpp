#include<iostream>
using namespace std;
class lab4_2
{
string name,s2;
public :

void first()
{

cout<<"enter intials :  ";
cin>>name;
}
void last()
{
first();
cout<<"enter lastnmae  : ";
cin>>s2;

}
void display()
{last();
cout<<"full name  \n";
cout<<name;
cout<<" ";
cout<<s2;
}
};
int main()
{lab4_2 o;
o.display();
}