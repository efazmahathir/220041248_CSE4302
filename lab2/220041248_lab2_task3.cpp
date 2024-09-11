#include<iostream>
using namespace std;
int main()
{


enum emtype{ laborer, secretary, manager,
 accountant, executive, researcher};
 emtype e;
 char ch;
 cin>>ch;
 switch(ch)
 {
 case 'l':
    e= laborer;
    break;
     case 's':
         e= secretary;
         break;
     case 'm':
         e =manager;
         break;
     case 'a':
         e = accountant;
         break;
     case 'e':
         e =executive;
         break;
     case 'r':
         e=researcher;
         break;
 }

    switch(e)
    {
    case laborer:
        cout<<"laborer";
        break;
    case manager:
        cout<<"manager";
        break;
    case accountant:
        cout<<"accountant";
        break;
    case executive:
        cout<<"executive";
        break;
    case researcher:
        cout<<"researcher";
        break;
    }
}
