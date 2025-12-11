/*
Given a string s, the task is to reverse the string. 
Reversing a string means rearranging the characters such that the first character becomes the last, 
the second character becomes second last and so on.
*/

string reverseString(string &s) {
    int left = 0, right = s.length() - 1;

    // Swap characters from both ends till we reach
    // the middle of the string
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
  
    return s;
}
