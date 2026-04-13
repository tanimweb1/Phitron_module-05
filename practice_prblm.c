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







#include<stdio.h>
int main(){

//P. First digit !

int a,digit;
scanf("%d",&a);

digit = a/1000;

if(digit%2==0){
    printf("EVEN\n");
}
else{
    printf("ODD\n");
}

return 0;
}




#include<stdio.h>
int main(){

//N. Char

char ch,new;
scanf("%c",&ch);

if(ch>='a' && ch<='z'){
    new = ch - 32;
    printf("%c",new);
}
else if(ch>='A' && ch<='Z'){
    new = ch + 32;
    printf("%c",new);
}

return 0;
}


