#include<iostream> 
using namespace std ;

int main ()
{

int n=2345,rem=0,sum=0;

while(n>0)
{
    rem=n%10;
    n=n/10;
    sum=sum+rem;
}

cout<<sum;



return 0;
}