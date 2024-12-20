int isSorted(int n, vector<int> a) {
    // Write your code here.
    int count =0;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            count++;
        }
    }
    if(a[0]<=a[n-1]) count++;

    return (count<2);
}
