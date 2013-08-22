/* **************************************************************
This code file is to remove duplicates from a given integer values
in the form of a linked list or an array. 
***************************************************************/

#include<iostream>
#include<cstdio>
#include "list.h"
using namespace std;
int size=0;
int main()
{
    cout<<"\nEnter Size of the list: "; 
    cin>>size;
    list m;
    
    if (size<=0)
    {return 0;}
    else
    {
    m.populate();             
    cout<<endl; 
    cout<<"Initial List: ";   
    m.display();          
    m.purging();
    cout<<"\nPurged List : ";
    m.display();    
    cout<<endl;               
    }
return 0;
}
