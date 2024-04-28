class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    int sum=0;
	    // codes here
	    for(int i=0;i<n;i++)
	    {
	    sum= sum+arr[i];
	}
	return sum;
	}
};