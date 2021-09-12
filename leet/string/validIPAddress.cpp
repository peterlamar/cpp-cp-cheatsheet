/*
Example 1:

Input: IP = "172.16.254.1"
Output: "IPv4"
Explanation: This is a valid IPv4 address, return "IPv4".
Example 2:

Input: IP = "2001:0db8:85a3:0:0:8A2E:0370:7334"
Output: "IPv6"
Explanation: This is a valid IPv6 address, return "IPv6".
*/

class Solution {
public:
    
    vector<string> split(string s, char c) {
        vector<string> parts;
        string part;
        istringstream in(s);
        while (getline(in, part, c)) {
            parts.push_back(part);
        }
        return parts;
    }
    
    bool validIPv4(string IP){
        
        if (count(IP.begin(), IP.end(), '.') != 3)
            return false;
        
        vector<string> parts = split(IP, '.');
        if (parts.size() != 4){
            return false;
        }
        
        for (string p: parts){
            if (p.size() == 0 || p.size()> 3 || (p.size()>1 && p[0]=='0'))
                return false;

            for (char c: p){
                if (!isdigit(c))
                    return false;
            }

            if (stoi(p) > 255 )
                return false;               
        }
        
        return true;
    }
    
    bool validIPv6(string IP){
        
        if (count(IP.begin(), IP.end(), ':') != 7)
            return false;
        
        vector<string> parts = split(IP, ':');
        
        if (parts.size() != 8){
            return false;
        }
        
        for (string p:parts){
            if (p.empty() || p.size() > 4)
                return false;
            
            for (char c: p){
                if (!isdigit(c) && (!isdigit(c) && toupper(c) > 'F'))
                    return false;
            }
        }
        
        return true;
    }
    
    string validIPAddress(string IP) {
        
        if (validIPv4(IP))
            return "IPv4";
             
        if (validIPv6(IP))
            return "IPv6";
        
        return "Neither";
    }
};