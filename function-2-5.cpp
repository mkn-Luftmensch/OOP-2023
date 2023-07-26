bool is_descending(int array[], int n){
    if (n<=0) return false;
    bool check=true;
    for(int i=1; i<n; i++){
        if(array[i]>=array[i-1]) check = false;
    }
    return check;
}