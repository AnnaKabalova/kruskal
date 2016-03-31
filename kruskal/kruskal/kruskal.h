#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Edge
{
	int src, dest, weight;
};

struct Graph
{
	int V, E;
	struct Edge* edge;
};

struct subset
{
	int parent;
	int rank;
};

struct Graph* createGraph(int V, int E);
int find(struct subset subsets[], int i);
void Union(struct subset subsets[], int x, int y);
int myComp(const void* a, const void* b);
void KruskalMST(struct Graph* graph);