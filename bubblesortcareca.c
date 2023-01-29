void swap(int *x, int *y)
{
    int aux = *x;
    *x = *y;
    *y = aux;
}
void sort(int a[], int i, int size)
{
    if(size == 0)
        return;

    if(i == size)
    {
        sort(a, 0, size - 1);
        return;
    }
    if(a[i] > a[i + 1])
        swap(&a[i], &a[i + 1]);

    sort(a, i + 1, size);
}

