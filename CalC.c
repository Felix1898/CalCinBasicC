#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#define SIZE 200
#define CONV 3.14159265/180
int N=3;
struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};
int flag=0;
struct Im
{
    float r;
    float im;
    float angle;
    float mag;
};
float mem=-9999999;
void memsee()
{
    if(mem!=-9999999)
    {
    printf("\n LAST VALUE : %f Enter m to go to menu! ",mem);
    char ch=getchar();
    if(ch=='m')
    {
        main();
    }
    }
}
struct Stack* createStack( unsigned capacity )
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));

    if (!stack)
        return NULL;

    stack->top = -1;
    stack->capacity = capacity;

    stack->array = (int*) malloc(stack->capacity * sizeof(int));

    if (!stack->array)
        return NULL;
    return stack;
}
int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}
char peek(struct Stack* stack)
{
    return stack->array[stack->top];
}
char pop(struct Stack* stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return '$';
}
void push(struct Stack* stack, char op)
{
    stack->array[++stack->top] = op;
}
int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z'||(ch>='0'&&ch<='9')||(ch==' ')||(ch==',')||(ch=='.')) || (ch >= 'A' && ch <= 'Z');
}
int Prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;

    case '^':
        return 3;
    }
    return -1;
}
void printer(int a[][75],int x,int y)
{
    int i,j;
    double f=0;
    for(i=0;i<x;i++)
{

    for(j=0;j<y;j++)
    {
f=0;
        if(a[i][j]==0)

            printf(" ");

        else if(a[i][j]==2&&j!=0&&j!=74)
            printf("-");
            else if(a[i][j]==1)
            {
              if(flag==0){  for(f=0;f<3600000;f++);}
                printf("{");
                }
    }

printf("\n");
}
}
void printer2(int a[][78],int x,int y)
{
    int i,j,f=0;

    for(i=0;i<x;i++)
{
printf("\n");
    for(j=0;j<y;j++)
    {
f=0;
        if(a[i][j]==0)

            printf(" ");

        else if(a[i][j]==2&&j!=0&&j!=74)
            printf("-");
            else if(a[i][j]==1)
            {
               if(flag==0) { for(f=0;f<3600000;f++);}
                printf("#");
            }
    }


}
}
float menu()
{
    float g=0;
system("cls");
printf("\n");
int x[10][75]={{0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
{0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,0,0,0,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,2},
{0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,2},
{0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,2},
{0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,0,0,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,2},
{0,0,0,0,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,2},
{0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,2},
{0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,2},
{0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,1,1,1,1,1,0,1,0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,2},
{0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}};
int y[4][78]={{0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1,1,0,1,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,0,1,1,1,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,1,1,1,0,1,0,0,0,1,0,0,1,1,1,0,1,1,1,0,1,1,1,1,0,1,1,1,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,1,1,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
printer(x,10,75);
printer2(y,4,78);
printf("\n");
  printf("\n \n -> TO USE BASIC(+,-,*,/,^) CALCULATOR PRESS 0");
printf("\n \n -> TO USE TRIG./HYPERBOLIC/EXPOTENTIAL/LOGARITHM FUNCTIONS PRESS 1");
printf("\n \n -> TO SOLVE SYSTEM OF LINEAR EQUATIONS IN 2 VARIABLES PRESS 2");
printf("\n \n -> TO SOLVE QUADRATIC EQUATION / SINGLE VARIABLE EQN , PRESS 3");
printf("\n \n -> FOR DEALING WITH COMPLEX NUMBERS ENTER 4");
printf("\n \n -> TO SEE WHAT WAS LAST CALCULATED(ONLY REALS) ENTER 5");
printf("\n \n -> TO DEAL WITH MATRICES PRESS 6");
printf("\n \n -> TO GENERATE INRANGE RANDOM NUMBERS, PRESS 7");
printf("\n \n -> TO EXIT ENTER -1 \n");
printf("\n                              Created By Felix using Basic C <2017> \n");
scanf("%f",&g);
flag++;
return g;
   }

int infixToPostfix(char* exp)
{
    int i, k;

    struct Stack* stack = createStack(strlen(exp));
    if(!stack)
        return -1 ;

    for (i = 0, k = -1; exp[i]; ++i)
    {
        if (isOperand(exp[i]))
            exp[++k] = exp[i];

        else if (exp[i] == '(')
            push(stack, exp[i]);


        else if (exp[i] == ')')
        {
            while (!isEmpty(stack) && peek(stack) != '(')
                exp[++k] = pop(stack);
            if (!isEmpty(stack) && peek(stack) != '(')
                return -1;
            else
                pop(stack);
        }
        else
        {
            while (!isEmpty(stack) && Prec(exp[i]) <= Prec(peek(stack)))
                exp[++k] = pop(stack);
            push(stack, exp[i]);
        }

    }

    while (!isEmpty(stack))
        exp[++k] = pop(stack );

    exp[++k] = '\0';
}
float s[SIZE];
int top=-1;
void push1(float x)
{
    top++;
    s[top]=x;
}
float pop1()
{
float x=s[top];
top--;
return x;
}
float find(char* fix,int j)
{
    float x=atof(fix);
    return x;
}
float doshit(char* pofx)
{
    float num[strlen(pofx)];
    char temp[10];
    int k=0;
    int i=0;
    int j;
    int a;
    while(i<strlen(pofx))
{
    if(isdigit(pofx[i]))
    { j=0;

        while(j<10&&pofx[i]!=',')
        {
            temp[j++]=pofx[i++];
        }
        char fix[j];
        for(a=0;a<j;a++)
{
       fix[a]=temp[a];
            temp[a]='0';
    }
        num[k++]=find(fix,j);
           push1(num[k-1]);
    }
    else if(pofx[i]!=','&&!isdigit(pofx[i]))
    {
        float x;
        float y;
        x=pop1();
        y=pop1();
        char ch=pofx[i];
        switch(ch)
        {
            case '+': push1(x+y); break;
            case '-': push1(y-x); break;
            case '*': push1(x*y); break;
            case '/': push1(y/x); break;
            case '^': push1(pow(y,x)); break;
            default:
                printf("\n Error");
        }

    }
    i++;
}
float z=pop1();
return z;
}
void matriceprod()
{
     int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];

  printf("Enter the number of rows and columns of first matrix (max 10 x 10)\n");
  scanf("%d%d", &m, &n);
  printf("Enter the elements of first matrix\n");

  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);

  printf("Enter the number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);

  if (n != p)
    printf("Matrices with entered orders can't be multiplied with each other.(max 10 x 10)\n");
  else
  {
    printf("Enter the elements of second matrix\n");

    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }

        multiply[c][d] = sum;
        sum = 0;
      }
    }

    printf("Product of entered matrices:-\n");

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);

      printf("\n");
    }
  }
}
void matriceadd()
{
int r,c,i,j;
int f=0,g=0;
printf("\n Enter the size of the matrices row and column separated by a space : \n");
scanf("%d",&r);
scanf("%d",&c);
int a[r][c];
int o[r][c];
do
{
if(f==0)
{
printf("\n Enter the first matrix : ");
for(i=0;i<r;i++)
{

    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}

}
printf("\n Enter the second matrix : ");
for(i=0;i<r;i++)
{

    for(j=0;j<c;j++)
    {
        if(f==0)
        {
        o[i][j]=a[i][j];
        }
        scanf("%d",&a[i][j]);
        o[i][j]=o[i][j]+a[i][j];
    }
}
printf("\n Result MATRIX : \n");
for(i=0;i<r;i++)
{

    for(j=0;j<c;j++)
    {
        printf(" %d ",o[i][j]);
    }
    printf("\n");

}
f++;
printf("\n To continue calculation enter 0 or to continue from here enter any number :\n");
scanf("%d",&g);
}while(!g);

}
void eigenval()
{
float a[2][2];
int i,j;
printf("\n Enter the 2 x 2 matrix : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            scanf("%f",&a[i][j]);
    }
    float p= (a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
    float s=(a[0][0]+a[1][1]);
    float res1 = (s+sqrt(s*s+4*s*p))/(2);
    float res2=(-res1)+(s);
    printf("\n Eigenvalues are : %f & %f ",res1,res2);
    float tmp1=a[0][0];
    float tmp2=a[1][1];
    a[0][0]=a[0][0]-res1;
    a[1][1]=a[1][1]-res1;
    printf("\n First Eigen Vector : \n ");

    for(i=0;i<2;i++)
{

    for(j=0;j<2;j++)
    {
        printf("%d",a[i][j]);
    }
    printf("\n");
}
a[0][0]=tmp1-res2;
a[1][1]=tmp2-res2;
printf("\n Second Eigen Vector : ");
       for(i=0;i<2;i++)
{

    for(j=0;j<2;j++)
    {
        printf("%d",a[i][j]);
    }
    printf("\n");
}

}
void cof(int mat[N][N], int temp[N][N], int p, int q, int n)
{
    int i = 0, j = 0;
    int row,col;
     for ( row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = mat[row][col];
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }}}
}
long det(int mat[N][N], int n)
{

    long D = 0;

    if (n == 1)
        return mat[0][0];
 int temp[N][N];
 int s= 1;
 int f;
    for (f = 0; f < n; f++)
    {
        cof(mat, temp, 0, f, n);
        D += s * mat[0][f] * det(temp, n - 1);
         s = -s;

         }
 return D;
}
void detdrive()
{
int i,j;
    printf("\n Enter the size of the matrix ! \n :");
    scanf("%d",&N);
    int mat[N][N];
    printf("\n Enter the matrix : \n ");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&mat[i][j]);
    }
    }
    printf("\n DETERMINANT IS : %ld",det(mat,N));

}
void matricemode()
{
    int f;
printf("\n To multiply two matrices, press 1");
printf("\n To add two matrices, press 2");
printf("\n To find eigenvalues of a 2 x 2 matrix, press 3 ");
printf("\n To find determinant of any square matrix of order N, press 4 ");
scanf("%d",&f);
switch(f)
{
case 1:
    matriceprod();
    break;
case 2:
    matriceadd();
    break;
case 3:
    eigenval();
case 4:
    detdrive();
default:
    break;
}
  printf("\n Enter any character to go  back to menu! ");
  char ch=getchar();
  ch=getchar();
  main();
}
void quad()
{
    float a1,b1,c1,res1,res2;
    int f=1;
     printf("\n Enter the coefficients of first equation a1,b1 &c1 in a1x^2 + b1x + c1 =0 : ");
    scanf("%f",&a1);  scanf("%f",&b1);  scanf("%f",&c1);
    float res;
    if(a1!=0&&(b1*b1>=4*a1*c1))
    {
    res1=(-b1/(2*a1))+sqrt(b1*b1-4*a1*c1)/(2*a1);
    res2=-res1-(b1/a1);
    }
    else if(a1==0&&b1!=0)
    {
        f=0;
      res1= (-c1/b1);
          printf("\n Result : %f",res1 );

    }
    else if(a1==0&&b1==0&&c1!=0)
    {
       f=0;
        printf("ERROR ");
    }
    else
    {
        f=0;
        printf("\n IDENTITY! ");
    }
    if(f)
    printf("\n Result : %f & %f , Enter any character to go back to menu! : ",res1,res2 );
    char ch=getchar();
    ch=getchar();
    main();
}
void pol2xy(struct Im *x)
{
    x->r=x->mag*cos(x->angle);
    x->im=x->mag*(sin(x->angle));

}
void xy2pol(struct Im *x)
{
   x->angle=atan((x->r)/(x->im));
   x->mag=sqrt((x->r*x->r)+(x->im*x->im));

}
void C()
{
    int b=0;
struct Im C1,C2,Ct,Cr;
char ch;
int f=0;
do
{
    if(f==0)
    {
    printf("\n Enter the first complex number --> real then imaginary part separated by space : ");
       scanf("%f",&C1.r);
       scanf("%f",&C1.im);
        printf("\n \n Enter the second complex number --> real then imaginary part separated by space : ");
    scanf("%f",&C2.r);
       scanf("%f",&C2.im);
       f=1;
    }
    else
    {
        printf("\n \n Enter the complex number which is the other operand with the last result --> real then imaginary part separated by space : ");
       scanf("%f",&C1.r);
       scanf("%f",&C1.im);
       C2=Ct;
    }
     C1.mag=sqrt(C1.r*C1.r+C1.im*C1.im);
     C2.mag=sqrt(C2.r*C2.r + C2.im*C2.im);
     C1.angle=atan(C1.im/C1.r);
     C2.angle=atan(C2.im/C2.r);
    printf("\n Enter operation : (+,-,*,/) :");
    fflush(stdin);
    ch=getchar();
    if(ch=='+')
    {
        Cr.r=C1.r+C2.r;
        Cr.im=C1.im+C2.im;
        xy2pol(&Cr);
        Ct=Cr;
    }
     else  if(ch=='-')
    {
        Cr.r=C1.r-C2.r;
        Cr.im=C1.im-C2.im;
        xy2pol(&Cr);
        Ct=Cr;
    }
    else if(ch=='/')
    {
        Cr.mag=C1.mag/C2.mag;
        Cr.angle=C1.angle-C1.angle;
        pol2xy(&Cr);
        Ct=Cr;
    }
    else if(ch=='*')
    {
        Cr.mag=C1.mag*C2.mag;
        Cr.angle=C1.angle+C1.angle;
        pol2xy(&Cr);
Ct=Cr;
    }
    printf("\n Result : ");
    printf("\n %f + i%f",Cr.r,Cr.im);
    printf("\n POLAR : %f < %f > ",(Cr.mag),(Cr.angle*180/3.14159265));
    b=0;
    printf("Enter 1 to continue");
scanf("%d",&b);
}while(b==1);
printf("\n Enter any char to go to menu! ");
char ch2=getchar();
ch2=getchar();
main();
}
void convbase()
{
   int f=0;
   int sum;
   int s;
    int b;
    int p;
     int i;
     int q;
   do
   {

    i=0;
    q=1;
       printf("\n Enter the base (p) : ");
    scanf("%d",&p);
    printf("\n Enter in base p : ");
    scanf("%d",&s);
    printf("\n Enter which base you want to convert it to? ");
    scanf("%d",&b);
    sum=0;
    while(s!=0)
    {
        i=s%b;
        sum=(sum)+(i*q);
        q=q*p;
        s=s/b;
    }
    printf("\n RESULT IN BASE %d is %d \n",b,sum);
    printf("\n For another case press 1 else press any other number : \n");
    scanf("%d",&f);
   }while(f==1);
    printf("\n REDIRECTING TO MENU............ \n");
}
void genran()
{
    int U=0,L=0;
    char ch;
    time_t t;
    int h;
int res;
do
{
printf("\n Enter the range : In format--> 'Lower Limit-Upper Limit:' \n");
   fflush(stdin);
   U=0; L=0;
while(ch!='-')
{

    ch=getchar();
    if(isdigit(ch))
    L=10*L+(ch-'0');
}
do
{

        ch=getchar();
    if(isdigit(ch))
    U=10*U+(ch-'0');
}while(ch!='\n');
printf("\n You entered %d-%d ",L,U);
 srand((unsigned) time(&t));
 res=L+(rand()%(U-L+1));
 printf("\n Random no: %d",res);
 printf("\n To generate another time press 1 else press any other number.. \n");
 scanf("%d",&h);
 if(h!=1)
    break;
}while(1);
}
void solve2()
{
    float a1,b1,c1,a2,b2,c2,x,y;
    int e;
    do
    {
    printf("\n Enter the coefficients of first equation a1,b1 &c1 in a1x+b1y=c1: ");
    scanf("%f",&a1);  scanf("%f",&b1);  scanf("%f",&c1);
       printf("\n Enter the coefficients of first equation a2,b2 &c2 in a2x+b2y=c2: ");
    scanf("%f",&a2);  scanf("%f",&b2);  scanf("%f",&c2);
    int f=1;
   if((a1/b1)==(a2/b2))
   {
       printf("\n Inconsistent or Inf Solutions!!");
       f=0;
   }
   else if(b1&&b2!=0)
    {

    x=((c1/b1)-(c2/b2))/((a1/b1)-(a2/b2));
    y=(c1)-(a1)*x;

    }
    else if(b1==0&&b2!=0)
    {
     x=c1/a1;
    y=(c2-(a2*c1/a1))/b2;
    }
    else if(b2==0&&b1!=0)
    {
        x=c2/a2;
        y=(c1-(a1*c2/a2))/b1;
    }
    else
    {
        printf("\n No unique solution! ");
    }
if(f)
{
        printf(" x=%f y=%f ",x,y);
}
e=0;
printf("\n To solve another set press 1");
scanf("%d",&e);
    }while(e);
    printf("\n Press any key to go to menu... ");

    char ch=getchar();
    ch=getchar();
    main();
}
void fns()
{
    char inp1[200];
     float x,y;
    system("cls");
    printf("\n Welcome to special function calculator: ");
printf("\n Enter s,t,c,as,ac,at,sh,ch,th,e(for e power x) followed by the value of be operated upon : ");
printf("\n s: sine ; c: cos; t:tan ; a followed by c,t or s signifies their inverse and h signifies respect. hyperbolic functions ; log for logarithm:");
do{
printf("\n Enter the operation s,t,at,ac,as,sh,th,ch or log OR quit to go back to menu : ");
gets(inp1);
if(strcmp(inp1,"quit"))
{
printf("\n Enter the value ( in degrees for angle )(x)  : ");
scanf("%f",&x);
x=x*CONV;
}
if(strcmp(inp1,"c")==0)
{
    x=cos(x);
    printf("\n Result : %f",x);
    mem=x;

}
else if(strcmp(inp1,"s")==0)
{
    x=sin(x);
    printf("\n Result : %f",x);
    mem=x;

}
else if(strcmp(inp1,"t")==0)
{
    x=tan(x);
    printf("\n Result : %f",x);
    mem=x;

}
else if(strcmp(inp1,"as")==0)
{
    x=asin(x);
    printf("\n Result : %f",x);
    mem=x;

}
else if(strcmp(inp1,"at")==0)
{
    x=atan(x);
    printf("\n Result : %f",x);
    mem=x;

}
else if(strcmp(inp1,"ac")==0)
{
    x=acos(x);
    printf("\n Result : %f",x);
    mem=x;

}
else if(strcmp(inp1,"th")==0)
{
    x=tanh(x);
    printf("\n Result : %f",x);
    mem=x;

}else if(strcmp(inp1,"ch")==0)
{
    x=cosh(x);
    printf("\n Result : %f",x);
    mem=x;
}else if(strcmp(inp1,"sh")==0)
{
    x=sinh(x);
    printf("\n Result : %f",x);
    mem=x;
}
else if(strcmp(inp1,"e")==0)
{
    x=pow( 2.718282,x);
    printf("\n Result :%f",x);
    mem=x;
}
else if(strcmp(inp1,"log")==0)
{
   printf("\n Enter base : ");
   scanf("%f",&y);
   if(y!=0)
   {
    x=log(x)/log(y);
    printf("\n Result : %f",x);
    mem=x;
   }
}
else if(strcmp(inp1,"quit")==0)
 {
     break;
 }

 }while(1);
main();
}
int main()
{
    int d;
    d=menu();
 fflush(stdin);
    if(d==0)
{
    fflush(stdin);
    int i,n1;
    char ch;
    int m=0;
    float p=0;
    do
    {
    int k=0;
    char inp[200];
    printf("\n Enter the Expression : \n (for continued expression write the operation which to be done on\n previous result followed by the expression of the operand) :");
    gets(inp);
   if(strcmp(inp,"quit")!=0){ if(m!=0)
    {
        ch=inp[0];
        for(n1=0;n1<199;n1++)
        {
            inp[n1]=inp[n1+1];
        }
        printf("\n %c character is the operand . ",ch);
    }
   }
    if(strcmp(inp,"quit")!=0)
    {
    char expf[200];
    for(i=0;i<strlen(inp);i++)
    {
        if(isdigit(inp[i])||inp[i]=='.')
        {
            expf[k++]=inp[i];
        }
        else
        {
            expf[k++]=',';
            expf[k++]=inp[i];
            expf[k++]=',';
        }
    }
    expf[k++]=',';
    expf[k]='\0';
   printf("\n");
   infixToPostfix(expf);
   if(m!=0)
   {
   if(ch=='+')
p=p+doshit(expf);
else if(ch=='-')
    p=p-doshit(expf);
else if(ch=='/')
    p=p/doshit(expf);
else if(ch=='*')
    p=p*doshit(expf);
else if(ch=='^')
    p=pow(p,doshit(expf));
else
    printf("\n Error");
   }
   else
    p=p+doshit(expf);

    printf("\n Result : %f",p);
    mem=p;
    m++;
    }
    else
    {
        system("cls");
        main();
        break;
    }

    }
    while(1);
}
    else if(d==1)
    fns();
    else if(d==2)
        solve2();
        else if(d==3)
            quad();
            else if(d==4)
                C();
                else if(d==5)
                    memsee();
                    else if(d==6)
                        matricemode();
                        else if(d==7)
                            genran();
                            else if(d==8)
                                convbase();
    else if(d==-1)
    {
        return 0;
    }
    return 0;
}
