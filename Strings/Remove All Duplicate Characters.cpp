/*
Remove All Duplicate Characters (Keep First Occurrence)
*/
string removeDuplicates(string s) {
    vector<bool> seen(256, false);  // track visited chars 256 because ascii characters total 256
    string res = ""; //our result array

    for(char c : s) {     //traversing through each element in s string
        if(!seen[c]) {          // if seeing char first time
            res.push_back(c);   // keep it
            seen[c] = true;     // mark as used
        }
    }
    return res;   //return the resultant array
}
