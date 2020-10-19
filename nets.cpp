#include<iostream>
using namespace std;
class lab4_3
{
static int count;
int n;
public :

void increase()
{

count++;
}
void getdata()
{
cout<<"count"<<count<<endl;

}

};
int lab4_3::count;
int main()
{lab4_3 o,o1,o2;
o.getdata();
o1.getdata();
o2.getdata();

o.increase();
o1.increase();o2.increase();
o.getdata();
o1.getdata();
o2.getdata();
}