/*����һ������������ 2-9 ���ַ����������������ܱ�ʾ����ĸ��ϡ�
�������ֵ���ĸ��ӳ�����£���绰������ͬ����ע�� 1 ����Ӧ�κ���ĸ��*/
char** letterCombinations(char* digits, int* returnSize) {
	if (!strcmp(digits, "") || digits == NULL) {				//��ֱ�ӷ��� 
		*returnSize = 0;
		return NULL;
	}

	const char* str[8] = { "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
	int inputLength = strlen(digits);							//����ĳ��� 
	int* number = (int*)malloc(sizeof(int) * inputLength);
	int outputLength = 1;										//����ĸ��� 
	for (int i = 0; i < inputLength; i++) {						//�ó������������ 
		number[i] = digits[i] - '0';							//����� 0 �Ĳ�ֵ��ASCII�룩 
		outputLength *= strlen(str[number[i] - 2]);				//�� 2 ��ʼ�� 
	}
	char** ch = (char**)malloc(sizeof(char*) * outputLength);	//�������ָ��ռ� 
	for (int i = 0; i < outputLength; i++) {
		ch[i] = (char*)malloc(sizeof(char) * (inputLength + 1));//����һ��ָ��ռ䣬�����һ���Ž����� 
	}

	int k = 1;
	for (int i = 0; i < inputLength; i++) {
		int len = strlen(str[number[i] - 2]);					//���嵱ǰ���ִ������ַ� 
		k *= len;
		int block = outputLength / k;							//������ 
		for (int j = 0; j < k; j++) {							//���μ��뵱ǰ���ֵ��ַ� 
			for (int r = j * block; r < (j + 1) * block; r++) {	//�������ֵ 
				ch[r][i] = str[number[i] - 2][j % len];			
			}
		}
	}

	for (int i = 0; i < outputLength; i++) {					//������ 
		ch[i][inputLength] = '\0';
	}
	*returnSize = outputLength;
	return ch;
}
 
