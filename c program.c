#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void print(int n, int start, int end); 
void h(int n, int start, int end);
void h(int n, int start, int end) 
{ 
    int other; 
    if(n==1) print(n,start,end); 
    else
    { 
        other = 6 -(start+end); 
        h(n-1,start,other); 
        print(n,start,end); 
        h(n-1,other,end); 
    } 
}
void print(int n, int start, int end) 
{ 
    char s,e; if(start==1) s = 'A'; 
    else if(start==2) s='C'; 
    else s='B';
if(end==1)
e = 'A';
else if(end==2)
    e='C';
else
    e='B';
printf("Moving ring %d from %c to %c\n",n,s,e);
}
int main() {
int start=1,end=3,n;
scanf("%d",&n);
h(n,start,end);  
    return 0;
}
