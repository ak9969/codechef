#include<stdio.h>
int main(){
int c,f;
printf("Enter the temp. in Fahrenheit ");
scanf("%d",&f);  
c=5*(f-32)/9;
printf("The temp. in celcius is %d\n",c);
return 0;
}
