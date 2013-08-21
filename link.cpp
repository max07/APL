#include <iostream>
#include <cstdlib>
#include <stdio.h>



using namespace std;
int maxx=0,maxx1=0;


/* A linked list node */
struct node
{
 int data;
 struct node *next;
};

//typedef struct node node;

node *start =NULL;

class ar
{
public:
//    int *arr=NULL;
    void populate();
    int compare();
    //int del(int num);
    void display();
};


void ar:: populate()
{
    int val;
    node *p;
    node *q;
//    node *r=NULL;
    p=NULL;
    //cout<<"\nEnter elements: ";
        while (maxx1--)
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


int ar::compare()
{

//// *** Purging ***
    node *x=start;
    node *y=NULL;
    while (x->next!=NULL)

    {
           y=x->next;
    for (int i=0;i<maxx;++i)
    {

        for (int j=i+1;j<maxx;++j)   // compare element with next element(s)
        {

              if (x->data==y->data)    //if same then data
           {
            //del(y->data);

                x->next=y->next;
                y->next=NULL;
                free(y);
                y=x->next;
                --j;
                --maxx;
           }
           else if (y->next!=NULL)
            y=y->next;

        }

         x=x->next;

    }
    }
////
return 0;
}


/*
// Function to remove duplicates from a unsorted linked list
int ar::del(int num)
{
    struct node *temp, *prev;
    temp=start;
    while(temp!=NULL)
    {
    if(temp->data==num)
    {
        if(temp==start)
        {
        start=temp->next;
        free(temp);
        return 1;
        }
        else
        {
        prev->next=temp->next;
        free(temp);
        maxx--;
        return 1;
        }
    }
    else
    {
        prev=temp;
        temp= temp->next;
    }
    }
    return 0;
}

*/




void ar::display()
{
    node *start1=start;
   if(start1 == NULL)
    cout<<"\nNo data\n";
   else
   {
        cout<<"\nThe elements are:  ";
        while(start1!=NULL)
        {
            printf(" %d ",start1->data);
            start1=start1->next;
        }
        cout<<"\n";
   }

}


int main()
{
    //int *a;
    printf("\nEnter Size: ");  //Take size of array
    scanf("\n%d",&maxx);
    maxx1=maxx;
cout<<"\nEnter data to Insert:  \n";
    ar m;
    //a=m.arr;
    m.populate();              // Take input
    cout<<endl;
    cout<<"\nInitial List: ";
    m.display();                //Display initial data
cout<<endl;

 m.compare();   ////////************ PURGING


cout<<endl;

cout<<"\nPurged List : ";
    m.display();                    // Display Final Data

cout<<endl;
return 0;
}
