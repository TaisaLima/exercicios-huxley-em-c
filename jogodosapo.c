#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100000
typedef struct {
  int size;
  int start;
  int end;
  int data[MAX_SIZE];
} circular_array;
void init(circular_array *a) {
  a->size = 0;
  a->start = 0;
  a->end = 0;
}
void push(circular_array *a, int value) {
  if (a->size == MAX_SIZE) {
    printf("Error: array is full\n");
    return;
  }
  a->data[a->end] = value;
  a->end = (a->end + 1) % MAX_SIZE;
  a->size++;
}
int pop(circular_array *a) {
  if (a->size == 0) {
    printf("Error: array is empty\n");
    return -1;
  }
  int value = a->data[a->start];
  a->start = (a->start + 1) % MAX_SIZE;
  a->size--;
  return value;
}
int main() {
  circular_array a;
  init(&a);
  push(&a, 1);
  push(&a, 2);
  push(&a, 3);
  printf("%d\n", pop(&a));
  printf("%d\n", pop(&a));
  printf("%d\n", pop(&a));
  return 0;
}