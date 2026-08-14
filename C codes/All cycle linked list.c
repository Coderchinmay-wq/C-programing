#include<stdio.h>
typedef struct employee
{
    char name[20];
    int id;
    float salary;
    struct employee *next;

}*node;
node getnode();
node insert_front(node head);
node insert_end(node head);
node delete_front(node head);
node delete_end(node head);
void count(node head);
void search_by_id(node head);
void search_by_name(node head);
node insert_pos(node head);
node delete_pos(node head);
void average(node head);
void display(node head);

main()
{
    node head=NULL;
    int ch;
    for(;;)
    {
        printf("***choose from the menu\n");
        printf("1. insert front\n");
        printf("2. insert end\n");
        printf("3. delete front\n");
        printf("4. delete end\n");
        printf("5. count\n");
        printf("6. search employee by id\n");
        printf("7. search employee by name\n");
        printf("8. insert at position\n");
        printf("9. delete at position\n");
        printf("10. Display\n");
        printf("11. average salary of all employees\n");
        printf("12. Exit\n");
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:head=insert_front(head);
                   break;
            case 2:head=insert_end(head);
                   break;
            case 3:head=delete_front(head);
                   break;
            case 4:head=delete_end(head);
                   break;
            case 5:count(head);
                   break;
            case 6:search_by_id(head);
                   break;
            case 7:search_by_name(head);
                   break;
            case 8:head=insert_pos(head);
                   break;
            case 9:head=delete_pos(head);
                   break;
            case 10:display(head);
                    break;
            case 11:average(head);
                   break;
            default:printf("exiting...\n");
                    exit(0);
        }
    }
}
node getnode()
{
    node newnode;
    newnode=(node)malloc(sizeof(struct employee));
    if(newnode==NULL)
    {
        printf("memory not allocated\n");
        exit(0);
    }
    else
    {
        printf(" NAME    ID   SALARY\n");
        scanf("%s%d%f",newnode->name,&newnode->id,&newnode->salary);
        newnode->next=newnode;
    }
    return newnode;
}
node insert_front(node head)
{
    node newnode=getnode();
    if(head==NULL)
    {
        head=newnode;
        head->next=head;
    }
    else
    {
        node cur;
        cur=head;
        while(cur->next!=head)
        {
            cur=cur->next;
        }
        newnode->next=head;
        head=newnode;
        cur->next=head;
    }
    return head;
}
node insert_end(node head)
{
    node newnode=getnode();
    if(head==NULL)
    {
        head=newnode;
        head->next=head;
    }
    else
    {
        node cur=head;
        while(cur->next!=head)
        {
            cur=cur->next;
        }
        cur->next=newnode;
        newnode->next=head;
    }
    return head;
}
node delete_front(node head)
{
    if(head==NULL)
    {
        printf("nothing to delete\n");
    }
    else
    {
        node prev=head;
        node cur=head;
        while(cur->next!=head)
        {
            cur=cur->next;
        }
        head=head->next;
        cur->next=head;
        printf("%s\t%d\t%f\n",prev->name,prev->id,prev->salary);
        free(prev);
    }
    return head;
}
node delete_end(node head)
{
    if(head==NULL)
    {
        printf("nothing to display\n");
    }
    else
    {
        node cur=head;
        node prev=NULL;
        while(cur->next!=head)
        {
            prev=cur;
            cur=cur->next;
        }
        prev->next=head;
        printf("%s\t%d\t%f\n",cur->name,cur->id,cur->salary);
        free(cur);
    }
    return head;
}
void count(node head)
{
    int c=0;
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        node cur=head;
        while(cur->next!=head)
        {
            c++;
            cur=cur->next;
        }
        c++;
        printf("number of employees=%d\n",c);
    }
}
void search_by_id(node head)
{
    int empid,c=0;
    printf("enter the empid to be searched\n");
    scanf("%d",&empid);
    node cur=head;
    while(cur->next!=head)
    {
        if(cur->id==empid)
        {
            c=1;
            break;
        }
        cur=cur->next;
    }
    if(cur->id==empid)
    {
        c=1;
        printf("%s\t%d\t%f\n",cur->name,cur->id,cur->salary);
    }
    else
    {
        printf("employee not found\n");
    }
}
void search_by_name(node head)
{
    int c=0;
    char ename[20];
    printf("enter the employee name to be searched\n");
    scanf("%s",&ename);
    node cur=head;
    while(cur->next!=head)
    {
        if((strcmp(cur->name,ename))==0)
        {
            c=1;
            break;
        }
        cur=cur->next;
    }
    if((strcmp(cur->name,ename))==0)
    {
        c=1;
        printf("%s\t%d\t%f\n",cur->name,cur->id,cur->salary);
    }
    else
    {
        printf("employee name  not found\n");
    }
}
node insert_pos(node head)
{
    int pos;
    printf("enter the position to insert\n");
    scanf("%d",&pos);
    if(head==NULL || pos<1)
    {
        printf("List is empty\n");
        return head;
    }
    if(pos==1)
    {
       return insert_front(head);
    }
    node newn=getnode();
    node cur=head;
    node prev=NULL;
    int count=1;
    while(cur->next!=head && count<pos)
    {
        prev=cur;
        cur=cur->next;
        count++;
    }
    prev->next=newn;
    newn->next=cur;
    return head;

}
node delete_pos(node head)
{
    int pos;
    printf("enter the position to delete\n");
    scanf("%d",&pos);
    if(head==NULL || pos<1)
    {
        printf("List is empty\n");
        return head;
    }
    if(pos==1)
    {
       return delete_front(head);
    }
    node cur=head;
    node prev=NULL;
    int count=1;
    while(cur->next!=head && count<pos)
    {
        prev=cur;
        cur=cur->next;
        count++;
    }
    prev->next=cur->next;
    printf("%s\t%d\t%f\n",cur->name,cur->id,cur->salary);
    free(cur);
    return head;

}
void average(node head)
{
    float sum=0.0,avg;
    int c=0;
    node cur=head;
    while(cur->next!=head)
    {
        sum=sum+cur->salary;
        c++;
        cur=cur->next;
    }
    sum=sum+cur->salary;
    c++;
    avg=sum/c;
    printf("average salary of all employees=%f\n",avg);
}
void display(node head)
{
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        node cur=head;
        while(cur->next!=head)
        {
            printf("%s\t%d\t%f\n",cur->name,cur->id,cur->salary);
            cur=cur->next;
        }
        printf("%s\t%d\t%f\n",cur->name,cur->id,cur->salary);
    }
}
