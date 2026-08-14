//Linear queue
#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
struct queueRecord
{
    int front;
    int rear;
    int array[SIZE];
};
typedef struct queueRecord queue;
int isfull(queue);
int isempty(queue);
void enqueue(queue *,int);
int dequeue(queue *);
void display(queue );
queue createqueue();
queue createqueue()
{
    queue q;
    q.rear = - 1;
    q.front = -1;
    return q;
}
int isfull(queue q)
{
    if(q.rear == SIZE - 1)
        return 1;
    else
        return 0;
}
int isempty(queue q)
{
    if (q.rear == -1 || q.front >= q.rear)
        return 1;
    else
        return 0;
}
void enqueue(queue *q,int element)
{
    if (isfull(*q))
    {
        printf("Queue is full\n");
    }
    else
    {
        q->rear = q->rear + 1;
        q->array[q->rear] = element;
    }
}
int dequeue(queue *q)
{
    if (isempty(*q))
    {
        printf("Queue is Empty \n");
        return -1;
    }
    else
    {
        q->front++;
       return q->array[q->front];


    }
}
void display(queue q)
{
    int i;
    if (isempty(q))
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = q.front+1; i <= q.rear; i++)
            printf("%d ", q.array[i]);
        printf("\n");
    }
}
int main()
{
    int i,ch,n,element,x;
    queue q;

   q=createqueue();
   while(1)
   {
        printf("1-Insert\n2-Remove Element\n3-Display\n4-Exit\n");
        printf("Enter Choice\n");
        scanf("%d",&ch);

        switch(ch)
        {


            case 1: printf("Enter the element to be inserted\n");
                    scanf("%d",&element);
                    enqueue(&q,element);
                    break;

            case 2:x=dequeue(&q);
                    if(x!=-1)
                        {
                        printf("Removed Element is = %d\n",x);
                        }
                    break;

            case 3: display(q);
                    break;

            case 4: exit(0);
                    break;
        }
    }

    return 0;
}

//divisible by 8
#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
struct queueRecord
{
    int front;
    int rear;
    int array[SIZE];
};
typedef struct queueRecord queue;
int isfull(queue);
int isempty(queue);
void enqueue(queue *,int);
int dequeue(queue *);
void display(queue );
queue createqueue();
queue createqueue()
{
    queue q;
    q.rear = - 1;
    q.front = -1;
    return q;
}
int isfull(queue q)
{
    if(q.rear == SIZE - 1)
        return 1;
    else
        return 0;
}
int isempty(queue q)
{
    if (q.rear == -1 || q.front >= q.rear)
        return 1;
    else
        return 0;
}
void enqueue(queue *q,int element)
{
    if (isfull(*q))
    {
        printf("Queue is full\n");
    }
    else
    {
        q->rear = q->rear + 1;
        q->array[q->rear] = element;
    }
}
int dequeue(queue *q)
{
    if (isempty(*q))
    {
        printf("Queue is Empty \n");
        return -1;
    }
    else
    {
        q->front++;
       return q->array[q->front];


    }
}
void display(queue q)
{
    int i;
    if (isempty(q))
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = q.front+1; i <= q.rear; i++)
        {
            if(q.array[i]%8==0)
            {
              printf("%d ", q.array[i]);
            }
        }
        printf("\n");
    }
}
int main()
{
    int i,ch,n,element,x;
    queue q;

   q=createqueue();
   while(1)
   {
        printf("1-Insert\n2-Remove Element\n3-Display\n4-Exit\n");
        printf("Enter Choice\n");
        scanf("%d",&ch);

        switch(ch)
        {


            case 1: printf("Enter the element to be inserted\n");
                    scanf("%d",&element);
                    enqueue(&q,element);
                    break;

            case 2:x=dequeue(&q);
                    if(x!=-1)
                        {
                        printf("Removed Element is = %d\n",x);
                        }
                    break;

            case 3: display(q);
                    break;

            case 4: exit(0);
                    break;
        }
    }

    return 0;
}

//odd with 0 and even with 1
#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
struct queueRecord
{
    int front;
    int rear;
    int array[SIZE];
};
typedef struct queueRecord queue;
int isfull(queue);
int isempty(queue);
void enqueue(queue *,int);
int dequeue(queue *);
void display(queue );
queue createqueue();
queue createqueue()
{
    queue q;
    q.rear = - 1;
    q.front = -1;
    return q;
}
int isfull(queue q)
{
    if(q.rear == SIZE - 1)
        return 1;
    else
        return 0;
}
int isempty(queue q)
{
    if (q.rear == -1 || q.front >= q.rear)
        return 1;
    else
        return 0;
}
void enqueue(queue *q,int element)
{
    if (isfull(*q))
    {
        printf("Queue is full\n");
    }
    else
    {
        q->rear = q->rear + 1;
        q->array[q->rear] = element;
    }
}
int dequeue(queue *q)
{
    if (isempty(*q))
    {
        printf("Queue is Empty \n");
        return -1;
    }
    else
    {
        q->front++;
       return q->array[q->front];


    }
}
void display(queue q)
{
    int i;
    for(i=q.front+1;i<=q.rear;i++)
     {
         if(q.array[i]%2==0)
            q.array[i]=1;

         else
            q.array[i]=0;
     }

    if (isempty(q))
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = q.front+1; i <= q.rear; i++)
            printf("%d ", q.array[i]);
        printf("\n");
    }
}
int main()
{
    int i,ch,n,element,x;
    queue q;

   q=createqueue();
   while(1)
   {
        printf("1-Insert\n2-Remove Element\n3-Display\n4-Exit\n");
        printf("Enter Choice\n");
        scanf("%d",&ch);

        switch(ch)
        {


            case 1: printf("Enter the element to be inserted\n");
                    scanf("%d",&element);
                    enqueue(&q,element);
                    break;

            case 2:x=dequeue(&q);
                    if(x!=-1)
                        {
                        printf("Removed Element is = %d\n",x);
                        }
                    break;

            case 3: display(q);
                    break;

            case 4: exit(0);
                    break;
        }
    }

    return 0;
}

/*A new toll way is set up at airport road,there are different types of vehicles passing through the toll vehicles are categorized as LMV and HMV the charges for lmv vehicle passing by toll is rupees 50 and hmv vehicle passing by toll is rupees 100 is charged,for each time vehicle passes apply problem solving framework and perform following operation using queue ds. read and display details,count only lmv vehicle that pases through the door, predict the total amount of hmv vehicles based on the number of vehicles standing at the toll gate.*/
#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
struct queueRecord
{
    int front;
    int rear;
    char array[SIZE];
};
typedef struct queueRecord queue;
int isfull(queue);
int isempty(queue);
void enqueue(queue *,char);
int dequeue(queue *);
void display(queue );
void vehicle(queue );
queue createqueue();
queue createqueue()
{
    queue q;
    q.rear = - 1;
    q.front = -1;
    return q;
}
int isfull(queue q)
{
    if(q.rear == SIZE - 1)
        return 1;
    else
        return 0;
}
int isempty(queue q)
{
    if (q.rear == -1 || q.front >= q.rear)
        return 1;
    else
        return 0;
}
void enqueue(queue *q,char vtype)
{
    if (isfull(*q))
    {
        printf("Queue is full\n");
    }
    else
    {
        q->rear = q->rear + 1;
        q->array[q->rear] = vtype;
    }
}
int dequeue(queue *q)
{
    if (isempty(*q))
    {
        printf("Queue is Empty \n");
        return -1;
    }
    else
    {
        q->front++;
       return q->array[q->front];


    }
}
void display(queue q)
{
    int i;
    if (isempty(q))
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = q.front+1; i <= q.rear; i++)
            printf("%c ", q.array[i]);
        printf("\n");
    }
}
void vehicle(queue q)
{
    int count=0;
    int count2=0;
    int amount=0;
    int i;
    if(isempty(q))
    {
         printf("queue is empty\n");
         return;
    }
    printf("Queue is : \n");
    for(i=q.front;i<=q.rear;i++)
    {
       if(q.array[i]=='l'||q.array[i]=='L')
       {
         count++;
       }

    }
    printf(" Number of LMV vehicles:%d\n",count);
    for(i=q.front;i<=q.rear;i++)
    {
        if(q.array[i]=='H'||q.array[i]=='h')
         {
           count2++;
         }
    }
    amount=count2*100;
    printf("Amount from HMV vehicle %d\n",amount);
    printf("\n");
}
int main()
{
    int i,ch,n,vtype;
    char x;
    queue q;

   q=createqueue();
   while(1)
   {
        printf("1-Insert\n2-Remove Element\n3-Display\n4-display lmv vehicle count and total amount of hmv vehicles\n5-Exit\n");
        printf("Enter Choice\n");
        scanf("%d",&ch);

        switch(ch)
        {


            case 1: printf("Enter the vehicle type to be inserted\n");
                    scanf(" %c",&vtype);
                    enqueue(&q,vtype);
                    break;

            case 2:x=dequeue(&q);
                    if(x!=-1)
                        {
                        printf("Removed vehicle is = %d\n",x);
                        }
                    break;

            case 3: display(q);
                    break;
            case 4: vehicle(q);
                    break;
            case 5: exit(0);
                    break;
        }
    }

    return 0;
}

/* In a busy customer service center, a queue management system efficiently organizes customers by gender. Initially, three queues are set up: a main queue for incoming customers, a male queue, and a female queue. Each queue starts empty. As customers arrive, their names are added to the main queue. Once all customers are registered, they are sorted by gender: each customer is dequeued from the main queue and, based on user input, enqueued into either the male or female queue. The program allows displaying the contents of any queue at any time, helping to monitor the system. This approach ensures fair and efficient service delivery by systematically organizing customers.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

typedef struct Queue {
    int f;
    int r;
    char* data[MAX];
} que;

int isfull(que *q) {
    return q->r == MAX - 1;
}

int isempty(que *q) {
    return q->f == q->r;
}

void enqueue(que *q, char* name) {
    if (isfull(q))
        printf("Queue Overflow\n");
    else {
        q->r++;
        q->data[q->r] = strdup(name);
    }
}

char* dequeue(que *q) {
    if (isempty(q)) {
        printf("Queue Underflow\n");
        return NULL;
    } else {
        q->f++;
        return q->data[q->f];
    }
}

void display(que *q) {
    int i;
    if (isempty(q))
        printf("Queue is empty\n");
    else {
        printf("Queue elements are:\n");
        for (i = q->f + 1; i <= q->r; i++)
            printf("%s\t", q->data[i]);
        printf("\n");
    }
}

int main() {
    int ch;
    char name[50];
    char gender[10];
    char* customer;
    que q, q_male, q_female;
    q.f = q.r = -1;
    q_male.f = q_male.r = -1;
    q_female.f = q_female.r = -1;

    while (1) {
        printf("Queue Operations\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue and Sort by Gender\n");
        printf("3. Display Main Queue\n");
        printf("4. Display Male Queue\n");
        printf("5. Display Female Queue\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                if (isfull(&q)) {
                    printf("Main Queue is full. Cannot add more customers.\n");
                    break;
                }
                printf("Enter the name of the customer: ");
                scanf("%s", name);
                enqueue(&q, name);
                break;
            case 2:
                while (!isempty(&q)) {
                    customer = dequeue(&q);
                    if (customer != NULL) {
                        printf("Enter the gender for customer %s (male/female): ", customer);
                        scanf("%s", gender);
                        if (strcmp(gender, "male") == 0)
                            enqueue(&q_male, customer);
                        else if (strcmp(gender, "female") == 0)
                            enqueue(&q_female, customer);
                        else
                            printf("Unknown gender for customer: %s\n", customer);
                    }
                }
                printf("Sorted the customers into male and female queues.\n");
                break;
            case 3:
                display(&q);
                break;
            case 4:
                display(&q_male);
                break;
            case 5:
                display(&q_female);
                break;
            default:
                printf("Invalid choice\n");
                exit(0);
        }
    }

    return 0;
}

//circular queue
#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
struct queueRecord
{
    int front;
    int rear;
    int array[SIZE];
};
typedef struct queueRecord queue;
int isfull(queue);
int isempty(queue);
void enqueue(queue *,int);
int dequeue(queue *);
void display(Queue );
queue createqueue();


queue createqueue()
{
    queue q;
    q.rear = - 1;
    q.front = -1;
    return q;
}


int isfull(queue q)
{
    if(((q.rear + 1)%SIZE==q.front) )
        return 1;
    else
        return 0;
}
int isempty(queue q)
{
    if(q.rear == -1)
        return 1;
    else
        return 0;
}

void enqueue(queue *q,int element)
{
    if(isfull(*q))
        printf("\n Queue is full!! \n");
    else
    {
        if(q->front == -1)
            q->front = 0;
        q->rear = (q->rear + 1) % SIZE;
        q->array[q->rear] = element;
        printf("\n Inserted -> %d", element);
    }
}


int dequeue(queue *q)
{
    int element;
    if(isempty(*q)) {
        printf("\n Queue is empty !! \n");
        return(-1);
    } else {
        element = q->array[q->front];
        if (q->front ==q-> rear){
            q->front = -1;
            q->rear = -1;
        } /* Q has only one element, so we reset the queue after dequeing it. ? */
        else {
            q->front = (q->front + 1) % SIZE;

        }
        printf("\n Deleted element -> %d \n", element);
        return(element);
    }
}




void display(queue q)
{
    int i;
    if(isempty(q))
        printf(" \n Empty Queue\n");
    else
    {
        //printf("\n Front -> %d ",Q.front);
        printf("\n Items -> ");
        for( i = q.front; i!=q.rear; i=(i+1)%SIZE) {
            printf("%d ",q.array[i]);
        }
        printf("%d ",q.array[i]);
        //printf("\n Rear -> %d \n",Q.rear);
    }
}

int main()
{
    int i,ch,n,item,x;
    queue q;

   q=createqueue();
   while(1)
   {
        printf("\n1-Insert\n2-Remove Element\n3-Display\n4-Exit\n");
        printf("Enter Choice\n");
        scanf("%d",&ch);

        switch(ch)
        {


            case 1: printf("Enter the element to be inserted\n");
                    scanf("%d",&item);
                    enqueue(&q,item);
                    break;

            case 2:x=dequeue(&q);
                    if(x!=-1)
                        {
                        printf("Removed Element is = %d\n",x);
                        }
                    break;

            case 3: display(q);
                    break;

            case 4: exit(0);
                    break;
        }
    }

    return 0;
}
