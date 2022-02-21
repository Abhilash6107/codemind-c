#include <stdio.h>

 int gcd(int a, int b){
     int t;
     if(a<b){
         t=a;
         a=b;
         b=t;
     }
     while(b!=0){
         int k;
         k=a;
         a=b;
         b=k%b;
     }
     
     return a;
 }

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++){
	    long n, a, b, k;
	    scanf("%ld %ld %ld %ld", &n, &a, &b, &k);
	    int c=n/a;
	    int d=n/b;
	    
	    int e=(a*b)/gcd(a,b);
	    int f=n/e;
	    int g=c+d-2*f;
	    if(g>=k){
	        printf("Win
");
	    }
	    else printf("Lose
");
	    
	}
	return 0;
}