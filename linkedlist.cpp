#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "list.h"

using namespace std;
/* A linked list node */
struct node
{
 int data;
 struct node *next;
};
//typedef struct node node;
node *start =NULL;

void list:: populate()
{
    int val;
    node *p;
    node *q;
    cout<<"Enter the Elements\n";
    p=NULL;
    
        while (size--)
    {
        cin>>val;

           if (p == NULL)
           {

            p=(struct node *) malloc(sizeof(struct node));
            p->data = val;
            p->next = NULL;
            start=p;

           }
                else
            {
            q=(struct node *) malloc(sizeof(struct node));
            q->data = val;
            q->next = NULL;
            p->next = q;
            p=p->next;
            }

    }
}


void list::purging()
{
    cout<<"entered\n";
    node *x=start;
    node *y=start;
    

    cout<<"in main while\n";
    
    while(x->next!=NULL){
    cout<<"inside outer for loop\n";
        y=x->next;
        while(y->next!=NULL) // compare element with next element(s)
        {   
	  cout<<"inside inner while loop\n";

              if (x->data==y->data) //if same then data
           {
            //del(y->data);
              cout<< "inside if\n";
                x->next=y->next;
                y->next=NULL;
                free(y);
                y=x->next;
                //--j;
           }
             else{
              y=y->next;
          }
          
    }
x=x->next;
}
}


void list::display()
{
    node *start1=start;
   if(start1 == NULL)
    cout<<"\nNo data\n";
   else
   {
        cout<<"\nThe elements are: ";
        while(start1!=NULL)
        {
            printf(" %d ",start1->data);
            start1=start1->next;
            
        }
        cout<<"\n";
   }
cout<<"coming out";
}

void list::del(int i){
}


