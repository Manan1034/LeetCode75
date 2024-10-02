Problem Statement:
Find greatest common divisor of two strings


Greatest common divisor of two strings is only possible when the same substring can divide both the strings with no character left in both strings.

This is only possible when
String A + string B = String B + String A

Let say abc is the greatest common divisor of String A and String B where,
String A = abcabc
String B = abcabcabc

So String A  + String B = abcabcabcabcabc
and String B + String A = abcabcabcabcabc

So if both are equal, find the greatest common divisor of length of both strings and extract the substring with length equal to gcd.
if this condition is not true, then there is no greatest common divisor.
