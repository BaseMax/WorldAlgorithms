// https://en.wikipedia.org/wiki/Linear_search
int seqsearch(int count, const char* array[], char x) {
    int location = 1;
    while (location <= count && array[location] != x) {
        location++;
    }
    // Not found...
    if (location > count) {
        location = 0;
    }
    return location;
}
