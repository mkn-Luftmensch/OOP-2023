void changeValue(double* pointer) {
    *pointer = 42;
}

void printArray(double* ptr[], int size) {
    for(int i=0; i<size; i++){
        std::cout << *ptr[i] << " ";
    }
}

double arrayMax(double* ptr, int size) {
    double max = -10000;
    for( int i=0; i<size; i++) {
        if(ptr[i] > max) max = ptr[i];
    }
    return max;
}

double* dynamicArray(int N, double M) {
    double* array = new double[N];
    for(int i=0; i<N; i++)
        array[i]=M;
    return array;
}