.PHONY: task1 task2 task3 task4
all: task1 task2 task3 task4

task1:
	gcc -o task1/task1 task1/task1.c

task2:
	gcc -o task2/task2 task2/task2.c

task3:
	gcc -o task3/task3 task3/task3.c

task4:
	gcc -o task4/task4 task4/task4.c -lm

clean:
	rm -f task1/task1 task2/task2 task3/task3 task4/task4
