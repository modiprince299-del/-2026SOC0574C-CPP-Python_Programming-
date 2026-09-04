#include<iostream>
using namespace std;
int main()
{ int ch,a,b,sum,area,reverse;
cout<<"Enter your choice: ";
cin>>ch;
switch(ch)
{ case 1: cout<<"Enter two numbers: ";
            cin>>a>>b;
            sum=a+b;
            cout<<"Sum is: "<<sum;
            break;
          case 2: cout<<"Enter length and breadth: ";
                  cin>>a>>b;
                  area=a*b;
                  cout<<"Area of rectangle is: "<<area;
                  break;
                  case 3: cout<<"enter any 3 digit number:";
                  cin>>a;
                  reverse=(a%10)*100 + ((a/10)%10)*10 + (a/100);
                  cout<<"the reverse of the number is:"<<reverse;
                  break;
                  case 4: cout<<"enter temperature in fahrenheit:";
                  cin>>a;
                  b=(a-32)*5/9;
                  cout<<"temperature in celsius is:"<<b;
                  break;

          default: cout<<"Invalid choice"<<endl;
                   break;
}
return 0;
}
