// Fill out your copyright notice in the Description page of Project Settings.
#define _USE_MATH_DEFINES

#include "MyUserWidget.h"
//#include "Components/Button.h"

#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Math/UnrealMathUtility.h"
#include "Components/Button.h"

FString String(TEXT("test"));
FString Funk(TEXT(""));
FString RE(TEXT(""));


//FString::SanitizeFloat(result)


int UMyUserWidget::Fire() {
	double k = 1;
	
	return 1;
}

/*int UMyUserWidget::factorial(int x) {

	int ans = 1;
	for (int i = x; i > 1; i--) {
		ans *= i;
	}

	return ans;
}*/

double UMyUserWidget::factorial(int x) {
	double k = 1;
	for (int i = 1; i <= x; i++) {
		k *= i;
	}
	return k;
}


long int kaijou(int n) {
	long long int a = 1;
	while (n > 0) {
		a *= n;
		n--;
	}
	return a;
}


float UMyUserWidget::maclaurin_sin(float x, int n) {
	float ans = 0;
	for (int i = 0; i < n; i++) {
		long int b = factorial((2 * i) + 1);
		ans += pow(-1, i) * (pow(x, (2 * i) + 1) / b);
	}
	return ans;
	//return  pow(-1, n - 1) * pow(x, 1 + 2 * (n - 1)) / factorial(1 + 2 * (n - 1)) + maclaurin_sin(x, n - 1);
}



void UMyUserWidget::ope_func(int x) {
	if (ope < 0) {

		if (ope == -11) {
			result = num;
		}
		
		if (x == 1) {
			Funk += FString::SanitizeFloat(num);
			Funk += TEXT("+");

		}
		else if (x == 2) {
			Funk += FString::SanitizeFloat(num);
			Funk += TEXT("-");

		}
		else if (x == 3) {
			Funk += FString::SanitizeFloat(num);
			Funk += TEXT("*");


		}
		else if (x == 4) {
			Funk += FString::SanitizeFloat(num);
			Funk += TEXT("/");
		}
		



		if (ope == -1) {
			result += num;
			//Funk += FString::FromInt(num);
		

		}
		else if (ope == -2) {
			result -= num;
			//Funk += FString::FromInt(num);

		}
		else if (ope == -3) {
			result *= num;
			//Funk += FString::FromInt(num);

		}
		else if (ope == -4) {

			if (num == 0) {
				String = TEXT("ERR");
				Funk = TEXT("ERR");
				result = 0;
				stack = 0;
			}
			else {
				result /= num;
				//Funk += FString::FromInt(num);
			}
		}
		else if (ope == -5) {

		}
		
		if (x == 5) {
			Funk += FString::SanitizeFloat(num);
			Funk += TEXT("=");
			Funk += FString::SanitizeFloat(result);

		}

		num = 0;


	}
	

}

void UMyUserWidget::num_func(int x) {
	if (ope > 0) {
		ope *= -1;
	}
	if (mac > 0&&mac!=11) {
		mac *= -1;
	}
	if (aope > 0) {
		aope *= -1;
	}

	if (flag != x) {
		if (ope != -2) {
			num *= 10;
			num += x;
			FString num_string(FString::FromInt(num));
			String = num_string;
			//this->result_text->SetText(FText::FromString(num_string));
			flag = x;
		}
		else {
			num *= 10;
			num += x;
			FString num_string(TEXT("-"));
			num_string += FString::FromInt(num);
			String = num_string;
			//this->result_text->SetText(FText::FromString(num_string));
			flag = x;
		}
	}
}


void UMyUserWidget::NativeConstruct()
{
	Super::NativeConstruct();
	check(this->result_text);
	check(this->button0);

	num = 0;
	result = 0;
	stack = 0;
	ope = 11;
	flag = 11;
	mac = 11;
	aope = 0;
	String = TEXT("0");
	Funk = TEXT("");

	//check(this->Sample_Image);
	//this->result_text->SetText(FText::FromString(String));
}
void UMyUserWidget::NativeTick(const FGeometry& g, float InDeltaTime)
{
	//float a=-0.00104818279603851108;
	//FString num_string(FString::SanitizeFloat(a));
	Super::NativeTick(g, InDeltaTime);
	//FString String(TEXT("test"));
	this->func_text->SetText(FText::FromString(Funk));
	this->result_text->SetText(FText::FromString(String));
	RE = FString::SanitizeFloat(result);
	this->debbug->SetText(FText::AsNumber(result));
	
	
	///入力部のボタンの処理////////////////////////////////////////////////////////////////////////
	

	if (this->button0->IsPressed()) {
		//this->result_text->SetText(FText::FromString(String));
		this->num_func(0);
	}

	if (this->button1->IsPressed()) {
		//this->result_text->SetText(FText::FromString(String));
		this->num_func(1);
	}
	if (this->button2->IsPressed()) {
		//this->result_text->SetText(FText::FromString(String));
		this->num_func(2);
	}

	if (this->button3->IsPressed()) {
		//this->result_text->SetText(FText::FromString(String));
		this->num_func(3);
	}

	if (this->button4->IsPressed()) {
		//this->result_text->SetText(FText::FromString(String));
		this->num_func(4);
	}

	if (this->button5->IsPressed()) {
		//this->result_text->SetText(FText::FromString(String));
		this->num_func(5);
	}

	if (this->button6->IsPressed()) {
		//this->result_text->SetText(FText::FromString(String));
		this->num_func(6);
	}

	if (this->button7->IsPressed()) {
		//this->result_text->SetText(FText::FromString(String));
		this->num_func(7);
	}

	if (this->button8->IsPressed()) {
		//this->result_text->SetText(FText::FromString(String));
		this->num_func(8);
	}

	if (this->button9->IsPressed()) {
		//this->result_text->SetText(FText::FromString(String));
		this->num_func(9);
	}

	if (this->button_pi->IsPressed()) {
		if (ope > 0) {
			ope *= -1;
		}
		num = 3.14159265358979;
		String=FString::SanitizeFloat(num);
		
	}

	if (this->Button_C->IsPressed()) {
		num = 0;
		String = FString::FromInt(num);
	}

	if (this->button_AC->IsPressed()) {
		num = 0;
		result = 0;
		stack = 0;
		ope = 11;
		flag = 11;
		mac = 11;
		aope = 0;
		String = TEXT("0");
		Funk=TEXT("");
		

	}

	if (this->button_ope->IsPressed()) {
		num *= -1;
		String = FString::FromInt(num);
	}

	if (this->buttonnext->IsPressed()) {
		//this->result_text->SetText(FText::FromString(String));
		flag = 11;
	}
	////////////////////////////////////////////////////////////////////////



	//計算部分のボタン///////////////////////////////////////////////////////

	if (this->button_plus->IsPressed()) {
		ope_func(1);
		ope = 1;
		

	}
	if (this->button_minus->IsPressed()) {
		ope_func(2);
		ope = 2;
		
	}
	if (this->button_multi->IsPressed()) {
		ope_func(3);
		ope = 3;
		
	}
	if (this->button_divi->IsPressed()) {
		ope_func(4);
		ope = 4;
		
	}
	if (this->button_equal->IsPressed()) {
		ope_func(5);
		ope = 5;

	}

	////////////////////////////////////////////////////////////////////////

	//マクローリン展開のボタンの処理/////////////////////////////////////

	if (this->button_sin->IsPressed()) {
		if (mac > 0) {
			stack = result;
			Funk = TEXT("Please enter n number tet");
			mac = 1;
		}
		else if (mac < 0) {
			long double ans = 0;

			int count = 0;
			int j = 0;
			while (1) {
				if (count >= num) {
					break;
				}
				if (j % 4 == 1) {
					ans = ans + pow(stack, j) / factorial(j);
					count++;
				}
				if (j % 4 == 3) {
					ans = ans - pow(stack, j) / factorial(j);
					count++;
				}
				j++;
			}



			//Funk= FString::SanitizeFloat();
			String = FString::SanitizeFloat(ans);
			//String = FText::AsNumber(result);
			mac = 0;
		}

	}


	if (this->button_cos->IsPressed()) {
		if (mac > 0) {
			stack = result;
			Funk = TEXT("Please enter n number tet");
			mac = 1;
		}
		else if (mac < 0) {
			long double ans = 0;

			int count = 0;
			int j = 0;
			while (1) {
				if (count >= num) {
					break;
				}
				if (j % 4 == 0) {
					ans = ans + pow(stack, j) / factorial(j);
					count++;
				}
				if (j % 4 == 2) {
					ans = ans - pow(stack, j) / factorial(j);
					count++;
				}
				j++;
			}



			//Funk= FString::SanitizeFloat();
			String = FString::SanitizeFloat(ans);
			//String = FText::AsNumber(result);
			mac = 0;
		}

	}


	if (this->button_tan->IsPressed()) {
		if (mac > 0) {
			stack = result;
			Funk = TEXT("Please enter n number tet");
			mac = 1;
		}
		else if (mac < 0) {
			long double sin = 0;

			int count = 0;
			int j = 0;
			while (1) {
				if (count >= num) {
					break;
				}
				if (j % 4 == 0) {
					sin = sin + pow(stack, j) / factorial(j);
					count++;
				}
				if (j % 4 == 2) {
					sin = sin - pow(stack, j) / factorial(j);
					count++;
				}
				j++;
			}

			long double cos = 0;

			int co = 0;
			int i = 0;
			while (1) {
				if (co >= num) {
					break;
				}
				if (i % 4 == 1) {
					cos = cos + pow(stack, i) / factorial(i);
					co++;
				}
				if (i % 4 == 3) {
					cos = cos - pow(stack, i) / factorial(i);
					co++;
				}
				i++;
			}

			long double ans = sin / cos;

			//Funk= FString::SanitizeFloat();
			//Funk = FString::SanitizeFloat(cos);
			//Funk += FString::SanitizeFloat(sin);
			String = FString::SanitizeFloat(ans);
			//String = FText::AsNumber(result);
			mac = 0;
		}

	}

	if (this->button_e->IsPressed()) {
		if (mac > 0) {
			stack = result;
			Funk = TEXT("Please enter n number tet");
			mac = 1;
		}
		else if (mac < 0) {
			long double ans = 0;
			long double tmp;
			int count = 0;
			while (count < num) {
				tmp = pow(stack, count) / factorial(count);
				ans = ans + tmp;
				count = count + 1;
			}

			
			//Funk= FString::SanitizeFloat();
			String = FString::SanitizeFloat(ans);
			//String = FText::AsNumber(result);
			mac = 0;
		}

	}

	if (this->button_log->IsPressed()) {
		if (mac > 0) {
			stack = result;
			stack = stack - 1;
			Funk = TEXT("Please enter n number tet");
			mac = 1;
		}
		else if (mac < 0) {
			long double ans = 0;
			long double tmp=0;
			int count = 1;
			while (count < num) {
				tmp = pow(stack, count) / count;
				if (count % 2 == 0) {
					tmp = tmp * -1;
				}
				ans = ans + tmp;
				tmp = 1;
				count = count + 1;
			}


			//Funk= FString::SanitizeFloat();
			String = FString::SanitizeFloat(ans);
			//String = FText::AsNumber(result);
			mac = 0;
		}

	}

	if (this->button_a->IsPressed()) {
		if (mac > 0) {
			stack = result;
			Funk = TEXT("Please enter a number tet");
			mac = 1;
		}
		else if (mac < 0) {
			a = num;
			Funk = TEXT("Please enter n number tet");

			aope = 1;
			mac = 0;
		}
		else if (aope < 0) {
			long double ans = 0;
			int count = 0;
			while (1) {
				if (count >= num) {
					break;
				}
				ans = ans + pow(log(a), count) * pow(stack, count) / factorial(count);
				count++;
			}


			//Funk= FString::SanitizeFloat();

			//Funk = FString::SanitizeFloat(stack);
			//Funk += FString::SanitizeFloat(a);

			String = FString::SanitizeFloat(ans);
			//String = FText::AsNumber(result);
			mac = 0;
		}

	}



	//////////////////////////////////////////////////////////////////////
}