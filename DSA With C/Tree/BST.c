//Wap to create/insert a tree from ar array
#include<stdio.h>
typedef struct node 
{
    int data; 	
    struct node *leftChild, *rightChild;
}Nd;
Nd *root = NULL;
void insert(int data)//data =50
{
    Nd *current,*parent,*tempNode = (Nd*) malloc(sizeof(Nd));
    tempNode->data = data;
    tempNode->leftChild = tempNode->rightChild = NULL;
    //if tree is empty
    if(root == NULL)
        root = tempNode;
    else 
    {
        current = root;//current=100
        while(1) 
        { 
            parent = current;  //parent=100 
            if(data < parent->data)//go to left of the tree
            {
                current = current->leftChild; //insert to the left               
                if(current == NULL) 
                {
                    parent->leftChild = tempNode;
                    return;
                }
            }  //go to right of the tree
            else
            {
                current = current->rightChild;//NULL
                if(current == NULL)//insert to the right
                {
                    parent->rightChild = tempNode;//148
                    return;
                }
            }
        }            
    }
}
struct node* search(int data) //data=30
{
    Nd *current = root;//current=100
    printf("Visiting elements: ");
    while(current->data != data) //30!=30
    {
        if(current != NULL)
            printf("%d ",current->data);//10 20
        if(current->data > data)//20>30//go to left tree 
            current = current->leftChild;
        else//else go to right tree                
            current = current->rightChild;//current=148
        if(current == NULL)//not found 
            return NULL;
    }
    return current;
}
int search1(int data) //data=60
{
    Nd *current = root;
    printf("Visiting elements: ");
    while(current->data != data) //50!=60
    {
        if(current != NULL)//196!=NULL
            printf("%d ",current->data); //10 20 30 50
        if(current->data > data) //50>60//go to left tree
            current = current->leftChild;
        else//else go to right tree                
            current = current->rightChild;//current=NULL
        if(current == NULL)//not found 
            return 0;
    }
    return 1;
}

void pre_order_traversal(Nd* root)//root=196
{
    if(root != NULL)
    {
        printf("%d ",root->data);
        pre_order_traversal(root->leftChild);//recursion
        pre_order_traversal(root->rightChild);//recursion
    }
}
void inorder_traversal(Nd* root)//root=NULL
{
    if(root != NULL)
    {
        inorder_traversal(root->leftChild);//calling NULL
        printf("%d ",root->data);          
        inorder_traversal(root->rightChild);//calling  196
    }
}
void post_order_traversal(Nd* root)//root=100
{
    if(root != NULL)
    {
        post_order_traversal(root->leftChild);//null
        post_order_traversal(root->rightChild);//null
        printf("%d ", root->data);
    }
}
void main() 
{
    int i,n,x;
    printf("Enter the Range=");
    scanf("%d",&n);//n=5
    int array[n];
    printf("Enter the %d No. = ",n);
    for(i=0;i<n;i++)//i=0  0<5
        scanf("%d",&array[i]);
    for(i=0;i<n;i++)//i=5  <5//tree insert
        insert(array[i]);//calling  10  20 30 15 50
    printf("Enter the No. to be Search=");
    scanf("%d",&x);//x=30
    (search1(x)==1)?printf("\nSearch Found"):printf("\nSearch NOT Found");//search 1 process
    printf("Enter the No. to be Search=");//search 2nd process
    scanf("%d",&x);//x=30
    Nd *temp = search(x);//calling  x=30  temp=148
    (temp != NULL)?printf("\n[%d] Element found. %u\n", temp->data,temp):printf("\n[ x ] Element not found (%d).\n", i);       
    printf("\nPreorder traversal: ");
    pre_order_traversal(root);//calling  root=100
    printf("\nInorder traversal: ");
    inorder_traversal(root); //calling root =100
    printf("\nPost order traversal: ");
    post_order_traversal(root);//calling root=100
}