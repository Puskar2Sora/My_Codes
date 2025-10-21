#include <stdio.h>
#include <stdlib.h>
#define MAX 7
int adjMatrix[MAX][MAX],visited[MAX],front = -1, rear = -1,top = -1;
char queue[MAX],stack[MAX];
void addEdge(char vertices[], int size, char u, char v) // Helper function to add edge in the graph
{
    int uIndex = -1, vIndex = -1,i;
    for (i = 0; i < size; i++) 
    {
        if (vertices[i] == u) 
            uIndex = i;
        if (vertices[i] == v) 
            vIndex = i;
    }
    adjMatrix[uIndex][vIndex] = 1;
    adjMatrix[vIndex][uIndex] = 1;
}
void BFS(char vertices[], int size, char start)// BFS function 
{
    printf("BFS Traversal: ");
    int startIndex = -1,i;
    
    for ( i = 0; i < size; i++) 
    {
        if (vertices[i] == start) 
        {
            startIndex = i;
            break;
        }
    }
    if (startIndex == -1) 
    {
        printf("Start node not found!\n");
        return;
    }
    front = rear = 0;
    queue[rear] = start;
    visited[startIndex] = 1;
    while (front <= rear) 
    {
        char node = queue[front++];
        printf("%c ", node);
        int nodeIndex = -1,i;
        for (i = 0; i < size; i++) 
        {
            if (vertices[i] == node) 
            {
                nodeIndex = i;
                break;
            }
        }
        for (i = 0; i < size; i++) 
        {
            if (adjMatrix[nodeIndex][i] == 1 && !visited[i]) 
            {
                queue[++rear] = vertices[i];
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}
void DFS(char vertices[], int size, char start) // DFS function
{
    printf("DFS Traversal: ");
    int startIndex = -1,i;
    for ( i = 0; i < size; i++) 
    {
        if (vertices[i] == start) 
        {
            startIndex = i;
            break;
        }
    }
    if (startIndex == -1) 
    {
        printf("Start node not found!\n");
        return;
    }
    top = 0;
    stack[top] = start;
    visited[startIndex] = 1;
    while (top >= 0) 
    {
        char node = stack[top--];
        printf("%c ", node);
        for (int j=0;j<=top;j++)
            printf("%c ",stack[j]);
        printf("\n");
        int nodeIndex = -1;
        for (int i = 0; i < size; i++) 
        {
            if (vertices[i] == node) 
            {
                nodeIndex = i;
                break;
            }
        }
        for (int i = 0; i < size; i++) 
        {
            if (adjMatrix[nodeIndex][i] == 1 && !visited[i]) 
            {
                stack[++top] = vertices[i];
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}
void resetVisited(int size)// Reset visited array 
{
    for (int i = 0; i < size; i++) 
        visited[i] = 0;
}
void main() 
{
    int n, e, i;
    printf("Enter number of vertices: ");// Input number of nodes
    scanf("%d", &n);
    char vertices[n],u, v, start;
    printf("Enter the vertices (characters): ");// Input the vertices
    for (i = 0; i < n; i++)
        scanf(" %c", &vertices[i]);
    printf("Enter number of edges: ");// Input number of edges
    scanf("%d", &e);
    for (i = 0; i < e; i++)    // Input edges
    {
        printf("Enter edge (u v) : ");
        scanf(" %c %c", &u, &v);
        addEdge(vertices, n, u, v);
    }
    printf("Enter start vertex for traversal: ");// Input start vertex for BFS and DFS
    scanf(" %c", &start);
    resetVisited(n); // reset visited array
    BFS(vertices, n, start);// BFS Traversal
    resetVisited(n); // reset visited array
    DFS(vertices, n, start);// DFS Traversal
}