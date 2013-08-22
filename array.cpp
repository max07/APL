#include <iostream>
#include "list.h"
using namespace std;

/* ************************************************************
Function Name:populate
Return type:void
Arguments :void
Description:It fills the array with values provided 
***************************************************************/
void list::populate(){
    cout <<"Enter the "<<i+1<<"th element ";
    for (int i=0;i<size;i++){
            cin>>arr[i];
            cout<<endl;
	}
}


/* ************************************************************
Function Name:del
Return type:void
Arguments :int ,position of the element to be deleted
Description:Deletes the value  present at the position(index) 
                   passed in as a argument by overwriting the
                   value of the deleted element. Function also
                   reduces the size of array by one  
***************************************************************/

void list::del(int pos){
    for (int i=pos;i<size;i++){
        arr[i]=arr[i + 1];  
    }
    size=size-1;             
}

/* ************************************************************
Function Name:display
Return type:void
Arguments :void
Description:Displays the values present in array at any instance
***************************************************************/
void list::display(){
    for (int i=0;i<size;i++)
        cout<<" "<<arr[i];
}

/* ************************************************************
Function Name:purging
Return type:void
Arguments :void
Description:compares the element with next element(s) and 
                   deletes if same
***************************************************************/
void list::purging(){
    for (int i=0;i<size;++i){
        for (int j=i+1;j<size;++j){
           if(arr[i]==arr[j]){
                del(j);
                i--;
           }
        }
    }
}
