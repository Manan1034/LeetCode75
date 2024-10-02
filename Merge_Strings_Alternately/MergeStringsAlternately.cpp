class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        string finalString;
        auto itr1 = word1.begin();    //iterator for string 1
        auto itr2 = word2.begin();    //iterator for string 2

        //Add contents in final string until one of the string is fully transversed.
        while( itr1 != word1.end() && itr2 != word2.end())
        {
            finalString.push_back(*itr1);
            finalString.push_back(*itr2);
            itr1++;
            itr2++;
        }

        //If extra elements left in string 1 after fully traversing string 2
        while(itr1 != word1.end())
        {
            finalString.push_back(*itr1);
            itr1++;
        }

        //Adding elements from string 2 if left after fully traversing string 1.
        while(itr2 != word2.end())
        {
            finalString.push_back(*itr2);
            itr2++;
        }        

        return finalString;
    }
};