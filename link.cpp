
#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
    int info;
    struct node *next;
};
class ar{
     node *list;
    public:
        ar();

        void insert_at_end(int);

        void delete_at_begining();

        void delete_at_end();
        void delete_before_node();
        void delete_before_after_node(int);
        node *find_before_node(node*);
        void display();
};
ar::ar(){
    list = NULL;
}
node *ar::find_before_node(node *p){
    int count = 0;
    int count1 = 0;
    node *temp = new node;
    temp = list;
    while(temp!=p){
        count++;
        temp=temp->next;
    }
    temp = list;
    while(count1<count-1){
        count1++;
        temp = temp->next;
    }
    return temp;
}

}
void ar::insert_at_end(int data)
{
    node *p = new node;
    node *r = new node;
    node *q = new node;
    r = list;
    p->info = data;
    p->next = NULL;
    if(list == NULL)'
        {
        list = p;
        }
    else{
        while(r->next!=NULL){
            r = r->next;
        }
        r->next = p;
    }
}



void ar::delete_before_node(){
    node *p = new node;
    node *l = new node;
    int data1;
    bool isFound = false;
    p = list;
    cout<<"Enter the node: ";
    cin>>data1;
    if(p == NULL){
        cout<<"\nList is Empty"<<endl;
        exit(0);
    }
    while(p!=NULL){
        if(p->info == data1){
            isFound = true;
            break;
        }
        l = p;
        p = p->next;
    }
    if(isFound){
        if(p == list){
            cout<<"\nIt is the first element\n";
        }else if(p == list->next){
            list = p;
            delete l;
        }else{
            find_before_node(l)->next = p;
            delete l;
        }
    }
}

void ar::display(){
    node *p = new node;
    p = list;
    if(list==NULL){
        cout<<"\nNothing to Display\n";
    }else{
        cout<<"\nThe contents of list\n";
        while(p!=NULL){
            cout<<p->info<<endl;
            p = p->next;
        }
    }
}
int main(){
    int choice;
    ar ar;
    while(1){
        int data;
        cout<<"\n1. Insert at the begining"<<endl;
        cout<<"2. Insert at the end"<<endl;
        cout<<"3. Insert before node"<<endl;
        cout<<"4. Insert After node"<<endl;
        cout<<"5. Delete first element"<<endl;
        cout<<"6. Delete last element"<<endl;
        cout<<"7. Delete before node"<<endl;
        cout<<"8. Delete after node"<<endl;
        cout<<"9. Display"<<endl;
        cout<<"10. Exit"<<endl;
        cout<<"Enter the option: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"\nEnter data to Insert: ";
                cin>>data;
                ar.insert_at_begining(data);
                break;
            case 2:
                cout<<"Enter data to Insert: ";
                cin>>data;
                ar.insert_at_end(data);
                break;
            case 3:
                ar.insert_before_node();
                break;
            case 4:
                ar.insert_after_node();
                break;
            case 5:
                ar.delete_at_begining();
                break;
            case 6:
                ar.delete_at_end();
                break;
            case 7:
                ar.delete_before_node();
                break;
            case 8:
                //ar.delete_before_after_node(0);
                break;
            case 9:
                ar.display();
                break;
            case 10:
                exit(0);
                break;
        }
    }
    return 0;
}
