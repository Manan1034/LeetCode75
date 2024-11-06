Problem:
Each index of array represent multiplication of all other elements except element at that index

Start multiplying the elements from left and store them in array.
Looping from begin of array to end
mult[i] = mult[i-1] * arr[i-1]

Another loop from end to begin.
mult2[i] = mult[i+1]*arr[i+1]

Final result :
res[i] = mult[i] * mult2[i]