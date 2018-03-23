#include<iostream>
#include<fstream>
using namespace std;
class bill
{
public:
int bill_no;
float bill_amt;
void getdata()
{
cout<<"enter bill number"<<endl;
cin>>bill_no;
cout<<"enter bill amount"<<endl;
cin>>bill_amt;
}
void showdata()
{
cout<<"Bill number     "<<bill_no<<endl;
cout<<"Bill amount     "<<bill_amt<<endl;
}
};
int main()
{
//ofstream ofil("billfile.txt",ios::app);
bill obj;
/*obj.getdata();
ofil.write((char*)&obj, sizeof(obj));*/
ifstream ifil("billfile.txt");
cout<<"Now let's see the bill no's and bill amount\n";
ifil.read((char*)&obj, sizeof(obj));
obj.showdata();
return 0;
}
