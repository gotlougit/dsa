#include "graphs.h"

void main(void) {
	
	int n = 4;
	struct vertex *graph = (struct vertex*) malloc(n * sizeof(struct vertex*));

	graph[0] = insertVertex(graph[0], 0);
	graph[0] = insertVertex(graph[0], 3);
	graph[0] = insertVertex(graph[0], 4);
	graph[0] = insertVertex(graph[0], 2);
	graph[0] = insertVertex(graph[0], 1);
	printf("\n");

	graph[1] = insertVertex(graph[1], 0);
	graph[1] = insertVertex(graph[1], 3);
	graph[1] = insertVertex(graph[1], 1);
	graph[1] = insertVertex(graph[1], 2);
	printf("\n");

	graph[2] = insertVertex(graph[2], 0);
	graph[2] = insertVertex(graph[2], 2);
	graph[2] = insertVertex(graph[2], 4);
	graph[2] = insertVertex(graph[2], 1);
	graph[2] = insertVertex(graph[2], 3);
	printf("\n");

	graph[3] = insertVertex(graph[3], 0);
	graph[3] = insertVertex(graph[3], 1);
	graph[3] = insertVertex(graph[3], 3);
	graph[3] = insertVertex(graph[3], 4);
	printf("\n");

	printf("%d\n",graph[0].value);
	printf("%d\n",graph[1].value);
	printf("%d\n",graph[2].value);
	printf("%d\n",graph[3].value);

	printf("\n");
	
	printf("%d\n",graph[0].next->next->value);
	printf("%d\n",graph[1].next->next->value);
	printf("%d\n",graph[2].next->next->value);
	printf("%d\n",graph[3].next->next->value);

}
