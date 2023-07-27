double weighted_average(int array[], int n) {
    if (n < 1) return 0;
    int save[10000] = {0};
    double weighted_sum = 0; 
    for(int i=0; i<n; i++){
        save[array[i]]++;
    }
    for(int i=0; i<n; i++){
        weighted_sum+=(array[i]*save[array[i]]);
    }
    return weighted_sum/n;
}