#include<iostream>
using namespace std;
int main()
{
    char op;
    float x,y;
    cout<<"Enter the two operands";
    cin>>x>>y;

    cout<<"Enter operator";
    cin>>op;

    switch(op){
        case '+' :
          cout<<x+y;
          break;
        case '-' :
          cout<<x-y;
          break;
        case '*' :
          cout<< x*y;
          break;
        case '/' :
          cout<< x/y;
          break;
        default:
        cout<< "ERROR ! This is an incorrect operator";
        break;

    }
    return 0;

}


