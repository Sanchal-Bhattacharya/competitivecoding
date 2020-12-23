// C++ program for activity selection problem. 
// The following implementation assumes that the activities 
// are already sorted according to their finish time 
#include <bits/stdc++.h>
using namespace std;
// Prints a maximum set of activities that can be done by a single 
// person, one at a time. 
// n --> Total number of activities 
// s[] --> An array that contains start time of all activities 
// f[] --> An array that contains finish time of all activities 
void printMaxActivities(int s[], int f[], int n) 
{ 
	int i, j; 

	printf ("Following activities are selected n:"); 

	// The first activity always gets selected 
	i = 0; 
	printf("%d ", i); 

	// Consider rest of the activities 
	for (j = 1; j < n; j++) 
	{ 
	// If this activity has start time greater than or 
	// equal to the finish time of previously selected 
	// activity, then select it 
	if (s[j] >= f[i]) 
	{ 
		printf ("%d ", j); 
		i = j; 
	} 
	} 
} 

// driver program to test above function 
int main() 
{ 
	int s[] = {2,3,2,8,5,7,6,4,7,2}; 
	int f[] = {3,4,5,5,6,7,7,8,9,9};
	//sort(f,f+10); 
	int n = sizeof(s)/sizeof(s[0]); 
	printMaxActivities(s, f, n); 
	return 0; 
} 
