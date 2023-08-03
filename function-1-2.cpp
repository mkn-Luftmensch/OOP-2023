int is_identity(int array[10][10]){
    int sum=0;
    for(int i=0; i<10; i++){
        if(array[i][i]!=1) return 0;
        for(int j=0; j<10; j++){
            sum+=array[i][j];
        }
    }
    if(sum!=10) return 0;
    return 1;
}