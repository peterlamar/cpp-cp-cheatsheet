/*
For address = "prettyandsimple@example.com", the output should be
findEmailDomain(address) = "example.com";
*/
string findEmailDomain(string address) {
    auto it = address.find_last_of('@')+1;
    return address.substr(it);
}
