1-Hellow World
===

步驟
---
1. 新增一個資料夾
2. 在編輯器中打開資料夾
3. 在資料夾下新增一個檔案 test.c
4. 將以下程式碼複製到 test.c 中
	```
	#include <stdio.h>

	int main() {
		printf("%s", "Hello World\n");
		return 0;
	}
	```
5. 打開命令提示字元(要切換到該資料夾)，輸入
	```
	gcc -o test test.c
	```
6. 最後可以看到結果
	```
	> Hello World
	```

說明
---
可以參考上面test.c裡面的註解