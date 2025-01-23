/* 
        create a program to sort an array having struct
*/

 #include <stdio.h>
typedef struct {
	int roll_number;
	char name[30];
	int age;
	char gender;
}s1;
int main( )
{
		int n,i,j;
		s1 temp;
		printf("Enter total number of students : ");	
		scanf("%d",&n);

		s1 student[n];
		for(i=0;i<n;i++)
		{
			printf("enter the rollnumber , name , age , gender respectively for %d stdents : ",i+1);
			scanf("%d%s%d%s",&student[i].roll_number,&student[i].name,&student[i].age,&student[i].gender);
		}

		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if( student[i].roll_number > student[j].roll_number)
				{
					temp=student[i];
					student[i]=student[j];
					student[j]=temp;
				}
			}

		}
		for(i=0;i<n;i++)
		{
			printf("\t%3d \t %3s \n" ,student[i].roll_number,student[i].name);
		}
		return 0;
}
// /* 
//         create a program to sort an array 
// */

//  #include <stdio.h>

// int main( )
// {
// 		int n[5],i,j,temp;
// 		printf("enter age of students : ");
// 		for(i=0;i<5;i++)
// 		{
// 			scanf("%d",&n[i]);
// 		}

// 		for(i=0;i<5-1;i++)
// 		{
// 			for(j=i+1;j<5;j++)
// 			{
// 				if(n[i]>n[j])
// 				{
// 					temp=n[i];
// 					n[i]=n[j];
// 					n[j]=temp;
// 				}
// 			}

// 		}
// 		for(i=0;i<5;i++)
// 		{
// 			printf("%3d",n[i]);
// 		}
// 		return 0;
// }
// /* 
//         create a program to demonstrate array of structure and pointer of structures
// */

//  #include <stdio.h>

// int main(int argc,char * argv[] )
// {
// 		FILE *fp;
// 		char n;
		
// 		if(argc !=2)
// 		{
// 			printf("error");
// 			return 1;
// 		}
// 		fp=fopen(argv[1],"r");
// 		if(fp==NULL)
// 		{
// 			printf("faild to open");
// 			return 1;
// 		}
		
// 		while(n = fgetc(fp) != EOF)
// 			{
// 				printf("%s",n);
// 			}

		
// 			fclose(fp);
// 		return 0;
// }

// /* 
//         create a program to demonstrate array of structure and pointer of structures
// */

//  #include <stdio.h>
// 	typedef struct 
//  {
// 	char name[30];
//   	int age;
//    int roll_number;
//  }s1;

// int main( )
// {

//   s1 person [5];


//   for(int i=0;i<5;i++)
//   {
// 	printf("Enter the name,age,roll number of %d student : ",i+1);
	
// 	 	scanf("%s%d%d",&person[i].name,&person[i].age,&person[i].roll_number);

//   } 
//   for(int i=0;i<5;i++)
//   {
// 	 	printf("%s , %d , %d \n",person[i].name,person[i].age,person[i].roll_number);
//   }

// printf("array of pointers\n");

// s1 *ptr[5];

// 	for(int i=0;i<5;i++){
// 		ptr[i]=&person[i];
// 	}

// 	for(int i=0;i<5;i++)
// 	{
// 		printf("\t%s , %d , %d\n",ptr[i]->name,ptr[i]->age,ptr[i]->roll_number);
// 	}


// 		return 0;
// }

// /* 
//         create a program to demonstrate structure in user defined function and demonstrate typedef
// */


//  #include <stdio.h>
// void myfunction()
//  {
// 	typedef struct 
//  {
// 	char name[30];
//  	unsigned	int age;
// 	unsigned int roll_number;
//  }s1;
  
//   s1 person = {.name="priyanshu",.age=18,.roll_number=54222};
//    s1 person2 ={ "papu",19,203};

//   printf("%s %u %u\n",person.name,person.age,person.roll_number);
//   printf("%s %u %u",person2.name,person2.age,person2.roll_number);
//  }
// int main( )
// {
// 		myfunction();
// 		return 0;
// }

// /* 
//         create a program to demonstrate predefined and user defined function 
// */


//  #include <stdio.h>
//  #include<math.h>
//  int square(int n)
//  {
// 	int a=sqrt(n);
// 	return a;
//  }
// int main( )
// {
// 	int sq=square(25);
// 	printf("%d",sq);
// 		return 0;
// }

// /* 
//         create a program to demonstrate command line arguments

// */


//  #include <stdio.h>
 
// int main( int argc, char *argv[])
// {
// 	for(int i=1;i<argc;i++)
// 	{
// 		printf("%s \n",argv[i]);
// 	}
// 		return 0;
// }

// /* 
//         create a program to demonstrate dynamic allocation of memory

// */


//  #include <stdio.h>
//  #include<stdlib.h>
 
// int main()
// {
// 	int n,*array,sum=0;
	
// 	printf("enter a size of array : ");
// 	scanf("%d",&n);

// 	array= (int *)malloc(n*4);
// 	if( array == NULL)
// 	{
// 		printf("memory is not allocated\n");
// 		return 1;
// 	}
// 	printf("enter  %d numbers for an array: ",n);
// 	for(int i=0;i<n;i++)
// 	{
// 		scanf("%d",&array[i]);
// 		sum=sum+array[i];
// 	}

// 	printf("sum : %d",sum);
// 	free(array);
	
// 		return 0;
// }

// /* 
//         create a program to demonstrate arrow operator

// */


//  #include <stdio.h>
 
//  typedef struct 
//  {
// 	int age;
// 	char name[30];
//  } s1;
// int main()
// {
// 	s1 person ={.age=18,.name="priyanshu"};
// 	s1 *ptr;
// 	ptr=&person;
// 	printf("%d , %s\n",person.age,person.name);
// 	printf("%s",ptr->name);
// 		return 0;
// }

// /* 
//         create a program to demonstrate fclose() and fcloseall()

// */


//  #include <stdio.h>
 
// int main()
// {
// 	FILE *fp1;
// 	FILE *fp2;
// 	FILE *fp3;
// 	fp1=fopen("data.txt","w");
// 	fp2=fopen("data.txt1","w");
// 	fp3=fopen("data.txt2","w");
// 	if( fp1 == NULL || fp2 == NULL || fp3 == NULL)
// 	{
// 		printf("error file opeing!!");
// 		return 1;
// 	}
// 	fprintf(fp1,"Hello its inside fp1\n");
// 	fprintf(fp2,"Hello its inside fp2\n");
// 	fprintf(fp3,"Hello its inside fp3\n");
// 	fclose(fp1);

// 	//printf("closing all files\n");
// 	fcloseall();
// 	printf("all files are close");
// 		return 0;
// }

// /* 
//         create a program to demonstrate file handling

// */


//  #include <stdio.h>
 
// int main()
// {
// 	char name[30];
// 	FILE *fp;
	
// 	fp=fopen("data.txt","w");
// 	if( fp == NULL)
// 	{
// 		printf("Error File opening !!\n");
// 		return 1;
// 	}
// 	fprintf(fp,"hello world");
// 	fclose(fp);

// 	fp=fopen("data.txt","r");
// 	if( fp == NULL )
// 	{
// 		printf("error in file opening!!!");
// 	}
// 	while(fgets(name,sizeof(name),fp))
// 	{
// 			printf("%s",name);
// 	}
// 	fclose(fp);
// 		return 0;
// }

// /* 
//         create a program to demonstrate void pointer and function pointer

// */


//  #include <stdio.h>
 

// int  add( int n, int x)
// {
// 	return n + x;

// }
// int main()
// {
// 	int num=50,sum;
// 	int (*function)(int , int )=add;
// 	int *ptr=&num;
// 	printf(" %d\n",*ptr);
// 	printf(" %d\n",function(9,1));
// 		return 0;
// }
/* 
        create a program to demonstrate void pointer and function pointer

*/


//  #include <stdio.h>
 

// int  add( int n, int x)
// {
// 	return n + x;

// }
// int main()
// {
// 	int num=50,sum;
// 	int (*function)(int , int )=add;
// 	int *ptr=&num;
// 	printf(" %d\n",*ptr);
// 	printf(" %d\n",function(9,1));
// 		return 0;
// }

// /* 
//         create a program to demonstrate void pointer and function pointer

// */


//  #include <stdio.h>
 

// int  add( int n, int x)
// {
// 	return n + x;

// }
// int main()
// {
// 	int num=50,sum;
// 	int (*function)(int , int )=add;
// 	int *ptr=&num;
// 	printf(" %d\n",*ptr);
// 	printf(" %d\n",function(9,1));
// 		return 0;
// }

// /* 
//         create a program to demonstrate call by address or pointer ( real question is reference)

// */


//  #include <stdio.h>
 
//  void array(int *n);

// int main()
// {
// 	int num=50;
// 	printf("original value : %d\n",num);
// 	array(&num);
// 	printf("modified value : %d",num);
// 	return 0;
// }

// void array( int *n)
// {
// 	*n=200;

// }

// /* 
//         create a program to calculate square of any number using your own user defined function

// */


//  #include <stdio.h>
//  int square(int n);

// int main()
// {
// 	int n;
// 	printf("which number of square do you want to calculate : ");
// 	scanf("%d",&n);

// 	printf("squares of %d is %d\n",n,square(n));

// 	return 0;
// }

// int square(int n)
// {
// 	return n*n;
// }
// /* 
//         create a program to demonstrate pointer array

// */


//  #include <stdio.h>

// int main()
// {
// 	int *name[3];
// 	int num[3];
// 	printf("enter 3 numbers : ");
// 	for(int i=0;i<3;i++)
// 	{
// 		scanf("%d",&num[i]);
// 	}
// 	for(int i=0;i<3;i++) 
// 	{
// 		name[i]=&num[i];
// 		printf("%d\n",*name[i]);
// 	}

// 	return 0;
// }


// /* 
//         create a program to demonstrate null pointer or zero pointer

// */


//  #include <stdio.h>

// int main()
// {
// 	int *ptr=NULL;
// 	printf("%d\n",ptr);

	


	
// 	return 0;
// }

// /* 
//         create a program to demonstrate all legal arthemitcs with pointers

// */


//  #include <stdio.h>
// #include<stdlib.h>
// int main()
// {
// 	int *ptr;
// 	ptr= (int *)malloc(sizeof(int));
// 	if ( NULL == ptr)
// 	{
// 		printf("memory allocation failed");
// 		return 1;
// 	}
// 	*ptr=45;
// 	printf("%d\n",*ptr);
// 	free(ptr);
	


	
// 	return 0;
// }

// /* 
//         create a program to demonstrate all legal arthemitcs with pointers

// */


//  #include <stdio.h>

// int main()
// {
// 	int num[]={1,2,3,4,5};
// 	int *ptr,*q;
// 	ptr=num;
// 	ptr++;
// 	printf("%d\n",*ptr);
// 	ptr -=1;
// 	printf("%d\n",*ptr);

// 	ptr +=2;
// 	printf("%d\n",*ptr);

// 	ptr--;
// 	printf("%d\n",*ptr);



	
// 	return 0;
// }

// /* 
//         create a function to pass array

// */


//  #include <stdio.h>

// int *myArray()
// {
// 	static int a[5]={1,2,3,4,5};
	
// 	return a;
// }
// int main()
// {
// 	int *num=myArray();

// 	for(int i=0;i< 5;i++)
// 	printf("%d",num[i]);
	
// 	return 0;
// }

// /* 
//         create a function to pass array

// */


//  #include <stdio.h>

// int *myArray()
// {
// 	static int a[5]={1,2,3,4,5};
	
// 	return a;
// }
// int main()
// {
// 	int *num=myArray();

// 	for(int i=0;i< 5;i++)
// 	printf("%d",num[i]);
	
// 	return 0;
// }

// /* 
//         create a program to make your own strlen function

// */


//  #include <stdio.h>

// int str(const char *str)
// {
// 	int length;
// 	while(str[length] != '\0')
// 	{
// 		length++;
// 	}
// 	return length-1;
// }
// int main()
// {
// 	char name[30];
// 	int length;
// 	printf("Enter your name :  ");
// 	fgets(name,sizeof(name),stdin);

// 	length=str(name);
// 	printf("%d",length);
	
// 	return 0;
// }

// /* 
//         create a program to two print 3*3 matrix 

// */


//  #include <stdio.h>


// int main()
// {
// 	int sum=0,k=0,i=0,j=0,a[3][3],b[3][3],product[3][3];
	
// 	printf("Enter numbers for 1st  3*3 matrix :  ");
// 	for( i=0;i<3;i++)
// 	{
// 		for(j=0;j<3;j++)
// 		{
// 		scanf("%d",&a[i][j]);

// 		}
// 	}
	
// 	printf("Enter numbers for 2nd  3*3 matrix :  ");
// 	for( i=0;i<3;i++)
// 	{
// 		for(j=0;j<3;j++)
// 		{
// 		scanf("%d",&b[i][j]);

// 		}
// 	}

// 	for( i = 0 ; i <3;i++)
// 	{
// 			for(j=0;j<3;j++)
// 			{
// 				for(k=0;k<3;k++)
// 				{
// 					sum=sum+a[i][k]+b[k][j];
// 				}

// 				product[i][j]=sum;
// 				sum=0;
// 			}

// 	}

// 	for( i=0;i<3;i++)
// 	{
// 		for(j=0;j<3;j++)
// 		{
// 				printf("%3d",product[i][j]);

// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

// /* 
//         create a program to two find second largest and smallest element 

// */


//  #include <stdio.h>


// int main()
// {
// 	int n,small,large,largest,smallest;
// 	printf("enter size of an array : ");
// 	scanf("%d",&n);

// 	int num[n];
// 	printf("Enter %d numbers :  ",n);
// 	for(int i=0;i<n;i++)
// 	{
// 		scanf("%d",&num[i]);
// 		smallest=num[0];
// 		largest=num[0];
	
// 	}

// 	for( int i = 1 ; i <n;i++)
// 	{
// 			if( num[i] > largest)
// 			{
// 				large=largest;
// 				largest=num[i];
// 			}
// 			else if( num[i] > large  && num[i]  != largest )
// 			{
// 				large=num[i];
// 			}
		
// 			if( smallest < num[i])
// 			{
// 				small=smallest;
// 				smallest=num[i];
// 			}
// 			else if( num[i] < small  && num[i] != smallest )
// 			{
// 				small=num[i];
// 			}
		

// 	}

// 	printf("large value : %d\n ",large);
// 	printf("small : %d\n ",small);
// 	return 0;
// }

/* 
        create a program to change your name in upper case 

*/


//  #include <stdio.h>
// #include<ctype.h>

// int main()
// {
	
// 	char b[30];

// 	printf("enter your name : ");
// 			fgets(b,sizeof(b),stdin);
		
// 		for(int i=0;i<b[i] !='\0';i++)
// 		{
		
// 			b[i]=toupper(b[i]);

// 		}
// 		printf("your name : %s\n",b);
		
// 	return 0;
// }
// /* 
//         create a program to sort the age of your classmates which are more than 30 in asscending order

// */


//  #include <stdio.h>

// int main()
// {
	
// 	int b[5],a,reverse;

// 	printf("enter the age of students : ");
// 	//for(int i=0;i<5;i++)
// 	//{
// 		for(int j=0;j<5;j++)
// 		{
// 			scanf("%d",&b[j]);
// 			a=b[j];
// 		}
		
// 		for(int j=1;j<5;j++)
// 		{			
// 			if(a>=b[j])
// 			{
// 					reverse=a;
// 					a=b[j];
// 					b[j]=reverse;
// 			}

// 		}
// //}
// 		for(int j=0;j<5;j++)
// 		{
		
// 		printf("age : %d\n",b[j]);
	
// 		}
		
// 	return 0;
// }


// /* 
//         create a program to printf 3x3 matrix also print its daigolnals

// */


//  #include <stdio.h>

// int main()
// {
	
// 	int a[3][3],i,j,sum=0;
	

// 	printf("enter the elements for 3*3 matrix : ");
// 	for(int i=0;i<3;i++)
// 	{
// 		for(int j=0;j<3;j++)
// 		{
// 			scanf("%d",&a[i][j]);
// 			if(i==j)
// 			{
// 					sum=sum+a[i][j];
// 			}
// 		}
// 	}
// 	for(int i=0;i<3;i++)
// 	{
// 		for(int j=0;j<3;j++)
// 		{
// 			printf("%3d",a[i][j]);
// 		}
// 		printf("\n\n");
// 	}
	
	
// 	printf("sum : %d",sum);
// 	return 0;
// }

// /* 
//         create a program to print average and sum of marks of 10 students 

// */


//  #include <stdio.h>

// int main()
// {
	
// 	int a[10],sum=0;
// 	float average;

// 	printf("enter the marks of students : ");
// 	for(int i=0;i<10;i++)
// 	{
// 		scanf("%d",&a[i]);
// 		sum = sum + a[i];
// 	}
// 	average=sum/10;
// 	printf("sum : %d , average : %.2f",sum,average);
// 	return 0;
// }


// /* 
//         create a program to difference between static constant and constant 

// */


//  #include <stdio.h>

// void cons();
// const int global =50;
// int main()
// {
	
// 	int c;

// 	cons();
// 	printf("%d",global);

// 	return 0;
// }

// void cons()
// {
// 	const int local=5;
// 	static const int stalocal=10;
// 	printf("%d\n",local);
// 	printf("%d\n",stalocal);
// }
// /* 
//         create a program to find maximun between three numbers using ladder if and esle or nested if

// */


//  #include <stdio.h>

// int main()
// {
	
// 	int a,b,c;
// 	printf("enter three number :  ");
// 	scanf("%d",&a,&b,&c);

// 	if (a>b)
// 	{
// 		if(a>c)
// 		{
// 			printf("a as maximum");
// 		}
// 		else
// 		printf("c as maximum");
// 	}
// 	else
// 	if(b>c)
// 	printf( " b as maximum");
// else 
// printf("c as maximum");

// 	return 0;
// }

// /* 
//         create a program to check whether a program is vowel or constant

// */


//  #include <stdio.h>

// int main()
// {
	
// 	char ch;
// 	printf("enter a  alphabet  :  ");
// 	scanf("%c",&ch);

// switch(ch)
// {
// 	case 'A':
// case 'a':
// case 'i':
// case 'I':
// case 'O':
// case 'o':
// case 'u':
// case 'U':
// case 'e':
// case 'E':
// printf("vowel"); break ;
// default : printf("constant");
// }
// // printf(( ch == 'a' || ch == 'A' || ch == 'e' || ch=='E' || ch == 'i'|| ch== 'I'|| ch=='o'|| ch == 'O'|| ch=='u' || ch=='U')?" vowel " :
// // 	"constant");
// 	return 0;
// }
// /* 
//         create a program to check whether a program is constant or alphabet

// */


//  #include <stdio.h>

// int main()
// {
	
// 	char c;
// 	printf("enter a  alphabet  :  ");
// 	scanf("%c",&c);


// 	printf(( c <= '9' && c>='0' )?" constant " : " alphabet ");
// 	return 0;
// }
//c >= 'a' && c <= 'z' || c >= 'A' && c<= 'Z'

// /* 
//         create a program to genarate  sum of a 5 digit number individually
// */




//  #include <stdio.h>

// int main()
// {
	
// 	int n,sum=0,a;	
// 	printf("enter a  five digit number  :  ");
// 	scanf("%d",&n);
	
// 	if( n<10000 || n>99999 )
// 	{
// 			printf("Invalid number please enter a 5 digit number ");
// 			return 1;
// 	}
// 	for(int i=0;i<5;i++)
// 	{
// 			a = n % 10;
// 			sum = sum + a;
			
// 			n = n/10;
// 	}

// 	printf("sum of number : %d ",sum);
// 	return 0;
// }

/* 
        create a program to genrate reverse of a 5 digit number
*/




//  #include <stdio.h>

// int main()
// {
	
// 	int n,reverse=0,reminder;	
// 	printf("enter a  five digit number  :  ");
// 	scanf("%d",&n);
// 	for(int i=0;i<5;i++)
// 	{
// 			reminder = n % 10;
// 			reverse = reminder + 10 * reverse;
			
// 			n = n/10;
// 	}

// 	printf("reverse number : %d ",reverse);
// 	return 0;
// }

// /* 
//         create a program to check if a given number is palindrome or not 
// */




//  #include <stdio.h>

// int main()
// {
	
//     	int n,reverse=0,original,reminder=0;
	
// 	printf("enter a number  :  ");
// 	scanf("%d",&n);

// 	original = n;


// 	while(original !=0)
// 	{
// 		reminder = original % 10;
// 		reverse = reverse * 10 + reminder;
// 		original /= 10;
// 	}

// 	if(n == reverse)
// 	printf("its palindrome");	
// else
// 	printf("its not a palindrome");	

// 	//	printf( ( n == reverse ) ? "its a palindrome ": "its not a palindrome");
// 	return 0;
// }

// /* 
//         create a program to demonstrate nested loops
// */




//  #include <stdio.h>

// int main()
// {
	
//     	int n;
	
// 	printf("what is the size of pattern you want to print :  ");
// 	scanf("%d",&n);

// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<n;j++)
// 		{
// 			if(i==j)
// 			{
// 				printf("*");
// 			}
// 			else
// 			printf(" ");
// 		}
// 		printf("*\n");
// 	}
	
// 	return 0;
// }

//  #include <stdio.h>

// int main()
// {
//     int n,sum=0;
//     float area;
//     printf("Enter 10 number  : ");
    
//     for(int i=0;i<10;i++)
// {
//     scanf("%d",&n);
//     sum=sum+n;
// }
    
//     printf("%d\n",sum);
//     return 0;
// }




/* 
        calculate sum of 10 numbers and numbers and given by user
*/

//  #include <stdio.h>

// int main()
// {
//     int n,sum=0;
//     float area;
//     printf("Enter 10 number  : ");
    
//     for(int i=0;i<10;i++)
// {
//     scanf("%d",&n);
//     sum=sum+n;
// }
    
//     printf("%d\n",sum);
//     return 0;
// }

/* 
        create a program to calculate area of circle
*/

//  #include <stdio.h>


// int main()
// {
//     int r;
//     float area;
//     printf("Enter the radius of a circle : ");
//     scanf("%d",&r);
//     area = r*r*3.14;
//     printf("%.2f\n",area);
//     return 0;
// }

