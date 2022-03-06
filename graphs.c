#include "graphs.h"

void main(void) {
	
	int n = 4;
	struct vertex *graph = (struct vertex *) malloc(n * sizeof(struct vertex));

	insertVertex(&graph[0], 0, false);
	insertVertex(&graph[0], 3, true);
	insertVertex(&graph[0], 4, true);
	insertVertex(&graph[0], 2, true);
	insertVertex(&graph[0], 1, true);

	insertVertex(&graph[1], 0, false);
	insertVertex(&graph[1], 3, true);
	insertVertex(&graph[1], 1, true);
	insertVertex(&graph[1], 2, true);

	insertVertex(&graph[2], 0, false);
	insertVertex(&graph[2], 2, true);
	insertVertex(&graph[2], 4, true);
	insertVertex(&graph[2], 1, true);
	insertVertex(&graph[2], 3, true);

	insertVertex(&graph[3], 0, false);
	insertVertex(&graph[3], 1, true);
	insertVertex(&graph[3], 3, true);
	insertVertex(&graph[3], 4, true);

	printGraph(graph, n);

}
