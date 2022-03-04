/*Small header file with helper functions for graph*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>

/*Adjacency list representation of graph*/

/*Single node and neighbors stored here*/
typedef struct vertex {

	int value;
	bool explored;
	struct vertex *next;

} vertex;

/* Basic insertion, deletion operations for graph*/

vertex insertVertex(vertex vgraph, int value) {

	vertex *newvertex = (vertex *) malloc(sizeof(vertex));

	if (newvertex == NULL) {
		free(newvertex);
		return vgraph;
	} else {
		newvertex->value = value;
		newvertex->explored = false;
		newvertex->next = &vgraph;
		vgraph = *newvertex;
		printf("%d ", value);
		return vgraph;
	}
}

/*WIP graph printing code*/

void printGraph(vertex *graph, int n) {

	for (int i = 0; i < n; i++) {
		int j = 0;
		for (vertex x = graph[i]; x.value != 0; x = *x.next) {
			printf("%d ", x.value);	
			j++;
		}
		printf("\n");
	}

}
