class Solution {
public:
    string removeOccurrences(string s, string part) {
        int partLen = part.size();
        size_t found = s.find(part); // find is used to get the first occurrence of the part string in s string
        
        while(found != string::npos){
            s.erase(s.begin()+found, s.begin()+found+partLen);  // erasing the part from the s string
            found = s.find(part); // check again if still part is present in string s
        }
        return s;
    }
};