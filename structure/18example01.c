#include <stdio.h>
#include <stdlib.h>
#define Nov 30

typedef int vertex;
typedef struct GraphNode {
	vertex vid;
	struct GraphNode* link;
}gnode;
typedef struct LinkedGraph {
	int n;
	gnode* adjList_head[Nov];
}graph;

graph* createGraphInstance()
{
	graph* g = (graph*)malloc(sizeof(graph));
	g->n = 0;
	for (int i = 0; i < Nov; i++)
		g->adjList_head[i] = NULL;
	return g;
}

void insertVertex(graph* g, vertex v)
{
	if ((g->n) + 1 > Nov) {
		printf("Overflow"); return;
	}
	(g->n)++;
}
void insertEdge(graph* g, vertex from, vertex to)
{
	gnode* node;
	if (from >= g->n || to >= g->n) { printf("no vertex"); return; }
	node= (gnode*)malloc(sizeof(gnode));
	node->vid = to;
	node->link = g->adjList_head[from];
	g->adjList_head[from] = node;
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
	insertVertex(G1, 0);
	insertVertex(G1, 1);
	insertVertex(G1, 2);
	insertEdge(G1, 0, 1);
	insertEdge(G1, 0, 2);
	insertEdge(G1, 1, 2);
	insertEdge(G1, 2, 0);

	printGraph(G1);
	getchar();
	return 0;
}
