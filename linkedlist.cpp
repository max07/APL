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
/* ************************************************************
Function Name:populate
Return type:void
Arguments :void
Description:It fills the list with values provided 
***************************************************************/
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
/* ************************************************************
Function Name:purging
Return type:void
Arguments :void
Description:compares the element with next element(s) and 
                   deletes if same
***************************************************************/

void list::purging()
{
	
    node *x=start;
    node *y=start;
    node *z=start;
        
    if(x->next!=NULL)
    {
    		
          
           		z=x->next;
      while (x->next!=NULL)  
        {   
           if (x->data==z->data) 
           {             
        
                if(z->next!=NULL) 
                {
                y->next=z->next;
                z->next=NULL;
                free(z);
                z=y->next; 
                }
                else
                {
                
               if (y!=x)
                
                {
                y->next=NULL;
                free(z); 
                x=x->next;             
           	y=x;
           	if (y->next!=NULL)
          	z=y->next;
          	}
          	else
          	{
          		x->next=NULL;
          		y->next=NULL;
          		y=x;
          		
          	}
          	
           	}
           	}
             	else if(z->next!=NULL)
             	{
                         
                           z=z->next;
                           y=y->next;
                      
          	}
          	else
          	{
          	x=x->next;
          	y=x;
          	z=x->next;
          	}
    }
  }
}

/* ************************************************************
Function Name:display
Return type:void
Arguments :void
Description:Displays the values present in list at any instance
***************************************************************/

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
}

void list::del(int i){
}

