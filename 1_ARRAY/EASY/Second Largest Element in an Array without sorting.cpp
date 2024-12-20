vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    //second largest
    int largest=a[0],second_largest=-1;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            second_largest = largest;
            largest = a[i];
        }else if(a[i]<largest&&a[i] >second_largest)
        {
            second_largest = a[i];
        }
    }
    //second smallest
    int smallest = a[0], second_smallest = INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            second_smallest = smallest;
            smallest = a[i];
        }else if(a[i]!=smallest&&a[i] <second_smallest)
        {
            second_smallest = a[i];
        }
    }
    
    return {second_largest,second_smallest};
}
