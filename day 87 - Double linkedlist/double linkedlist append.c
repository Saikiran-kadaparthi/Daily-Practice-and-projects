//Double linkedlists
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node* createNode(int data)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void display(struct Node *head)
{
    struct Node *temp=head;
    while (temp!=NULL)
	{
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void append(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
	{
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
	{
        temp=temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

int length(struct Node *head)
{
	struct Node *Temp = head;
	int c=0;
	while(Temp != NULL)
	{
		c++;
		Temp = Temp->next;
	}
	return c;
}

int main()
{
    struct Node *head = NULL;
    int n, data, newData, i;
    
    
    printf("Enter number of nodes : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
	{
        printf("Enter data for node %d : ", i + 1);
        scanf("%d", &data);
        append(&head, data);
    }
	int p=1;
    printf("\nList before append : ");
    display(head);
    while(p)
    {
    	int t1;
    	printf("Enter new data to append : ");
    	scanf("%d", &newData);
    	append(&head, newData);
        printf("\nDo you wanna add more data? : \n 1.Yes \n 2.No : \n Your choice : ");
        scanf("%d",&t1);
     	if(t1 == 2)
     	{
     		p = 0;	
		}
		else if(t1 == 1)
		{
			p = 1;
		}
		else
		{
			printf("invalid Choice!\n");
			p = 0;
		}
     	
	}
    printf("List after append : ");
    display(head);

	int l = length(head);
	printf("\n Length of the list : %d ", l);
    return 0;
}
