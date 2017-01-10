#include<stdio.h>
void main(){
	int n,a[100],i,j,f=0,r;
	printf("Enter number of elements in array ");
	scanf("%d",&n);
	printf("Ennter array elements ");
	for(i=0;i<n;i++)	
	  scanf("%d",&a[i]);
	printf("Repeated First : ");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
	    	if(a[i]==a[j]){
	       	 r=a[i];
	      	 f=1;
	      	 break;
		  }
	   }
	   if(f==1)
	     break;
}
    printf("%d",r);	       
}
