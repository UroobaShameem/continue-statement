#include<iostream>
using namespace std;
int main()
{
    int i, sum, num;
    i=0; sum=0;
    cout<<"\n enter five numbers: ";
    while(i<5)
    {
        cin>>num;
        if(num<=0)
        {
            cout<<"enter positive no";
            continue;
        }
        sum=sum+num;
        i++;
    }
cout<<"\n sum of "<<i<<"number is "<<sum;
return 0;
}