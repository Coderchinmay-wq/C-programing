#include<stdio.h>
typedef struct employee
{
    char name[20];
    int id;
    float salary;
    struct employee *next;
    struct employee *prev1;

}*node;
node genode();
node insert_front(node head);
node insert_end(node head);
node delete_front(node head);
node delete_end(node head);
node insert_position(node head,int pos);
void display_fwd(node head);
void display_bwd(node head);
void count(node head);
void search_by_id(node head);
void search_by_name(node head);
main()
{
    node head=NULL;
    int ch;
    for(;;)
    {
        printf("choose from the menu\n");
        printf("1. insert front\n");
        printf("2. insert end\n");
        printf("3. delete front\n");
        printf("4. delete end\n");
        printf("5. display forward\n");
        printf("6. display backward\n");
        printf("7. count\n");
        printf("8. search employee by id\n");
        printf("9. search employee by name\n");
        printf("10. insert position\n");
        printf("11. exit\n");
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
            case 5:display_fwd(head);
                   break;
            case 6:display_bwd(head);
                   break;
            case 7:count(head);
                   break;
            case 8:search_by_id(head);
                   break;
            case 9:search_by_name(head);
                   break;
            case 10:insert_pos(head);
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
        printf("NAME\tID\tSALARY\n");
        scanf("%s%d%f",newnode->name,&newnode->id,&newnode->salary);
        newnode->prev1=NULL;
        newnode->next=NULL;
    }
    return newnode;
}
node insert_front(node head)
{
    node newnode=getnode();
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head->prev1=newnode;
        head=newnode;
    }
    return head;
}
node insert_end(node head)
{
    node newnode=getnode();
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        node cur=head;
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=newnode;
        newnode->prev1=cur;
    }
    return head;
}
node delete_front(node head)
{
    if(head==NULL)
    {
        printf("nothing to display\n");
    }
    else
    {
        node cur=head;
        head=head->next;
        head->prev1=NULL;
        cur->next=NULL;
        printf("%s\t%d\t%f\n",cur->name,cur->id,cur->salary);
        free(cur);
    }
    return head;
}
node delete_end(node head)
{
    if(head==NULL)
    {
        printf("Nothing to display\n");
    }
    else
    {
       node cur=head;
       node prev=NULL;
       while(cur->next!=NULL)
       {
           prev=cur;
           cur=cur->next;
       }
       prev->next=NULL;
       cur->prev1=NULL;
       printf("%s\t%d\t%f\n",cur->name,cur->id,cur->salary);
       free(cur);
    }
    return head;
}
void display_fwd(node head)
{
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        node cur=head;
        while(cur!=NULL)
        {
            printf("%s\t%d\t%f\n",cur->name,cur->id,cur->salary);
            cur=cur->next;
        }
    }
}
void display_bwd(node head)
{
    if(head==NULL)
    {
        printf("list is empty\n");

    }
    else
    {
        node cur=head;
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        while(cur!=NULL)
        {
            printf("%s\t%d\t%f\n",cur->name,cur->id,cur->salary);
            cur=cur->prev1;
        }
    }
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
        while(cur!=NULL)
        {
            c++;
            cur=cur->next;
        }
        printf("number of employees=%d\n",c);
    }
}
void search_by_id(node head)
{
    int empid,c=0;
    printf("enter the id to be searched\n");
    scanf("%d",&empid);
    node cur=head;
    while(cur!=NULL)
    {
        if(cur->id==empid)
        {
            c=1;
            printf("%s\t%d\t%f\n",cur->name,cur->id,cur->salary);
            break;
        }
        cur=cur->next;
    }
    if(c==0)
    {
        printf("employee id not found\n");
    }
}
void search_by_name(node head)
{
    int c=0;
    char ename[20];
    printf("enter the name to be searched\n");
    scanf("%s",ename);
    node cur=head;
    while(cur!=NULL)
    {
        if(strcmp(cur->name,ename)==0)
        {
            c=1;
            printf("%s\t%d\t%f\n",cur->name,cur->id,cur->salary);
            break;
        }
        cur=cur->next;
    }
    if(c==0)
    {
        printf("employee name not found\n");
    }
}
node insert_position(node head)
{
    int pos;
    printf("Enter the Position\n");
    scanf("%d", &pos);
    if(head==NULL || pos<1)
    {
        printf("list is empty or invalied postion\n");
        return head;

    }
    else if(pos==1)
    {
        return insert_pos(head);
    }
    node cur=head;
    node prev=NULL;
    int c=1;
    while(cur->next!=NULL&& pos>c)
    {
        c++;
        prev=cur;
        cur=cur->next;
    }
    node newnode=get node();
    newnode->prev1=prev;
    prev->next=newnode;
    newnode->next=cur;
    cur->prev1=newnode;
    return head;
}
