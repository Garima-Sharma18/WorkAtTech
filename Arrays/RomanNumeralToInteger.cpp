//Converting Roman Numeral to Integer

int romanToInt(string s) {
    unordered_map <char, int> romanMap{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
	int n = s.length(), result=0;
	for (int i = 0; i < n; i++) {
        int value = romanMap[s[i]];

        if (i < n - 1 && value < romanMap[s[i + 1]]) { //For lesser values like IV to subtract rather than add
            result -= value;
        } else {
            result += value;
        }
    }
    return result;
}
