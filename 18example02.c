#include <stdio.h>
#include <stdlib.h>
#define NoV 30
#define MAX_STACK_SIZE 100
#define TRUE 1
#define FALSE 0

typedef int vertex;
typedef struct GraphNode {
	vertex vid;
	struct GraphNode* link;
}gnode;
typedef struct LinkedGraph {
	int n;
	gnode* adjList_head[NoV];
	int visited[NoV];
}graph;

typedef int element;
typedef struct LinkedNode {
	element data;
	struct LinkedNode *link;
}StackNode;
typedef struct LinkedStack {
	StackNode *top;
}Stack;

Stack *createLinkedStack()
{
	Stack *S;
	S = (Stack*)malloc(sizeof(Stack));
	S->top = NULL;
	return S;
}

StackNode *createStackNode(element data)
{
	StackNode *N;
	N = (StackNode *)malloc(sizeof(StackNode*));
	N->data = data; N->link = NULL;
	return N;
}
void push(Stack *S, element symbol)
{
	StackNode *newN;
	newN = createStackNode(symbol);
	newN->link = S->top;
	S->top = newN;
}
element pop(Stack *S)
{
	StackNode *tempN;
	if (S->top == NULL) { return (element)NULL; }
	else {
		tempN = S->top;
		S->top = S->top->link;
		return tempN->data;
	}
}
graph *createGraphInstance() {
	graph * g = (graph*)malloc(sizeof(graph));

	g->n = 0;
	for (int i = 0; i < NoV; i++) {
		g->adjList_head[i] = NULL;
		g->visited[i] = FALSE;
	}
	return g;
}
void insertVertex(graph* g, vertex v)
{
	if ((g->n) + 1 > NoV) {
		printf("Overflow"); return;
	}
	(g->n)++;
}
void insertEdge(graph* g, vertex from, vertex to)
{
	gnode* node;
	if (from >= g->n || to >= g->n) { printf("no vertex"); return; }
	node = (gnode*)malloc(sizeof(gnode));
	node->vid = to;
	node->link = g->adjList_head[from];
	g->adjList_head[from] = node;
}
void searchGraphDFS(graph *g, Stack *S, int v)
{
	int visitedCount = 0;
	gnode* w;
	push(S, v);
	g->visited[v] = TRUE;	
	++visitedCount;
	printf("	  %c", v + 65);
	while (/*S->top != NULL || */visitedCount < g->n)
	{
		w = g->adjList_head[v];
		while (w)
		{
			if (!g->visited[w->vid])
			{
				push(S, w->vid);
				g->visited[w->vid] = TRUE;
				++visitedCount;
				printf("	  %c", w->vid + 65);
				v = w->vid;
				w = g->adjList_head[v];
			}
			else w = w->link;
		}
		v = pop(S);
	}
}

void printGraph(graph* g)
{
	gnode* gp;
	printf("그래프 G:\n");
	for (int i = 0; i < g->n; i++)
	{
		printf("\n정점 %c의 인접리스트: ", i + 65);
		gp = g->adjList_head[i];
		while (gp) {
			printf(" -> %c", (gp->vid) + 65);
			gp = gp->link;
		}
	}
	printf("\n");
}
int main()
{
	graph* G1 = createGraphInstance();
	Stack *S1 = createLinkedStack();
	insertVertex(G1, 0);
	insertVertex(G1, 1);
	insertVertex(G1, 2);
	insertVertex(G1, 3);
	insertEdge(G1, 0, 1);
	insertEdge(G1, 0, 2);
	insertEdge(G1, 0, 3);
	insertEdge(G1, 1, 2);
	insertEdge(G1, 2, 0);
	insertEdge(G1, 3, 1);

	printGraph(G1);

	printf("\n깊이우선탐색: ");
	searchGraphDFS(G1, S1, 0);
	printf("\n");

	getchar();
	return 0;
}
