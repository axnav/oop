#include<stdio.h>
#include<string.h>
#define SIZE 20

struct books()
{
    char name[20];
    char author[20];
    float price;
} ;

void output(struct books v[],int n);

void main()
{
    struct books b[SIZE];
    int num,i;
    printf("enter the number of books :");
    scanf("%d",&num);
    printf("\n");
    for(i=0;i<num;i++)
    {
        printf("\t=:Book %d Detail:=\n",i+1);
        printf("\n Enter the book Name : \n");
        scanf("%s",b[i].name);
        printf("\n Enter the Author Name : \n");
        scanf("%s",b[i.author]);
        printf("Enter price of book");
        scanf("%f",&b[i].price);

    }
    output (b,num);

}
void output(struct bookdetails v[],int n)
{
    int i,t=1;
    for ( i = 0; i < n; i++)
    {
        printf("\n");
        printf("book no.%d\n",t);
        printf("\t book %d name is =%s \n",t,v[i].name);
         printf("\t book %d name is =%s \n",t,v[i].author);
          printf("\t book %d name is =%f \n",t,v[i].price);
          printf("\n");
    }
    
}