#include <stdio.h>

int main(){
    int n=0;

    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("%d * %d = %d\n",i,n,i*n);

    }

    return 0;
}