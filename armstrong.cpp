#include <iostream>
using namespace std;

int main(){

    int num, rem, init, sum=0;

    cout<<endl<<"Enter a number to check if it is a armstrong number: ";
    cin>>num;

    init = num;

        while (num>0)
            {
                rem = num%10;
                sum = sum + (rem*rem*rem);
                num = num/10;
            
            }
        if (init == sum)
            {
                cout<<endl<<"Congrats!! You found a armstrong number.";
            }
            else
            {
                cout<<endl<<"Sorry! This is NOT a armstrong number. Try again.";
            }
            
    

    return 0;


}