// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#define _USE_MATH_DEFINES

#include <math.h>
//#include<string>
//#include<cstdio>
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT3_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Float)
	double result = 0;
	float num = 0;
	float stack;
	float a;
	int flag = 11;
	int ope = 11;
	int mac = 11;
	int aope = 0;


	//int flag1 = 0;
	void ope_func(int x);
	void num_func(int x);
	double factorial(int x);
	float maclaurin_sin(float x, int n);
	float maclaurin_cos(float x, int n);
	float maclaurin_tan(float x, int n);
	float maclaurin_e(float x, int n);
	float maclaurin_a(float a, float x, int n);

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		int Fire();

	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry&, float) override;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UTextBlock* result_text = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UTextBlock* func_text = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UTextBlock* debbug = nullptr;
	//UPROPERTY(EditAnywhere, meta = (BindWidget))
	//	class UImage* Sample_Image = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button0 = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button1 = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button2 = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button3 = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button4 = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button5 = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button6 = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button7 = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button8 = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button9 = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* buttonnext = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button_equal = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button_plus = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button_minus = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button_multi = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button_divi = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button_pi = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button_AC = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* Button_C = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button_ope = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button_sin = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button_cos = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button_tan = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button_e = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button_log = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UButton* button_a = nullptr;
	


};
