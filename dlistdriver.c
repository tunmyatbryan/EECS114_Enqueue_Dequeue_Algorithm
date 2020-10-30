#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "timer.c"

#include "dlist.c"

/* ============================================================
 */


int main (int argc, char* argv[])
{
	int N = -1, T = -1;
	long double total_time = 0.0L, avg_time = 0.0L;

	if (argc == 3) {
		N = atoi (argv[1]);
		T = atoi (argv[2]);
		assert (N > 0);
		assert (T > 0);
	} else {
		fprintf (stderr, "usage: %s <n>\n", argv[0]);
		fprintf (stderr, "where <n> is the length of the list to sort.\n");
		return -1;
	}

	stopwatch_init ();
	struct stopwatch_t* timer = stopwatch_create (); assert (timer);

	struct Node* headNode = NULL;


	for(int i = 1; i <= N; i++)
	{
		append(&headNode, i);
	}

	srand((unsigned)time(NULL));
	
	for(int i = 0; i < T; i++)
	{
		stopwatch_start (timer);
		int r = rand() % N+1;

		deleteNode(&headNode, searchList(headNode, r));
	
		push(&headNode, r);

		long double t_qs = stopwatch_stop (timer);
		total_time += t_qs;
	}

	avg_time = total_time / T;

	printf ("Total time for dlist: %Lg seconds ==> Average time for dlist: %Lg seconds\n", total_time, avg_time);

	printf ("\n");

	stopwatch_destroy (timer);
	return 0;
}

/* eof */
