#include<stdio.h>
#include<stdlib.h>
struct node

{int data;
int info;
struct node *next;
}*start=NULL;

void add_end(int data)
{printf("\nenter the element to the add ");
scanf("%d",&data);
struct node *newnode,*temp;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->info=data;
newnode->next=NULL;
temp=start;
while(temp->next!=NULL)
{temp=temp->next;}
temp->next=newnode;}

void add_beg(int data)
{printf("\nenter the element to the add ");
scanf("%d",&data);
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->info=data;
newnode->next=start;
start=newnode;

}

void del_beg()
{struct node *temp;
temp=start;
start=start->next;
free(temp);
}

void del_end()
{struct node *temp,*ptr;
temp=start;
while(temp->next->next!=NULL)
temp=temp->next;
ptr=temp->next;
temp->next=NULL;
free(ptr);

}
void display()
{struct node *temp;
temp=start;
if(start==NULL)
printf("list is empty");
else
while(temp!=NULL)
{printf("\ndata=%d presentadd=%u nextadd=%u",temp->info,temp,temp->next);
temp=temp->next;
}
}

int main()
{int ch,data;
while(1)
{

printf("\n enter ch\n1-add at begning\n2-add at end\n3-delete at begning\n4-delete at end\n");
scanf("%d",&ch);
switch(ch)
{case 1:add_beg(data);
break;
case 2:add_end(data);
break;
case 3:del_beg();
break;
case 4:del_end();
break;	
}
display();}
}
