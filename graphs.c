#include "graphs.h"

void main(void) {
	
	int n = 4;
	struct vertex *graph = (struct vertex *) malloc(n * sizeof(struct vertex));

	insertVertex(&graph[0], 0);
	insertVertex(&graph[0], 3);
	insertVertex(&graph[0], 4);
	insertVertex(&graph[0], 2);
	insertVertex(&graph[0], 1);

	insertVertex(&graph[1], 0);
	insertVertex(&graph[1], 3);
	insertVertex(&graph[1], 1);
	insertVertex(&graph[1], 2);

	insertVertex(&graph[2], 0);
	insertVertex(&graph[2], 2);
	insertVertex(&graph[2], 4);
	insertVertex(&graph[2], 1);
	insertVertex(&graph[2], 3);

	insertVertex(&graph[3], 0);
	insertVertex(&graph[3], 1);
	insertVertex(&graph[3], 3);
	insertVertex(&graph[3], 4);

	printGraph(graph, n);

}
