/*
For year = 1905, the output should be
centuryFromYear(year) = 20;
*/
function centuryFromYear($year) {
    $tmp = intdiv($year , 100);
    if ($year % 100 > 0){
        $tmp += 1;
    }
    return $tmp;
}
