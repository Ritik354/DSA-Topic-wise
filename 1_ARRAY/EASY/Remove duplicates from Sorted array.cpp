int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i=0,j=1;
	while(j<n){
		if(arr[i]!=arr[j]){
			arr[i+1] = arr[j];
			i++;
		}
		j++;
	}
	return i+1;
}