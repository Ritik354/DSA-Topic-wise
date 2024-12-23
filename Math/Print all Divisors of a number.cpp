
//using iteration approach
int* printDivisors(int n, int &size){
// Write your code here
    int j=0;
    vector<int> ans;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            ans.push_back(i);
        }
    }
    size=ans.size();
    int *arr=new int[size];
    for(int i=0;i<size;i++){
        arr[i]=ans[i];
    }
    return arr;
}
//time complexity is O(n)

// using square root approach
int* printDivisors(int n, int &size){
// Write your code here
    int j=0;
    vector<int> ans;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ans.push_back(i);
            if(n/i!=i){
                ans.push_back(n/i);
            }
        }
    }

    //time complexity is O(sqrt(n))