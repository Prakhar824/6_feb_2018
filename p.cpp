#include<iostream>
using namespace std;
class test
{
public:
test()
{
cout<<"\n it is constructor";
}
~test()
{
cout<<"\n it is destructor";
}
};
int main()
{

test t;
{
test t1;
cout<<"inside the block";
}
cout<<"\n i'm in the program";
return 0;
}
	
