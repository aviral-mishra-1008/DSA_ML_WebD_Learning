int multi(int first[][10], int second[][10], int result[][10], int r1, int c1, int r2, int c2){
    for(int i=0; i<r1; i++){
        for(int j=0;j<c2;j++){
            result[i][j] = 0;
        }
    }


    for(int i=0; i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                result[i][j] += first[i][k]*second[j][k];
            }
        }
    }
}