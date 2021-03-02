//Muhammad Rizky cavendio - 20051397011

#include<stdio.h>
#include<conio.h>
#include <iostream>

using namespace std;

int MAXSTACK;
typedef int itemtype;

typedef struct
{
	itemtype item[300];
	int count;
}stack;

void initializestack(stack *s)
{
	s->count = 0;
}

int empty(stack *s)
{
	return (s->count == 0);
}

int full(stack *s)
{
	return (s->count == MAXSTACK);
}

void push(itemtype x, stack *s)
{
	if(full(s))
 	printf("stack penuh !\n");
 	else
 {
 	s->item[s->count]=x;
 ++(s->count);
 }
}

int pop(stack *s)
{
 	if(empty(s))
 	printf("stack kosong\n");
 	else
 {
 --(s->count);
 return (s->item[s->count]);
 }
 return 0;
}

int i, a, b, c,d,pilih;
int input;
stack tumpukan;
void biner();
void oktal();
void heksa();
main()
{
	 cout<<"konversi desimal ke biner, oktal dan heksadesimal\n";
	 initializestack(&tumpukan);
	 cout<<"\nmasukkan bilangan desimal = ";cin>>input;
	 cout<<"\nPilihan\n";
	 cout<<"1 untuk konversi ke biner\n";
	 cout<<"2 untuk konversi ke oktal\n";
 	 cout<<"3 untuk konversi ke heksa\n";
 	 cout<<"4 untuk keluar";
 while(pilih<4){
 	cout<<"\n\npilih :  ";
 	cin>>pilih;
 switch(pilih)
 {
 	case 1:
 	cout<<"bilangan binernya\n";
 	biner();break;
 	case 2:
 	cout<<"bilangan oktalnya\n";
 	oktal();break;
 	case 3:
 	cout<<"bilangan heksadesimalnya\n";
 	heksa();break;
	case 4:
	cout<<"Pencet enter";
 }}
 	getch();
 	return 0;
} 

void oktal(){
	for(c=1,a=input;a>0;a=a/8,c++)
 	{
	MAXSTACK=c;
    b=a%8;
	push(b,&tumpukan);
 	}
	for(i=MAXSTACK;i>0;i--)
 	{
 	printf("%d", pop(&tumpukan));
 	}
}

void biner(){
	for(c=1,a=input;a>0;a=a/2,c++)
	 {
		 MAXSTACK=c;
 		b=a%2;
		 push(b,&tumpukan);
	 }
	 for(i=MAXSTACK;i>0;i--)
	 {
	 printf("%d", pop(&tumpukan));
	 }
}

void heksa(){
	for(c=1,a=input;a>0;a=a/16,c++)
	 {
		 MAXSTACK=c;
		 b=a%16;
	 push(b,&tumpukan);
	 }
	 for(i=MAXSTACK;i>0;i--)
 	 {
 		d=pop(&tumpukan);
 		if(d<=9)
 		printf("%d",d);
 		else if(d==10)printf("A");
		else if(d==11)printf("B");
		else if(d==12)printf("C");
 		else if(d==13)printf("D");
 		else if(d==14)printf("E");
 		else if(d==15)printf("F");
	 }
}
