int sum(int count, const int array[]) {
    int i;
    int result;
    result = 0;
    for (i = 0; i < count; i++) {
        result += array[i];
    }
    return result;
}
