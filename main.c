#include <stdio.h>
#include <stdlib.h>

int main()
{
int N;
double a;
double S;
int k;
printf("Enter N:");
scanf("%d", &N);
printf("Enter a:");
scanf("%lf", &a);
double a1=a;
S = 0;
int n = 1;
k = -1;
while(n<N){
for(int i =1; i<n+1; i++){
	k *= -1;
}
for(int i=1; i<n; i++){
	a1 *= a;
}
S+=k*a1/n;
n++;
};

  printf("Suma: %1.lf\n",S);
}
