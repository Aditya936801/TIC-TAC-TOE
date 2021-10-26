#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

char arr[9];

int enter_position(char player[])
{
int position;
cout<<"Player "<<player<<" Turn\n";
cout<<"Choose the position :- ";
cin>>position;
return position;
}

int check(int pos)
{
if(arr[pos-1]!='x'&& arr[pos-1]!='o')
{
return 0;
}
return 1;
}

int result()
{
if((arr[0]=='x'&&arr[1]=='x'&&arr[2]=='x')||(arr[3]=='x'&&arr[4]=='x'&&arr[5]=='x')||(arr[6]=='x'&&arr[7]=='x'&&arr[8]=='x')
||(arr[0]=='x'&&arr[3]=='x'&&arr[6]=='x')||(arr[1]=='x'&&arr[4]=='x'&&arr[7]=='x')||(arr[2]=='x'&&arr[5]=='x'&&arr[8]=='x')
||(arr[0]=='x'&&arr[4]=='x'&&arr[8]=='x')||(arr[2]=='x'&&arr[4]=='x'&&arr[6]=='x'))
{
cout<<"\n\nPlayer 1 won";
return 0;
}
else if((arr[0]=='o'&&arr[1]=='o'&&arr[2]=='o')||(arr[3]=='o'&&arr[4]=='o'&&arr[5]=='o')||(arr[6]=='o'&&arr[7]=='o'&&arr[8]=='o')
||(arr[0]=='o'&&arr[3]=='o'&&arr[6]=='o')||(arr[1]=='o'&&arr[4]=='o'&&arr[7]=='o')||(arr[2]=='o'&&arr[5]=='0'&&arr[8]=='0')
||(arr[0]=='o'&&arr[4]=='o'&&arr[8]=='o')||(arr[2]=='o'&&arr[4]=='o'&&arr[6]=='o'))
{
cout<<"\n\nPlayer 2 won";
return 0;
}
return 1;
}

void print()
{
clrscr();
cout<<arr[0]<<"|"<<arr[1]<<"|"<<arr[2]<<"\n";
cout<<"-------\n";
cout<<arr[3]<<"|"<<arr[4]<<"|"<<arr[5]<<"\n";
cout<<"-------\n";
cout<<arr[6]<<"|"<<arr[7]<<"|"<<arr[8]<<"\n";
}

void start()
{
clrscr();
int position;
for(int i=0;i<9;i++)
{
print();
cout<<"\n\n\n";
if(result())
{
if(i%2==0)
{
position = enter_position("one");
while(check(position))
{
clrscr();
print();
cout<<"Please enter a position that is not choosen before\n";
position=enter_position("one");
}
arr[position-1]='x';

}
else
{
position = enter_position("two");
while(check(position))
{
clrscr();
print();
cout<<"Please enter a position that is not choosen before\n";
position = enter_position("two");
}
arr[position-1]='o';
}
}
else
{
getch();
break;
}
}
print();
if(result())
{
cout<<"\n\nMatch is Draw";
}
getch();
}

void main()
{
int choice;
clrscr();
cout<<"Welcome to TIC TAC TOE game\n\n\n\n\n\n\n\n\n\n";
cout<<"1. Start Game\n";
cout<<"2. Exit\n";
cout<<"Please select a option from above :- ";
cin>>choice;
switch(choice)
{
case 1:
{
start();
break;
}
case 2:
{
exit(0);
break;
}
}
}