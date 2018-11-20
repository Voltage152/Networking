#ifndef _PRIORITYQUEUE_H_
#define _PRIORITYQUEUE_H_

struct PriorityQueue {
    int *pq;
    int *qp;
    double *keys;
    int size;
};

struct PriorityQueue *priorityQueueInit(int size);
void priorityQueueRelease(struct PriorityQueue *pq);
void priorityQueueDisplay(struct PriorityQueue *pq);
int priorityQueueIsFull(struct PriorityQueue *pq);
int priorityQueueIsEmpty(struct PriorityQueue *pq);
int priorityQueueGetSize(struct PriorityQueue *pq);
double priorityQueueDequeue(struct PriorityQueue *pq);
int priorityQueueInsertElementAtIndex(struct PriorityQueue  *pq, int i, double e);
double priorityQueueGetElementOfIndex(struct PriorityQueue *pq, int i);
int priorityQueueContainsElementOfIndex(struct PriorityQueue *pq, int i);
void priorityQueueRemoveElementOfIndex(struct PriorityQueue *pq, int i);
void priorityQueueChangePriorityOfIndex(struct PriorityQueue *pq, int i, double e);
void priorityQueueDecreasePriorityOfIndex(struct PriorityQueue *pq, int i, double e);
void priorityQueueIncreasePriorityOfIndex(struct PriorityQueue *pq, int i, double e);

#endif