/*
For inputString = "bbbaacdafe", the output should be isBeautifulString(inputString) = true.

This string contains 3 as, 3 bs, 1 c, 1 d, 1 e, and 1 f 
(and 0 of every other letter), so since there aren't any 
letters that appear more frequently than the previous 
letter, this string qualifies as beautiful.
*/
bool isBeautifulString(string inputString) {
    int hm[26] = {};
    for (char &c: inputString){
        hm[c-'a'] += 1;
    }

    return std::is_sorted(std::rbegin(hm), std::rend(hm));
}

bool isBeautifulString(string inputString) {
    map<char, int> hm;
    for (char &c: inputString){
        hm[c] += 1;
    }
    
    char prev = 'a';
    if (hm.find(prev) == hm.end()){
        return false;
    }
    
    for (auto &p:hm){
      if (hm.find(prev) == hm.end() || hm[prev] < hm[p.first] || p.first - prev > 1){
            return false;
        }
        
        prev = p.first;
    }
    
    return true;
}
