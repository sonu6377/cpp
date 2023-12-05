/* 1.
#include<iostream>
using namespace std;
int main()
{
    cout<<"hello mysirG ";
    return 0;
}*/
/* 2
#include<iostream>
using namespace std;
int main()
{
    cout<<"hello"<< endl<< "mysirG";
    return 0;
}*/
/* 3.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the two numbers";
    cin>>a>>b;
    c=a+b;
    cout<<"sum of "<<a<<"+"<<b<<"="<<c;
    return 0;
}*/
/* 4
#include<iostream>
using namespace std;
int main()
{
    int r;
    float a;
    cout<<"enter the radius if circle ";
    cin>>r;
    a=3.14*r*r;
    cout<<"area of circle"<<a;
    return 0;
}*/
/* 5
#include<iostream>
using namespace std;
int main()
{
    int l,b,h;
    float a;
    cout<<"enter the value of cuboid";
    cin>>l>>b>>h;
    a=l*b*h;
    cout<<"volume of cuboid"<<endl<<a;
    return 0;
}*/
/* 6
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    float r;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    sum=a+b+c;
    r=sum/3;
    cout<<"average "<<r;
    return 0;

}*/
/* 7
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the a number";
    cin>>a;
    b=a*a;
    cout<<a  <<"square of "<<b;
    return 0;
}*/
/* 8
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the two numbers";
    cin>>a>>b;
    cout<<"a="<<a<<"b="<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<endl<<"after swap value of a and b "<<endl;
    cout<<"a="<<a<<"b="<<b;
    return 0;
}*/
/* 9
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the two numbers";
    cin>>a>>b;
    if(a>b)
        cout<<"maximum no "<<a;
    else
        cout<<"maximum no "<<b;
    return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
    int a[10],sum=0,i;
    cout<<"enter the 10 numbers";
    for(i=0;i<10;i++)
        cin>>a[i];
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    cout<<endl<<"sum of all elements"<<"=="<<sum;
    return 0;
}

