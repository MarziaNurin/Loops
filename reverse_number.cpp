#include<iostream>
using namespace std;

int main()
{

int num, rem;
int reverse_num = 0;

cout<<endl<<"Enter a number to reverse : ";
cin>>num;

while (num > 0)
{
rem = num%10;
reverse_num = (reverse_num*10)+rem;
num = num/10;

}
cout<<endl<<"The reverse number is: "<<reverse_num;

return 0;
}