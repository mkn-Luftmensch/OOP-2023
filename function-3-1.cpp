bool is_fanarray(int array[], int n) {
    if(n < 1) return 0;
    bool check = true;
    if(n%2==0){
        for(int i=0; i<n/2; i++){
            if(array[i] != array[n-i-1] || array[i]>array[i+1])
                check=false;
        }
    }
    else {
        for(int i=0; i<n/2; i++){
            if(array[i] != array[n-i-1] || array[i]>=array[i+1])
                check=false;
        }
    }

    return check;
}