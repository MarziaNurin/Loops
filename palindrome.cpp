#include<iostream>
using namespace std;

int main()
{

int num, rem, init, reverse_num = 0;

cout<<endl<<"Enter a number to reverse : ";
cin>>num;

init = num;
while (num > 0)
{
rem = num%10;
reverse_num = (reverse_num*10)+rem;
num = num/10;

}
cout<<endl<<"The reverse number is: "<<reverse_num;

if (init == reverse_num)
{
    cout<<endl<<"It is a palindrome!!";
}
else
{
   cout<<endl<<"It is NOT a palindrome!!";
}


return 0;
}