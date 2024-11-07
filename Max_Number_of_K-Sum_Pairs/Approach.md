Problem:
Count total number of pairs



Sort the array.
Start one iterator from begin(i) and one from end(j).
if arr[i] + arr[j] == sum
Increase the count
If arr[i] + arr[j] > sum
j--
else
i++