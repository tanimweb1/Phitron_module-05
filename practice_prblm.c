#include<stdio.h>
int main(){

    //I. Welcome for you with Conditions 

int a,b;
scanf("%d%d",&a,&b);

if(a>=b){
    printf("Yes\n");
}
else{
    printf("No\n");
}

return 0;
}





#include<stdio.h>
int main(){

//J. Multiples 

int a,b;
scanf("%d%d",&a,&b);

if(a%b==0 || b%a==0){
    printf("Multiples\n");
}
else{
    printf("No Multiples\n");
}

return 0;
}
