#include<iosream>
using namespace std;
class student
{
    protected:
    int roll_number;
    public:
     void get_number(int a)
     {
         roll_number=a;
     }
     void put_number(void)
     {
         cout<<"roll no :"<<roll_number<<"\n";
     }
};
class test:public student
{
    protected:
    float part1,part2;
    
}