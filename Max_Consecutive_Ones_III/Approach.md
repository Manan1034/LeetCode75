Problem:
Find maximum length of subarray with all 1s after converting atmost k 0s to 1s


This will be used by sliding window concept.
You start moving from beginning and move to the end.
if element at that index is 0, reduce k and remain i at beginning.
If k < 0, do i++, do k++ and move ahead.
Final length would be j - i