#include<iostream>
using namespace std;
class lab4_1
{public :
void sum(int s1,int s2=10,int s3=20)
{ int s=0;
s=s1+s2+s3;
cout<<"sum="<<s<<endl;
}
};
int main()
{lab4_1 o;
o.sum(4,5,43);
o.sum(2,3);
o.sum(2);
}