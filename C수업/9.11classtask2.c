#include <stdio.h>

int main(){
    int x=10,y=5;

    printf("x:%2d | y:%2d",x,y);
    printf("| x*=y+2: %2d", x*=y+2);
    printf("| x is now: %2d\n",x);
    main2();
    return 0; 
}


int main2()
{
    int a=0,b=0,c=0;

   printf("input a 3-digit number:");
    scanf("%d%d%d",&a,&b,&c);

    printf("<%d, %d, %d>",a,b,c);

    return 0; 


    
}

/*
#include <stdio.h>

int main()
{
    int a = 0, b = 0;

    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);

    int c = 0;
    if(c != 0)
        c = a / b;

    printf("%d / %d = %d\n", a, b, c);

    return 0;
}

int x = 0;
int a = 0, b = 0, c = 0;

// read a 3-digit number

// compute a, b, and c

// display the results in format <a, b, c>
*/