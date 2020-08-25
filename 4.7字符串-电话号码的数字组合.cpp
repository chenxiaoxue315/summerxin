/*给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。
给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。*/
char** letterCombinations(char* digits, int* returnSize) {
	if (!strcmp(digits, "") || digits == NULL) {				//空直接返回 
		*returnSize = 0;
		return NULL;
	}

	const char* str[8] = { "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
	int inputLength = strlen(digits);							//输入的长度 
	int* number = (int*)malloc(sizeof(int) * inputLength);
	int outputLength = 1;										//输出的个数 
	for (int i = 0; i < inputLength; i++) {						//得出最终输出个数 
		number[i] = digits[i] - '0';							//相对于 0 的差值（ASCII码） 
		outputLength *= strlen(str[number[i] - 2]);				//从 2 开始的 
	}
	char** ch = (char**)malloc(sizeof(char*) * outputLength);	//分配二级指针空间 
	for (int i = 0; i < outputLength; i++) {
		ch[i] = (char*)malloc(sizeof(char) * (inputLength + 1));//分配一级指针空间，多分配一个放截至符 
	}

	int k = 1;
	for (int i = 0; i < inputLength; i++) {
		int len = strlen(str[number[i] - 2]);					//定义当前数字代表几个字符 
		k *= len;
		int block = outputLength / k;							//计算间隔 
		for (int j = 0; j < k; j++) {							//依次加入当前数字的字符 
			for (int r = j * block; r < (j + 1) * block; r++) {	//按间隔赋值 
				ch[r][i] = str[number[i] - 2][j % len];			
			}
		}
	}

	for (int i = 0; i < outputLength; i++) {					//截至符 
		ch[i][inputLength] = '\0';
	}
	*returnSize = outputLength;
	return ch;
}
 
