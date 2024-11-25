#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10],b[10],c[10],temp,sum[10],chk[10],carry=0,n,i,p,chkr[20],chks[20];

    printf("---------------------Checksum programme for Two segments only------------------------\n\r");
    printf("Enter the number of bits of the each segment: ");
    scanf("%d",&n);
    printf("Enter the bits of the first segment(%d bits one after another):\n",n);
    for(i=n-1;i>=0;i--){
        scanf("%d",&a[i]);
    }
    printf("Enter the bits of the second segment(%d bits one after another):\n",n);
    for(i=n-1;i>=0;i--){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        sum[i]=(a[i]+b[i]+carry)%2;
        carry=(a[i]+b[i]+carry)/2;
    }
    printf("\n sum ....\n");
    for(i=n-1;i>=0;i--){
        printf("%d ",sum[i]);
    }
    if(carry==1){
        for(i=0;i<n;i++){
            p=(sum[i]+carry)%2;
            carry=(sum[i]+carry)/2;
            sum[i]=p;
        }
    }
    printf("\n Wrappedsum ....\n");
    for(i=0;i<n;i++){
        chk[i]=sum[i];
        printf("%d ",sum[i]);
    }
    printf("\n Checksum ....\n");
    for(i=n-1;i>=0;i--){
        if(chk[i]==1)
            chks[i]=0;
        else
            chks[i]=1;
        printf("%d ",chks[i]);
    }
return 0;
}
