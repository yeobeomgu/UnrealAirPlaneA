// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

AMyGameModeBase::AMyGameModeBase()
{
		// 프로그램 화면창
		// 생성자인 경우 아직 모듈이 안불러와져 있어 GEngine이 가비지 값이 잡혀있다.
		// 그래서 if로 조건을 걸어 생성이 되었다면 뜨게 만든다.
	if (GEngine)
	{
	 GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("안녕하세요"));
	}

		// 출력창
	UE_LOG(LogTemp, Warning, TEXT("Hello world!"));

}
