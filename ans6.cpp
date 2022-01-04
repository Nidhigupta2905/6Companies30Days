       string gcdOfStrings(string s1, string s2) 
{
	auto t1{""s}, t2{""s};
	auto l{gcd(size(s1), size(s2))};
	for( ; size(t1)<size(s1); t1.append(s1, 0, l));
	for( ; size(t2)<size(s2); t2.append(s1, 0, l));

	return s1==t1 and s2==t2 ? s1.substr(0, l) : "";
}
