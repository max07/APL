#ifndef LIST_H
#define LIST_H
extern int size;
class list
{  
public:
    int arr[100010];
    void populate();
    void del(int pos);
    void display();
    void purging();
};
#endif
