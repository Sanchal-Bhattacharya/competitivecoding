#include <bits/stdc++.h>

using namespace std;

int main() {
int n;
cin>>n;
int arr[n];
long sum[n];
for(int i = 0; i < n; i++) {
cin>>arr[i];
if(i == 0) {
sum[0] = arr[0];
}
else {
sum[i] = sum[i - 1] + arr[i];
}
}
long max_sum = LONG_MIN;
for(int i = 0; i < n; i++) {
int k = 2;
int r = i;
while(r + k < n) {
r = r + k;
k++;
}
long local_sum = sum[r] - ((i == 0)? 0 : sum[i - 1]);
if(local_sum > max_sum) {
max_sum = local_sum;
}
}
cout<<max_sum<<endl;
return 0;
}
