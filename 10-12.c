#include <stdio.h>
void save(int m,int n,double arr[m][n]);
void avep(int m,int n,double arr[m][n],double ans[5]);
void avet(int m,int n,double arr[m][n],double ans[5]);
void maxi(int m,int n,double arr[m][n],double ans[5]);
void show(double ans[5]);
int main()
{
    double arr[3][5];
    double ans[5];
    save(3,5,arr);
    avep(3,5,arr,ans);
    avet(3,5,arr,ans);
    maxi(3,5,arr,ans);
    show(ans);
    return 0;
}
void save(int m,int n,double arr[m][n])
{
    int i,o;
    printf("Please enter the number you want to put into the array.\n");
    printf("You should enter five numbers for an subsequence,");
    printf("and we have three subsequences.\n");
    for (i=0;i<m;i++)
    {
        printf("{\n");
        for(o=0;o<n;o++)
        {
            scanf("%lf",(*(arr+i)+o));
        }
        printf("}\n");
    }
}
void avep(int m,int n,double arr[m][n],double ans[5])
{
    int i,o;
    double tot;
    for(i=0;i<m;i++)
    {
        for(o=0,tot=0;o<n;o++)
        {
            tot += *(*(arr+i)+o);
        }
        ans[i]=tot / n;
    }
}
void avet(int m,int n,double arr[m][n],double ans[5])
{
    int i,o;
    double tot=0;
    for(i=0;i<m;i++)
    {
        for(o=0;o<n;o++)
        {
            tot += *(*(arr+i)+o);
        }
    }   
    printf("%lf\n",tot);  
    ans[3]=tot / (m*n);
}

void maxi(int m,int n,double arr[m][n],double ans[5])
{
    int i,o;
    double temp,ma;
    for(i=0;i<m;i++)
    {
        for(o=0;o<n;o++)
        {
            temp=*(*(arr+i)+o);
            if(ma<temp)
                ma=temp;
            else;
        }
    }
    ans[4]=ma;
}

void show(double ans[5])
{
    int n;
    for(n=0;n<5;n++)
        printf("%lf   ",ans[n]);
}