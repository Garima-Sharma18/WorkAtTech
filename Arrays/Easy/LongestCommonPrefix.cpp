//Find the longest common prefix by using the substring function of string library.

string longestCommonPrefix(vector<string> &str) {
	if (str.size()==0)
		return "";
	string ans=str[0];
	for (int i=1;i<str.size();i++)
	{
		while (str[i].find(ans)!=0)
			ans = ans.substr(0,ans.length()-1);
	}
	return ans;
}
