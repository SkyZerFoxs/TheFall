// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseClass/TFCharacter.h"
#include "Components/StatlineComponent.h"
//#include "TFPlayerCharacter.h"
#include "BaseClass/TFPlayerCharacter.h"
// Sets default values
ATFCharacter::ATFCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Statline = CreateDefaultSubobject<UStatlineComponent>(TEXT("StatLine"));
	Statline->SetMovementCompReference(GetCharacterMovement());


}

// Called when the game starts or when spawned
void ATFCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATFCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATFCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATFCharacter::HasJumped()
{
	Statline->HasJumped();
	ACharacter::Jump();
}


bool ATFCharacter::CanJump() const
{
	return Statline->CanJump();
}

void ATFCharacter::SetSprinting(const bool& IsSprinting)
{
	Statline->SetSprinting(IsSprinting);
}
bool ATFCharacter::CanSprint() const
{
	return Statline->CanSprint();
}