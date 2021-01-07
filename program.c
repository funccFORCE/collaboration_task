#include<stdio.h>
#include<math.h>

int sum(int ,int);
int mul(int,int);
int avg(int,int);
int apwerb_StutiKandpal(int,int);
int swap_shreyashi(int,int);
int swap2_Radhika(int,int);

int prime_ayushi(int);


int factorial(int);
int palindrome_nandini(int);


int main(){
	printf("hello funccforce members");
	
	printf("The sum of these numbers :%d",sum(10,10));
	printf("The product of these numbers :%d",mul(10,10));
	printf("Remainder will be :%d",mod(10,2));
	printf("average is:%d",avg(5,5));

	printf("The number given is :",prime_ayushi(5));

	printf("Factorial of 5 is",factorial(5));
	printf("Check whether the number is palindrome or not");
	palindrome_nandini(1221);

		
}

int sum(int a, int b)//defining function based in declaration
{
    int result=a+b;//find sum of two numbers
    //and result of sum stored in result variable
    return result;//returning result
	
}
	
int mul(int a, int b)
{
	int result =a*b;
	return result;
}


int apwerb_StutiKandpal(int a, int b){
	return pow(a,b);
}

int mod(int a, int b)
{
	int result =a%b;
	return result;

}

int avg(int a,int b)
{
	return ((a+b)/2);
}

int swap_shreyashi(int a, int b)
{    
	printf("Before swap a=%d b=%d",a,b);      
	a=a+b;   
	b=a-b; 
	a=a-b; 
	printf("\nAfter swap a=%d b=%d",a,b);    
	return 0;  
} 

int swap2_Radhika(int a, int b)
{    
	printf("Before swap a=%d b=%d",a,b);      
	int temp=a;   
	a=b; 
	b=temp; 
	printf("\nAfter swap a=%d b=%d",a,b);    
	return 0;  
} 

float SI_Priyanshu(float p,int t,float r) //time should be in months
{
	return((p*r*t)/100);//returning simple interst
}

int evenodd_ananya()
{
	int no;
	if(no%2==0)
		printf("num is even");
	else
		printf("num is odd");
	return 0;

}


int prime_ayushi(int a)
{
	int i,j=0;
	for (i=2 ;i<a ;i++)
	{
		if (a%i==0)
		{
			j=1;
			break;
                }
	}
	if (j==0)
		printf(" Prime");
	else
		printf(" Not Prime");
	return 0;
}	

int factorial(int n){
	if(n==0 or n==1)return 1;
	
	else return (n*factorial(n-1));
}






int fibonacci()
	{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) 
	{
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}


int palindrome_nandini(int x)
{
	int rev=0,n,r;
	n=x;
	while(x>0)
	{
		r=x%10;
		rev=rev*10+r;
		x=x/10;
	}
	if (rev==n)
	{
		printf("yes ,it is a palindrome");
	}
	else{
		printf("no,it is not");
	}
	return 0;
}