int makeArrayConsecutive2(vector<int> statues) {
    auto minmax = minmax_element(statues.begin(), statues.end());
    return *minmax.second - *minmax.first - statues.size()+1;
}
