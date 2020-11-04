#include <stdio.h>
const int sz = 20;
void initArr(double *, int);
void outArr(double *, int);
void sortArr(double *, int);

int main()
{
    double arr[sz];
    initArr(arr,sz);
    outArr(arr,sz);
    sortArr(arr,sz);
    outArr(arr,sz);
    printf("Hello World!\n");
    return 0;
}

void initArr(double *pd, int s){
    for(int i=0;i<s;i++)
    {
        pd[i]=i;
    };
};
void outArr(double *pd, int s){
    for(int i=0;i<s; i++)
    {
        printf("%g ", pd[i]);
    };
    printf("\n");
};
void sortArr(double *pd, int s){
    double temp;
    for(int i=0;i<s-1;i++)
    {
        for(int j=s-1; j>i;j--)
        {
            if(pd[j]>pd[j-1])
            {
                temp = pd[j];
                pd[j]=pd[j-1];
                pd[j-1]=temp;
            }
        }
    }
};
