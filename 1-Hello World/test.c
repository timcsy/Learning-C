// 我是單行註解

/* 我是多行註解
   第二行
	 第三行  */

//-----------------標頭檔區 (Header)-----------------//
// #include 是引用別人寫好的一些東西
#include <stdio.h> // stdio 意思是 standard input output 的縮寫， .h 結尾代表這個是標頭檔

//------------------主程式區 (Main)------------------//
// int 是 integer(整數)，int main(){} 是程式的進入點
int main() {
	// printf 是 print format(格式化輸出)，printf 需要在標頭檔區引入 stdio.h 才能使用
	// %s 是指印出後面的字串(String)，字串是用""包圍的一串文字
	// \n 是換行符號
	printf("%s", "Hello World\n"); // 寫C的程式每個敘述(statement)最後一定要加分號(;)
	return 0; // 告訴呼叫者(命令提示字元)說我執行完了
}