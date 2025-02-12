#include <iostream>
#include"clsUtility.h"

using namespace std;
int main()
{
	clsUtility::Srand();
	//cout << clsUtility::RandFunction(1, 10);
	//cout << clsUtility::RandomChar(clsUtility::Mix) << endl;
	//cout << clsUtility::GenerteWord(clsUtility::Mix, 8);
	//cout << clsUtility::GenerateKey(clsUtility::Mix);
	//clsUtility::Generatekeys(10, clsUtility::Mix);

	// Swap Int

	//int x = 10, y = 20;
	//cout << "Befor Swap x = " << x << " y = " << y << endl;
	//clsUtility::Swap(x, y);
	//cout << "After Swap x = " << x << " y = " << y << endl;

	//double a = 10.5, b = 20.5;
	//cout << "Befor Swap x = " << a << " y = " << b << endl;
	//clsUtility::Swap(a, b);
	//cout << "After Swap x = " << a << " y = " << b << endl;

	//Swap String 

	//string str1 = "Ahmed", str2 = "Mohamed";
	//cout << "Befor Swap  = " << str1 +" "+ str2 << endl;
	//clsUtility::Swap(str1, str2);
	//cout << "After Swap  = " << str1 + " " + str2 << endl;

	//Date Swap 

	//DateLibrary Date1(1,5,2022);
	//DateLibrary Date2(20, 2, 2023);
	//cout << "Befor Swap Date1 = "<< Date1.DateToString() << " Date2 = "<< Date2.DateToString() << endl;
	//clsUtility::Swap(Date1, Date2);
	//cout << "After Swap Date1 = " << Date1.DateToString() << " Date2 = " << Date2.DateToString() << endl;
	
	//Shuffle int Array 

	//int arr[] = { 1,2,3,4,5 };
	//clsUtility::ShuffleArray(arr, 5);
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << arr[i] << " ";
	//}

	//Shuffle String Array

	//string arrStr[] = {"Ahmed","Mohamed","Ali","Hamza","Mahmoud"};
	//clsUtility::ShuffleArray(arrStr, 5);
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << arrStr[i] << " ";
	//}

	// Fill Array With Random Number

	//int arr2[5];
	//clsUtility::FillArrayWithRandomNumber(arr2, 5, 10, 15);

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << arr2[i] << " ";
	//}

	// Fill Array With Random Words
	
	//string words[5];
	//clsUtility::FillArrayWithRandomWords(words, 5,clsUtility::Mix, 5);

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << words[i] << " ";
	//}

	//Fill Array With Random Keys 

	//string keys[5];
	//clsUtility::FillArrayWithRandomKeys(keys, 5,clsUtility::Mix);

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << keys[i] << endl;
	//}

	// Taps 

	//cout << "test1" << clsUtility::Taps(5) << "test2" << endl;


	//Encryption Text

	short encryptKey = 2;
	string text = "Mahmoud";
	string textAfterEncrption, textAfterDecrption;
	textAfterEncrption = clsUtility::EncryptText(text, encryptKey);
	textAfterDecrption = clsUtility::DecryptText(textAfterEncrption, encryptKey);
	cout << "Text Befor Encrption : " << text <<endl;
	cout << "Text After Encrption : " << textAfterEncrption << endl;
	cout << "Text After Decrption : " << textAfterDecrption << endl;
	return 0;
}
