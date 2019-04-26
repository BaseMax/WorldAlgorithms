// https://en.wikipedia.org/wiki/Sorting_algorithm
void exchange_sort(int count, int array[]) {
    int i, j;
    int temp;
    for (i = 0; i < count; i++) {
        for (j = 0; j < count; j++) {
            if (array[j] < array[i]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
