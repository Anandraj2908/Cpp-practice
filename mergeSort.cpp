
void MergeArray(int a[], int s, int e)
{
    int mid = (s + e) / 2;

    int a3[e]; // alternate array
    int i = s - 1, j = mid, k = 0;
    for (k = s - 1; (i < mid && j < e); k++) // merging array
    {

        if (a[i] <= a[j])
        {
            a3[k] = a[i];
            i++;
        }
        else
        {
            a3[k] = a[j];
            j++;
        }
    }
    // merging left elements
    if (i < mid)
    {
        for (int m = i; m < mid; m++)
        {
            a3[k++] = a[m];
        }
    }
    if (j < e)
    {
        for (int m = j; m < e; m++)
        {
            a3[k++] = a[m];
        }
    }
    // copying into original array
    for (int i = s - 1; i < e; i++)
    {
        a[i] = a3[i];
    }
}

void MergeSorting(int a[], int s, int e)
{
    if (s >= e)
        return;
    else
    {
        int mid = (s + e) / 2;
        MergeSorting(a, s, mid);
        MergeSorting(a, mid + 1, e);
        MergeArray(a, s, e);
    }
}

void mergeSort(int input[], int size)
{
    // Write your code here

    int start = 1;
    int end = size;

    MergeSorting(input, start, end);
}