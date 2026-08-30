class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n=strs.size();
        if(n==1){
            return {strs};
        }
        
        // in map we are going to store string of 26 char which store frequency 
        // and  vector<string>  which represents the all the strings whose freq are equal

        /*

        11000000000000000001000000 : bat 
        10000000000001000001000000 : tan nat 
        10001000000000000001000000 : eat tea ate 

        */
        unordered_map<string,vector<string>>m;
        for(auto v:strs){
            string key(26,'0');

            for(char ch:v){
                key[ch-'a']++;
            }
            m[key].push_back(v);
        }
        vector<vector<string>>ans;
        for(auto v:m){
            ans.push_back(v.second);
        }
        return ans;
    }
};
const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}