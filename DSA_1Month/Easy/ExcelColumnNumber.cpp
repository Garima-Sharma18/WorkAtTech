//To convert the Excel column numbers in string to integer value.

int getColumnNumber(string excelColumnNumber) {
	int result = 0;
	int power = 1;
	for (int i=excelColumnNumber.length()-1;i>=0;i--)
	{
		result += (excelColumnNumber[i]-'A'+1)*power;
		power*=26;		
	}
	return result;
}
