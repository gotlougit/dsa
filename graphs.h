/*Small header file with helper functions for graph*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>

/*Adjacency list representation of graph*/

/*Single node and neighbors stored here*/
typedef struct vertex {

	int ivalue;
	int value;
	bool explored;
	struct vertex *next;

} vertex;

/* Basic insertion, deletion operations for graph*/

void insertVertex(vertex *vgraph, int value, bool end) {

	vertex *newvertex = (vertex *) malloc(sizeof(vertex));

	if (newvertex != NULL) {
		*newvertex = *vgraph;
		vgraph->ivalue = (int) (end);
		vgraph->value = value;
		vgraph->explored = false;
		vgraph->next = newvertex;
	}

}

/*Graph printing code*/

void printGraph(vertex *graph, int n) {

	for (int i = 0; i < n; i++) {
		int j = 0;
		for (vertex x = graph[i]; x.ivalue != 0; x = *x.next) {
			printf("%d ", x.value);	
			j++;
		}
		printf("\n");
	}

}
