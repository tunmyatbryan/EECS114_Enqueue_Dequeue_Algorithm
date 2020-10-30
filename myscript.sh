Script started on Wed 06 Feb 2019 10:10:55 PM PST
]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ make
==================================================
To build your sorting code, use:
  make queue      # For queue
  make dlist   	  # For Doubly Linked List

To clean this subdirectory (remove object files
and other junk), use:
  make clean
==================================================
]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ make queue
g++    -c -o queuedriver.o queuedriver.c
g++ -O3 -g -o queue queuedriver.o
]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ ./queue 1 10000
Timer: gettimeofday
Timer resolution: ~ 1 us (?)

N == 1

Total time for queue: 0.000845 seconds ==> Average time for queue: 8.45e-08 seconds

]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ ./queue 1 10000[1@0
Timer: gettimeofday
Timer resolution: ~ 1 us (?)

N == 10

Total time for queue: 0.000795 seconds ==> Average time for queue: 7.95e-08 seconds

]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ ./queue 10 10000[1@0
Timer: gettimeofday
Timer resolution: ~ 1 us (?)

N == 100

Total time for queue: 0.000783 seconds ==> Average time for queue: 7.83e-08 seconds

]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ ./queue 100 10000[1@0
Timer: gettimeofday
Timer resolution: ~ 1 us (?)

N == 1000

Total time for queue: 0.000811 seconds ==> Average time for queue: 8.11e-08 seconds

]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ ./queue 1000 10000[1@0
Timer: gettimeofday
Timer resolution: ~ 1 us (?)

N == 10000

Total time for queue: 0.00081 seconds ==> Average time for queue: 8.1e-08 seconds

]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ ./queue 10000 10000[1@0
Timer: gettimeofday
Timer resolution: ~ 1 us (?)

N == 100000

Total time for queue: 0.000874 seconds ==> Average time for queue: 8.74e-08 seconds

]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ ./queue 100000 10000[1@0
Timer: gettimeofday
Timer resolution: ~ 1 us (?)

N == 1000000

Total time for queue: 0.000855 seconds ==> Average time for queue: 8.55e-08 seconds

]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ make 
==================================================
To build your sorting code, use:
  make queue      # For queue
  make dlist   	  # For Doubly Linked List

To clean this subdirectory (remove object files
and other junk), use:
  make clean
==================================================
]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ make dlist
g++    -c -o dlistdriver.o dlistdriver.c
g++ -O3 -g -o dlist dlistdriver.o
]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ ./dlist 1 100
Timer: gettimeofday
Timer resolution: ~ 1 us (?)
Total time for dlist: 1.1e-05 seconds ==> Average time for dlist: 1.1e-07 seconds

]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ ./dlist 1 100[1@0
Timer: gettimeofday
Timer resolution: ~ 1 us (?)
Total time for dlist: 1.9e-05 seconds ==> Average time for dlist: 1.9e-07 seconds

]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ ./dlist 10 100[1@0
Timer: gettimeofday
Timer resolution: ~ 1 us (?)
Total time for dlist: 2.7e-05 seconds ==> Average time for dlist: 2.7e-07 seconds

]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ ./dlist 100 100[1@0
Timer: gettimeofday
Timer resolution: ~ 1 us (?)
Total time for dlist: 0.000165 seconds ==> Average time for dlist: 1.65e-06 seconds

]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ ./dlist 1000 1000[K[20G[K./dlist 1000 100[1@0
Timer: gettimeofday
Timer resolution: ~ 1 us (?)
Total time for dlist: 0.001585 seconds ==> Average time for dlist: 1.585e-05 seconds

]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ ./dlist 10000 100[1@0
Timer: gettimeofday
Timer resolution: ~ 1 us (?)
Total time for dlist: 0.01662 seconds ==> Average time for dlist: 0.0001662 seconds

]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ make clean
rm -f core *.o *~ queue dlist
]0;tmyat@bondi:hw2[tmyat@bondi hw2]$ exit
exit

Script done on Wed 06 Feb 2019 10:12:41 PM PST
