#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "timer.c"

#include "queue.c"

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

	struct Queue *q = createQueue();
	if(!q)
	{
		return -1;
	}

	srand((unsigned)time(NULL));

	for(int i = 0; i < N; i++)
	{
		enQueue(q, ((float)rand())/RAND_MAX );  
	}
  	printf ("\nN == %d\n\n", N);

  
	// dequeue/enqueue t times
	for(int i = 0; i < T; i++)
	{
		stopwatch_start (timer);
		struct QueueNode *n = deQueue(q);
		enQueue(q, n->number);
		long double t_qs = stopwatch_stop (timer);
		total_time += t_qs;
	}

	// take average
    	avg_time = total_time / T;

	printf ("Total time for queue: %Lg seconds ==> Average time for queue: %Lg seconds\n", total_time, avg_time);

	printf ("\n");

	stopwatch_destroy (timer);
	return 0;
}

/* eof */
