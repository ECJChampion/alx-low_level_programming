void reverse_array(int *a, int n)
{
    // Iterate through the array, swapping the elements at the
    // beginning and end until we reach the middle of the array
    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}
