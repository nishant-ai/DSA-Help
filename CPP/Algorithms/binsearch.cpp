//binary search//
#include<iostream.h>
#include<conio.h>
int Bsearch(int[],int,int);
int main(){int AR[50],item,n,index;
clrscr();
cout<<"enter the size of array ";
cin>>n;
for(int i=0;i<n;i++)
cin>>AR[i];
cout<<"enter the element to be searched for ";
cin>>item;
index=Bsearch(AR,n,item);
if(index==-1)
cout<<"sorry not found";
else
cout<<"element found at position "<<index+1<<endl;
getch();
return 0;
}
int Bsearch(int AR[],int size,int item)
{int mid,last,beg=0;

last=size-1;
while(beg<=last){
mid=(beg+last)/2;
if(item==AR[mid])
return mid;
else
 if(item>AR[mid])
 beg=mid+1;
 else
 last=mid-1;  }
 return -1;
 }
