// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

std::string UObject::GetFullName() const
{
	std::string name;

	if (Class != nullptr)
	{
		std::string temp;
		for (auto p = Outer; p; p = p->Outer)
		{
			temp = p->GetName() + "." + temp;
		}

		name = Class->GetName();
		name += " ";
		name += temp;
		name += GetName();
	}

	return name;
}

bool UObject::IsA(UClass* cmp) const
{
	for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
	{
		if (super == cmp)
		{
			return true;
		}
	}

	return false;
}

// Function Core.Object.ToHDI
// (Final, Defined, Static, Public, HasDefaults)
// Parameters:
// struct FString                 In                             (Parm, CoerceParm, NeedCtorLink)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_ToHDI(const struct FString& In)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ToHDI");

	UObject_ToHDI_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClampHDI
// (Final, Defined, Static, Public)
// Parameters:
// struct FHighDigitInt           Value                          (Parm)
// struct FHighDigitInt           Min                            (Parm)
// struct FHighDigitInt           Max                            (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_ClampHDI(const struct FHighDigitInt& Value, const struct FHighDigitInt& Min, const struct FHighDigitInt& Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampHDI");

	UObject_ClampHDI_Params params;
	params.Value = Value;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.AsInt
// (Final, Defined, Static, Public)
// Parameters:
// struct FHighDigitInt           toConvert                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_AsInt(const struct FHighDigitInt& toConvert)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AsInt");

	UObject_AsInt_Params params;
	params.toConvert = toConvert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyByInt
// (Final, Defined, Static, Public, HasOutParms)
// Parameters:
// struct FHighDigitInt           A                              (Parm, OutParm)
// int                            Mult                           (Parm)

void UObject::STATIC_MultiplyByInt(int Mult, struct FHighDigitInt* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyByInt");

	UObject_MultiplyByInt_Params params;
	params.Mult = Mult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;
}


// Function Core.Object.DivideByInt
// (Final, Defined, Static, Public, HasOutParms)
// Parameters:
// struct FHighDigitInt           A                              (Parm, OutParm)
// int                            divisor                        (Parm)

void UObject::STATIC_DivideByInt(int divisor, struct FHighDigitInt* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideByInt");

	UObject_DivideByInt_Params params;
	params.divisor = divisor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;
}


// Function Core.Object.GetHighIntThousandsSeparator
// (Final, Defined, Static, Public)
// Parameters:
// float                          Value                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_GetHighIntThousandsSeparator(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetHighIntThousandsSeparator");

	UObject_GetHighIntThousandsSeparator_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetHighIntNumberFormatInDecimal
// (Final, Defined, Static, HasOptionalParms, Public, HasOutParms)
// Parameters:
// float                          Value                          (Parm)
// struct FString                 suffix                         (Parm, NeedCtorLink)
// float                          suffixValue                    (Parm)
// float                          nextValue                      (Parm)
// float                          outFloat                       (Parm, OutParm)
// int                            sigFigs                        (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_GetHighIntNumberFormatInDecimal(float Value, const struct FString& suffix, float suffixValue, float nextValue, int sigFigs, float* outFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetHighIntNumberFormatInDecimal");

	UObject_GetHighIntNumberFormatInDecimal_Params params;
	params.Value = Value;
	params.suffix = suffix;
	params.suffixValue = suffixValue;
	params.nextValue = nextValue;
	params.sigFigs = sigFigs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outFloat != nullptr)
		*outFloat = params.outFloat;

	return params.ReturnValue;
}


// Function Core.Object.GetHighDigitIntNumberFormat
// (Final, Defined, Static, HasOptionalParms, Public)
// Parameters:
// int                            num1                           (Parm)
// int                            num2                           (OptionalParm, Parm)
// int                            num3                           (OptionalParm, Parm)
// int                            num4                           (OptionalParm, Parm)
// int                            sigFigs                        (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_GetHighDigitIntNumberFormat(int num1, int num2, int num3, int num4, int sigFigs)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetHighDigitIntNumberFormat");

	UObject_GetHighDigitIntNumberFormat_Params params;
	params.num1 = num1;
	params.num2 = num2;
	params.num3 = num3;
	params.num4 = num4;
	params.sigFigs = sigFigs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetHighDigitIntNumberFormatHDI
// (Final, Defined, Static, HasOptionalParms, Public)
// Parameters:
// struct FHighDigitInt           theInt                         (Parm)
// int                            sigFigs                        (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_GetHighDigitIntNumberFormatHDI(const struct FHighDigitInt& theInt, int sigFigs)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetHighDigitIntNumberFormatHDI");

	UObject_GetHighDigitIntNumberFormatHDI_Params params;
	params.theInt = theInt;
	params.sigFigs = sigFigs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.CompareHighDigitInt
// (Final, Defined, Static, Public)
// Parameters:
// struct FHighDigitInt           num1                           (Parm)
// struct FHighDigitInt           num2                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_CompareHighDigitInt(const struct FHighDigitInt& num1, const struct FHighDigitInt& num2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.CompareHighDigitInt");

	UObject_CompareHighDigitInt_Params params;
	params.num1 = num1;
	params.num2 = num2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.CalculateHighDigitInt
// (Final, Defined, Static, Public, HasDefaults)
// Parameters:
// struct FHighDigitInt           HighInt                        (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_CalculateHighDigitInt(const struct FHighDigitInt& HighInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.CalculateHighDigitInt");

	UObject_CalculateHighDigitInt_Params params;
	params.HighInt = HighInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SetHighIntValue
// (Final, Defined, Static, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FHighDigitInt           A                              (Parm, OutParm)
// int                            val1                           (Parm)
// int                            val2                           (OptionalParm, Parm)
// int                            val3                           (OptionalParm, Parm)
// int                            val4                           (OptionalParm, Parm)

void UObject::STATIC_SetHighIntValue(int val1, int val2, int val3, int val4, struct FHighDigitInt* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SetHighIntValue");

	UObject_SetHighIntValue_Params params;
	params.val1 = val1;
	params.val2 = val2;
	params.val3 = val3;
	params.val4 = val4;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;
}


// Function Core.Object.NotEqual_HighDigitIntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_NotEqual_HighDigitIntHighDigitInt(const struct FHighDigitInt& A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_HighDigitIntHighDigitInt");

	UObject_NotEqual_HighDigitIntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_HighDigitIntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_EqualEqual_HighDigitIntHighDigitInt(const struct FHighDigitInt& A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_HighDigitIntHighDigitInt");

	UObject_EqualEqual_HighDigitIntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_HighDigitIntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_GreaterEqual_HighDigitIntHighDigitInt(const struct FHighDigitInt& A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_HighDigitIntHighDigitInt");

	UObject_GreaterEqual_HighDigitIntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_HighDigitIntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_LessEqual_HighDigitIntHighDigitInt(const struct FHighDigitInt& A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_HighDigitIntHighDigitInt");

	UObject_LessEqual_HighDigitIntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_HighDigitIntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_Less_HighDigitIntHighDigitInt(const struct FHighDigitInt& A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_HighDigitIntHighDigitInt");

	UObject_Less_HighDigitIntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_HighDigitIntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_Greater_HighDigitIntHighDigitInt(const struct FHighDigitInt& A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_HighDigitIntHighDigitInt");

	UObject_Greater_HighDigitIntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_HighDigitIntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_Subtract_HighDigitIntHighDigitInt(const struct FHighDigitInt& A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_HighDigitIntHighDigitInt");

	UObject_Subtract_HighDigitIntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_HighDigitIntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_Add_HighDigitIntHighDigitInt(const struct FHighDigitInt& A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_HighDigitIntHighDigitInt");

	UObject_Add_HighDigitIntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_HighDigitIntInt
// (Final, Defined, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FHighDigitInt           A                              (Parm, OutParm)
// int                            B                              (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_MultiplyEqual_HighDigitIntInt(int B, struct FHighDigitInt* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_HighDigitIntInt");

	UObject_MultiplyEqual_HighDigitIntInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_HighDigitIntInt
// (Final, Defined, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FHighDigitInt           A                              (Parm, OutParm)
// int                            B                              (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_DivideEqual_HighDigitIntInt(int B, struct FHighDigitInt* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_HighDigitIntInt");

	UObject_DivideEqual_HighDigitIntInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_HighDigitIntInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// int                            B                              (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_Multiply_HighDigitIntInt(const struct FHighDigitInt& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_HighDigitIntInt");

	UObject_Multiply_HighDigitIntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Divide_HighDigitIntInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// int                            B                              (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_Divide_HighDigitIntInt(const struct FHighDigitInt& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_HighDigitIntInt");

	UObject_Divide_HighDigitIntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_HighDigitIntInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// int                            B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_LessEqual_HighDigitIntInt(const struct FHighDigitInt& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_HighDigitIntInt");

	UObject_LessEqual_HighDigitIntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_IntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_GreaterEqual_IntHighDigitInt(int A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_IntHighDigitInt");

	UObject_GreaterEqual_IntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_HighDigitIntInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// int                            B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_GreaterEqual_HighDigitIntInt(const struct FHighDigitInt& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_HighDigitIntInt");

	UObject_GreaterEqual_HighDigitIntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_IntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_LessEqual_IntHighDigitInt(int A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_IntHighDigitInt");

	UObject_LessEqual_IntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_HighDigitIntInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// int                            B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_Less_HighDigitIntInt(const struct FHighDigitInt& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_HighDigitIntInt");

	UObject_Less_HighDigitIntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_IntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_Greater_IntHighDigitInt(int A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_IntHighDigitInt");

	UObject_Greater_IntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_HighDigitIntInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// int                            B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_Greater_HighDigitIntInt(const struct FHighDigitInt& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_HighDigitIntInt");

	UObject_Greater_HighDigitIntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_IntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_Less_IntHighDigitInt(int A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_IntHighDigitInt");

	UObject_Less_IntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_IntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_NotEqual_IntHighDigitInt(int A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_IntHighDigitInt");

	UObject_NotEqual_IntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_HighDigitIntInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// int                            B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_NotEqual_HighDigitIntInt(const struct FHighDigitInt& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_HighDigitIntInt");

	UObject_NotEqual_HighDigitIntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_IntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_EqualEqual_IntHighDigitInt(int A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_IntHighDigitInt");

	UObject_EqualEqual_IntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_HighDigitIntInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// int                            B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_EqualEqual_HighDigitIntInt(const struct FHighDigitInt& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_HighDigitIntInt");

	UObject_EqualEqual_HighDigitIntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_HighDigitIntHighDigitInt
// (Final, Defined, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FHighDigitInt           A                              (Parm, OutParm)
// struct FHighDigitInt           B                              (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_SubtractEqual_HighDigitIntHighDigitInt(const struct FHighDigitInt& B, struct FHighDigitInt* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_HighDigitIntHighDigitInt");

	UObject_SubtractEqual_HighDigitIntHighDigitInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_HighDigitIntInt
// (Final, Defined, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FHighDigitInt           A                              (Parm, OutParm)
// int                            B                              (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_SubtractEqual_HighDigitIntInt(int B, struct FHighDigitInt* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_HighDigitIntInt");

	UObject_SubtractEqual_HighDigitIntInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_HighDigitIntInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// int                            B                              (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_Subtract_HighDigitIntInt(const struct FHighDigitInt& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_HighDigitIntInt");

	UObject_Subtract_HighDigitIntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_IntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_Subtract_IntHighDigitInt(int A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_IntHighDigitInt");

	UObject_Subtract_IntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_HighDigitIntHighDigitInt
// (Final, Defined, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FHighDigitInt           A                              (Parm, OutParm)
// struct FHighDigitInt           B                              (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_AddEqual_HighDigitIntHighDigitInt(const struct FHighDigitInt& B, struct FHighDigitInt* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_HighDigitIntHighDigitInt");

	UObject_AddEqual_HighDigitIntHighDigitInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_HighDigitIntInt
// (Final, Defined, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FHighDigitInt           A                              (Parm, OutParm)
// int                            B                              (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_AddEqual_HighDigitIntInt(int B, struct FHighDigitInt* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_HighDigitIntInt");

	UObject_AddEqual_HighDigitIntInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Add_HighDigitIntInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FHighDigitInt           A                              (Parm)
// int                            B                              (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_Add_HighDigitIntInt(const struct FHighDigitInt& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_HighDigitIntInt");

	UObject_Add_HighDigitIntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_IntHighDigitInt
// (Final, Defined, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// struct FHighDigitInt           B                              (Parm)
// struct FHighDigitInt           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHighDigitInt UObject::STATIC_Add_IntHighDigitInt(int A, const struct FHighDigitInt& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_IntHighDigitInt");

	UObject_Add_IntHighDigitInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsTemplate
// (Final, Native, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::IsTemplate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsTemplate");

	UObject_IsTemplate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsDefaultObject
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 anObject                       (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_IsDefaultObject(class UObject* anObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsDefaultObject");

	UObject_IsDefaultObject_Params params;
	params.anObject = anObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetBaseArchetype
// (Final, Defined, Public)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UObject::GetBaseArchetype()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetBaseArchetype");

	UObject_GetBaseArchetype_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsInteger
// (Defined, Static, Public)
// Parameters:
// float                          val                            (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_IsInteger(float val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsInteger");

	UObject_IsInteger_Params params;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SignedIntFromByteInt
// (Defined, Static, Public)
// Parameters:
// int                            val                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_SignedIntFromByteInt(int val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SignedIntFromByteInt");

	UObject_SignedIntFromByteInt_Params params;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SignedIntToByteInt
// (Defined, Static, Public)
// Parameters:
// int                            val                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_SignedIntToByteInt(int val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SignedIntToByteInt");

	UObject_SignedIntToByteInt_Params params;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SignedIntFromByte
// (Defined, Static, Public)
// Parameters:
// unsigned char                  val                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_SignedIntFromByte(unsigned char val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SignedIntFromByte");

	UObject_SignedIntFromByte_Params params;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SignedIntToByte
// (Defined, Static, Public)
// Parameters:
// int                            val                            (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_SignedIntToByte(int val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SignedIntToByte");

	UObject_SignedIntToByte_Params params;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LinearColorExp
// (Defined, Static, Public)
// Parameters:
// struct FLinearColor            col1                           (Parm)
// float                          tExp                           (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::STATIC_LinearColorExp(const struct FLinearColor& col1, float tExp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LinearColorExp");

	UObject_LinearColorExp_Params params;
	params.col1 = col1;
	params.tExp = tExp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LinearColorMult
// (Defined, Static, Public)
// Parameters:
// struct FLinearColor            col1                           (Parm)
// struct FLinearColor            col2                           (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::STATIC_LinearColorMult(const struct FLinearColor& col1, const struct FLinearColor& col2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LinearColorMult");

	UObject_LinearColorMult_Params params;
	params.col1 = col1;
	params.col2 = col2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LinearColorAddAndNormalize
// (Defined, Static, HasOptionalParms, Public, HasDefaults)
// Parameters:
// struct FLinearColor            col1                           (Parm)
// struct FLinearColor            col2                           (Parm)
// float                          extraMult                      (OptionalParm, Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::STATIC_LinearColorAddAndNormalize(const struct FLinearColor& col1, const struct FLinearColor& col2, float extraMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LinearColorAddAndNormalize");

	UObject_LinearColorAddAndNormalize_Params params;
	params.col1 = col1;
	params.col2 = col2;
	params.extraMult = extraMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LinearColorAdd
// (Defined, Static, Public)
// Parameters:
// struct FLinearColor            col1                           (Parm)
// struct FLinearColor            col2                           (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::STATIC_LinearColorAdd(const struct FLinearColor& col1, const struct FLinearColor& col2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LinearColorAdd");

	UObject_LinearColorAdd_Params params;
	params.col1 = col1;
	params.col2 = col2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ColorAdd
// (Defined, Static, Public, HasDefaults)
// Parameters:
// struct FColor                  color1                         (Parm)
// struct FColor                  color2                         (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_ColorAdd(const struct FColor& color1, const struct FColor& color2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ColorAdd");

	UObject_ColorAdd_Params params;
	params.color1 = color1;
	params.color2 = color2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ColorMult
// (Defined, Static, Public)
// Parameters:
// struct FColor                  color1                         (Parm)
// struct FColor                  color2                         (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_ColorMult(const struct FColor& color1, const struct FColor& color2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ColorMult");

	UObject_ColorMult_Params params;
	params.color1 = color1;
	params.color2 = color2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SignedRaiseToPower
// (Defined, Static, Public)
// Parameters:
// float                          Base                           (Parm)
// float                          power                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_SignedRaiseToPower(float Base, float power)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SignedRaiseToPower");

	UObject_SignedRaiseToPower_Params params;
	params.Base = Base;
	params.power = power;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ConvertSecondsToTimeString
// (Defined, Static, Public)
// Parameters:
// int                            TotalTimeInSeconds             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_ConvertSecondsToTimeString(int TotalTimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ConvertSecondsToTimeString");

	UObject_ConvertSecondsToTimeString_Params params;
	params.TotalTimeInSeconds = TotalTimeInSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetSignedString
// (Defined, Static, Public)
// Parameters:
// int                            Value                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_GetSignedString(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetSignedString");

	UObject_GetSignedString_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ChooseVectorComponents
// (Defined, Simulated, Static, Public, HasDefaults)
// Parameters:
// struct FVector                 V                              (Parm)
// unsigned long                  includeX                       (Parm)
// unsigned long                  includeY                       (Parm)
// unsigned long                  includeZ                       (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_ChooseVectorComponents(const struct FVector& V, unsigned long includeX, unsigned long includeY, unsigned long includeZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ChooseVectorComponents");

	UObject_ChooseVectorComponents_Params params;
	params.V = V;
	params.includeX = includeX;
	params.includeY = includeY;
	params.includeZ = includeZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ShortestDistanceBetweenAngles
// (Final, Defined, Static, Public)
// Parameters:
// float                          ang1                           (Parm)
// float                          ang2                           (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_ShortestDistanceBetweenAngles(float ang1, float ang2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ShortestDistanceBetweenAngles");

	UObject_ShortestDistanceBetweenAngles_Params params;
	params.ang1 = ang1;
	params.ang2 = ang2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.CalculateAngleOf2DVector
// (Final, Defined, Static, Public)
// Parameters:
// float                          XComp                          (Parm)
// float                          YComp                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_CalculateAngleOf2DVector(float XComp, float YComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.CalculateAngleOf2DVector");

	UObject_CalculateAngleOf2DVector_Params params;
	params.XComp = XComp;
	params.YComp = YComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FRandSigned
// (Final, Defined, Static, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FRandSigned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FRandSigned");

	UObject_FRandSigned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FLerp
// (Final, Defined, Static, HasOptionalParms, Public)
// Parameters:
// float                          Min                            (Parm)
// float                          Max                            (Parm)
// float                          Percent                        (Parm)
// unsigned long                  ClampToMin                     (OptionalParm, Parm)
// unsigned long                  ClampToMax                     (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FLerp(float Min, float Max, float Percent, unsigned long ClampToMin, unsigned long ClampToMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FLerp");

	UObject_FLerp_Params params;
	params.Min = Min;
	params.Max = Max;
	params.Percent = Percent;
	params.ClampToMin = ClampToMin;
	params.ClampToMax = ClampToMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FixDLLString
// (Final, Defined, Static, Public)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_FixDLLString(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FixDLLString");

	UObject_FixDLLString_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Trim
// (Final, Defined, Static, Public)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Trim(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Trim");

	UObject_Trim_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.TrimLeft
// (Final, Defined, Static, Public)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_TrimLeft(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TrimLeft");

	UObject_TrimLeft_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.TrimRight
// (Final, Defined, Static, Public)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_TrimRight(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TrimRight");

	UObject_TrimRight_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VariableLinearColorToVector
// (Final, Defined, Static, Public)
// Parameters:
// struct FLinearColor            col                            (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_VariableLinearColorToVector(const struct FLinearColor& col)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VariableLinearColorToVector");

	UObject_VariableLinearColorToVector_Params params;
	params.col = col;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LinearColorToVector
// (Final, Defined, Static, Public, HasOutParms)
// Parameters:
// struct FLinearColor            col                            (Const, Parm, OutParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_LinearColorToVector(struct FLinearColor* col)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LinearColorToVector");

	UObject_LinearColorToVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (col != nullptr)
		*col = params.col;

	return params.ReturnValue;
}


// Function Core.Object.ToRotator
// (Final, Defined, Static, Public, HasDefaults)
// Parameters:
// int                            Yaw                            (Parm)
// int                            Pitch                          (Parm)
// int                            Roll                           (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_ToRotator(int Yaw, int Pitch, int Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ToRotator");

	UObject_ToRotator_Params params;
	params.Yaw = Yaw;
	params.Pitch = Pitch;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ToVector2D
// (Final, Defined, Static, Public, HasDefaults)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::STATIC_ToVector2D(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ToVector2D");

	UObject_ToVector2D_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ToVector
// (Final, Defined, Simulated, Static, Public, HasDefaults)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          Z                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_ToVector(float X, float Y, float Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ToVector");

	UObject_ToVector_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ColorScale
// (Final, Defined, Static, HasOptionalParms, Public)
// Parameters:
// struct FColor                  col                            (Parm)
// float                          Scale                          (Parm)
// unsigned long                  ScaleAlpha                     (OptionalParm, Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_ColorScale(const struct FColor& col, float Scale, unsigned long ScaleAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ColorScale");

	UObject_ColorScale_Params params;
	params.col = col;
	params.Scale = Scale;
	params.ScaleAlpha = ScaleAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ColorScaleAlpha_Simulated
// (Final, Defined, Simulated, Public)
// Parameters:
// struct FColor                  col                            (Parm)
// float                          Alpha                          (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::ColorScaleAlpha_Simulated(const struct FColor& col, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ColorScaleAlpha_Simulated");

	UObject_ColorScaleAlpha_Simulated_Params params;
	params.col = col;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ColorScaleAlpha
// (Final, Defined, Static, Public)
// Parameters:
// struct FColor                  col                            (Parm)
// float                          Alpha                          (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_ColorScaleAlpha(const struct FColor& col, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ColorScaleAlpha");

	UObject_ColorScaleAlpha_Params params;
	params.col = col;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LinColorScaleAlpha
// (Final, Defined, Static, Public)
// Parameters:
// struct FLinearColor            col                            (Parm)
// float                          Alpha                          (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::STATIC_LinColorScaleAlpha(const struct FLinearColor& col, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LinColorScaleAlpha");

	UObject_LinColorScaleAlpha_Params params;
	params.col = col;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VectorToColorDD
// (Final, Defined, Static, Public, HasDefaults)
// Parameters:
// struct FVector                 vCol                           (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_VectorToColorDD(const struct FVector& vCol)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VectorToColorDD");

	UObject_VectorToColorDD_Params params;
	params.vCol = vCol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LinearColorToColorDD
// (Final, Native, Static, Public)
// Parameters:
// struct FLinearColor            lCol                           (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_LinearColorToColorDD(const struct FLinearColor& lCol)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LinearColorToColorDD");

	UObject_LinearColorToColorDD_Params params;
	params.lCol = lCol;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ColorLerp
// (Final, Native, Static, Public)
// Parameters:
// struct FColor                  A                              (Parm)
// struct FColor                  B                              (Parm)
// float                          Lerp                           (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_ColorLerp(const struct FColor& A, const struct FColor& B, float Lerp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ColorLerp");

	UObject_ColorLerp_Params params;
	params.A = A;
	params.B = B;
	params.Lerp = Lerp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LinearColorLerp
// (Final, Native, Static, Public)
// Parameters:
// struct FLinearColor            A                              (Parm)
// struct FLinearColor            B                              (Parm)
// float                          Lerp                           (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::STATIC_LinearColorLerp(const struct FLinearColor& A, const struct FLinearColor& B, float Lerp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LinearColorLerp");

	UObject_LinearColorLerp_Params params;
	params.A = A;
	params.B = B;
	params.Lerp = Lerp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ToLinearColor
// (Final, Defined, Static, HasOptionalParms, Public, HasDefaults)
// Parameters:
// float                          R                              (Parm)
// float                          G                              (Parm)
// float                          B                              (Parm)
// float                          A                              (OptionalParm, Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::STATIC_ToLinearColor(float R, float G, float B, float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ToLinearColor");

	UObject_ToLinearColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClampedYawLookTowardsAngle
// (Final, Defined, Static, Public)
// Parameters:
// struct FRotator                Start                          (Parm)
// struct FRotator                Dest                           (Parm)
// float                          clampYawDeg                    (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_ClampedYawLookTowardsAngle(const struct FRotator& Start, const struct FRotator& Dest, float clampYawDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampedYawLookTowardsAngle");

	UObject_ClampedYawLookTowardsAngle_Params params;
	params.Start = Start;
	params.Dest = Dest;
	params.clampYawDeg = clampYawDeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClampRotator
// (Final, Native, Static, Public)
// Parameters:
// struct FRotator                Start                          (Parm)
// struct FRotator                Dest                           (Parm)
// float                          clampDeg                       (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_ClampRotator(const struct FRotator& Start, const struct FRotator& Dest, float clampDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotator");

	UObject_ClampRotator_Params params;
	params.Start = Start;
	params.Dest = Dest;
	params.clampDeg = clampDeg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RotDegreesBetweenPitch
// (Final, Defined, Static, Public)
// Parameters:
// struct FRotator                rot1                           (Parm)
// struct FRotator                rot2                           (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_RotDegreesBetweenPitch(const struct FRotator& rot1, const struct FRotator& rot2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RotDegreesBetweenPitch");

	UObject_RotDegreesBetweenPitch_Params params;
	params.rot1 = rot1;
	params.rot2 = rot2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RotDegreesBetweenYaw
// (Final, Native, Public)
// Parameters:
// struct FRotator                rot1                           (Parm)
// struct FRotator                rot2                           (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::RotDegreesBetweenYaw(const struct FRotator& rot1, const struct FRotator& rot2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RotDegreesBetweenYaw");

	UObject_RotDegreesBetweenYaw_Params params;
	params.rot1 = rot1;
	params.rot2 = rot2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LineSegmentIntersectionWithPlane
// (Final, Defined, Static, Public)
// Parameters:
// struct FVector                 P1                             (Parm)
// struct FVector                 P2                             (Parm)
// struct FVector                 PlaneNormal                    (Parm)
// float                          PlaneDistance                  (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_LineSegmentIntersectionWithPlane(const struct FVector& P1, const struct FVector& P2, const struct FVector& PlaneNormal, float PlaneDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LineSegmentIntersectionWithPlane");

	UObject_LineSegmentIntersectionWithPlane_Params params;
	params.P1 = P1;
	params.P2 = P2;
	params.PlaneNormal = PlaneNormal;
	params.PlaneDistance = PlaneDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ConvertDegreeFloatToRotAxis
// (Final, Defined, Static, Public)
// Parameters:
// float                          Value                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_ConvertDegreeFloatToRotAxis(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ConvertDegreeFloatToRotAxis");

	UObject_ConvertDegreeFloatToRotAxis_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetSystemTime
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            Year                           (Parm, OutParm)
// int                            Month                          (Parm, OutParm)
// int                            DayOfWeek                      (Parm, OutParm)
// int                            Day                            (Parm, OutParm)
// int                            Hour                           (Parm, OutParm)
// int                            Min                            (Parm, OutParm)
// int                            Sec                            (Parm, OutParm)
// int                            MSec                           (Parm, OutParm)

void UObject::GetSystemTime(int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetSystemTime");

	UObject_GetSystemTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Year != nullptr)
		*Year = params.Year;
	if (Month != nullptr)
		*Month = params.Month;
	if (DayOfWeek != nullptr)
		*DayOfWeek = params.DayOfWeek;
	if (Day != nullptr)
		*Day = params.Day;
	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Min != nullptr)
		*Min = params.Min;
	if (Sec != nullptr)
		*Sec = params.Sec;
	if (MSec != nullptr)
		*MSec = params.MSec;
}


// Function Core.Object.TimeStamp
// (Final, Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::TimeStamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TimeStamp");

	UObject_TimeStamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.TransformVectorByRotation
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FRotator                SourceRotation                 (Parm)
// struct FVector                 SourceVector                   (Parm)
// unsigned long                  bInverse                       (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::TransformVectorByRotation(const struct FRotator& SourceRotation, const struct FVector& SourceVector, unsigned long bInverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TransformVectorByRotation");

	UObject_TransformVectorByRotation_Params params;
	params.SourceRotation = SourceRotation;
	params.SourceVector = SourceVector;
	params.bInverse = bInverse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetPackageName
// (Final, Defined, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UObject::GetPackageName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetPackageName");

	UObject_GetPackageName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsPendingKill
// (Final, Native, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::IsPendingKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsPendingKill");

	UObject_IsPendingKill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ByteToFloat
// (Final, Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// unsigned char                  inputByte                      (Parm)
// unsigned long                  bSigned                        (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::ByteToFloat(unsigned char inputByte, unsigned long bSigned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ByteToFloat");

	UObject_ByteToFloat_Params params;
	params.inputByte = inputByte;
	params.bSigned = bSigned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FloatToByte
// (Final, Defined, Simulated, HasOptionalParms, Public)
// Parameters:
// float                          inputFloat                     (Parm)
// unsigned long                  bSigned                        (OptionalParm, Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::FloatToByte(float inputFloat, unsigned long bSigned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FloatToByte");

	UObject_FloatToByte_Params params;
	params.inputFloat = inputFloat;
	params.bSigned = bSigned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.UnwindHeading
// (Final, Defined, Simulated, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_UnwindHeading(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.UnwindHeading");

	UObject_UnwindHeading_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FindDeltaAngle
// (Final, Defined, Simulated, Static, Public)
// Parameters:
// float                          A1                             (Parm)
// float                          A2                             (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FindDeltaAngle(float A1, float A2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FindDeltaAngle");

	UObject_FindDeltaAngle_Params params;
	params.A1 = A1;
	params.A2 = A2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetHeadingAngle
// (Final, Defined, Simulated, Static, Public)
// Parameters:
// struct FVector                 Dir                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_GetHeadingAngle(const struct FVector& Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetHeadingAngle");

	UObject_GetHeadingAngle_Params params;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetAngularDegreesFromRadians
// (Final, Defined, Simulated, Static, Public, HasOutParms)
// Parameters:
// struct FVector2D               OutFOV                         (Parm, OutParm)

void UObject::STATIC_GetAngularDegreesFromRadians(struct FVector2D* OutFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularDegreesFromRadians");

	UObject_GetAngularDegreesFromRadians_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFOV != nullptr)
		*OutFOV = params.OutFOV;
}


// Function Core.Object.GetAngularFromDotDist
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FVector2D               OutAngDist                     (Parm, OutParm)
// struct FVector2D               DotDist                        (Parm)

void UObject::STATIC_GetAngularFromDotDist(const struct FVector2D& DotDist, struct FVector2D* OutAngDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularFromDotDist");

	UObject_GetAngularFromDotDist_Params params;
	params.DotDist = DotDist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngDist != nullptr)
		*OutAngDist = params.OutAngDist;
}


// Function Core.Object.GetAngularDistance
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FVector2D               OutAngularDist                 (Parm, OutParm)
// struct FVector                 Direction                      (Parm)
// struct FVector                 AxisX                          (Parm)
// struct FVector                 AxisY                          (Parm)
// struct FVector                 AxisZ                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_GetAngularDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutAngularDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularDistance");

	UObject_GetAngularDistance_Params params;
	params.Direction = Direction;
	params.AxisX = AxisX;
	params.AxisY = AxisY;
	params.AxisZ = AxisZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngularDist != nullptr)
		*OutAngularDist = params.OutAngularDist;

	return params.ReturnValue;
}


// Function Core.Object.GetDotDistance
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FVector2D               OutDotDist                     (Parm, OutParm)
// struct FVector                 Direction                      (Parm)
// struct FVector                 AxisX                          (Parm)
// struct FVector                 AxisY                          (Parm)
// struct FVector                 AxisZ                          (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_GetDotDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutDotDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetDotDistance");

	UObject_GetDotDistance_Params params;
	params.Direction = Direction;
	params.AxisX = AxisX;
	params.AxisY = AxisY;
	params.AxisZ = AxisZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDotDist != nullptr)
		*OutDotDist = params.OutDotDist;

	return params.ReturnValue;
}


// Function Core.Object.PointProjectToPlane
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 C                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_PointProjectToPlane(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointProjectToPlane");

	UObject_PointProjectToPlane_Params params;
	params.Point = Point;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.PointDistToPlane
// (Final, Defined, Simulated, HasOptionalParms, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FRotator                Orientation                    (Parm)
// struct FVector                 Origin                         (Parm)
// struct FVector                 out_ClosestPoint               (OptionalParm, Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::PointDistToPlane(const struct FVector& Point, const struct FRotator& Orientation, const struct FVector& Origin, struct FVector* out_ClosestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToPlane");

	UObject_PointDistToPlane_Params params;
	params.Point = Point;
	params.Orientation = Orientation;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ClosestPoint != nullptr)
		*out_ClosestPoint = params.out_ClosestPoint;

	return params.ReturnValue;
}


// Function Core.Object.PointDistToSegment
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 StartPoint                     (Parm)
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 OutClosestPoint                (OptionalParm, Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::PointDistToSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint, struct FVector* OutClosestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToSegment");

	UObject_PointDistToSegment_Params params;
	params.Point = Point;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutClosestPoint != nullptr)
		*OutClosestPoint = params.OutClosestPoint;

	return params.ReturnValue;
}


// Function Core.Object.PointDistToLine
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 Line                           (Parm)
// struct FVector                 Origin                         (Parm)
// struct FVector                 OutClosestPoint                (OptionalParm, Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::PointDistToLine(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin, struct FVector* OutClosestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToLine");

	UObject_PointDistToLine_Params params;
	params.Point = Point;
	params.Line = Line;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutClosestPoint != nullptr)
		*OutClosestPoint = params.OutClosestPoint;

	return params.ReturnValue;
}


// Function Core.Object.GetPerObjectConfigSections
// (Final, Native, Static, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class UClass*                  SearchClass                    (Parm)
// TArray<struct FString>         out_SectionNames               (Parm, OutParm, NeedCtorLink)
// class UObject*                 ObjectOuter                    (OptionalParm, Parm)
// int                            MaxResults                     (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_GetPerObjectConfigSections(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray<struct FString>* out_SectionNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetPerObjectConfigSections");

	UObject_GetPerObjectConfigSections_Params params;
	params.SearchClass = SearchClass;
	params.ObjectOuter = ObjectOuter;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_SectionNames != nullptr)
		*out_SectionNames = params.out_SectionNames;

	return params.ReturnValue;
}


// Function Core.Object.StaticSaveConfig
// (Final, Native, Static, Public, K2Call)

void UObject::STATIC_StaticSaveConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.StaticSaveConfig");

	UObject_StaticSaveConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SaveConfig
// (Final, Native, Public, K2Call)

void UObject::SaveConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SaveConfig");

	UObject_SaveConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FindObject
// (Final, Native, Static, Public, K2Call)
// Parameters:
// struct FString                 ObjectName                     (Parm, NeedCtorLink)
// class UClass*                  ObjectClass                    (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UObject::STATIC_FindObject(const struct FString& ObjectName, class UClass* ObjectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FindObject");

	UObject_FindObject_Params params;
	params.ObjectName = ObjectName;
	params.ObjectClass = ObjectClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.DynamicLoadObject
// (Final, Native, Static, HasOptionalParms, Public, K2Call)
// Parameters:
// struct FString                 ObjectName                     (Parm, NeedCtorLink)
// class UClass*                  ObjectClass                    (Parm)
// unsigned long                  MayFail                        (OptionalParm, Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UObject::STATIC_DynamicLoadObject(const struct FString& ObjectName, class UClass* ObjectClass, unsigned long MayFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DynamicLoadObject");

	UObject_DynamicLoadObject_Params params;
	params.ObjectName = ObjectName;
	params.ObjectClass = ObjectClass;
	params.MayFail = MayFail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetEnum
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 E                              (Parm)
// int                            I                              (Parm, CoerceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UObject::STATIC_GetEnum(class UObject* E, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetEnum");

	UObject_GetEnum_Params params;
	params.E = E;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Disable
// (Final, Native, Public, K2Call)
// Parameters:
// struct FName                   ProbeFunc                      (Parm)

void UObject::Disable(const struct FName& ProbeFunc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Disable");

	UObject_Disable_Params params;
	params.ProbeFunc = ProbeFunc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Enable
// (Final, Native, Public, K2Call)
// Parameters:
// struct FName                   ProbeFunc                      (Parm)

void UObject::Enable(const struct FName& ProbeFunc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Enable");

	UObject_Enable_Params params;
	params.ProbeFunc = ProbeFunc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ContinuedState
// (Event, Public)

void UObject::ContinuedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ContinuedState");

	UObject_ContinuedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PausedState
// (Event, Public)

void UObject::PausedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PausedState");

	UObject_PausedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PoppedState
// (Event, Public)

void UObject::PoppedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PoppedState");

	UObject_PoppedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PushedState
// (Event, Public)

void UObject::PushedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PushedState");

	UObject_PushedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EndState
// (Event, Public)
// Parameters:
// struct FName                   NextStateName                  (Parm)

void UObject::EndState(const struct FName& NextStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EndState");

	UObject_EndState_Params params;
	params.NextStateName = NextStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.BeginState
// (Event, Public)
// Parameters:
// struct FName                   PreviousStateName              (Parm)

void UObject::BeginState(const struct FName& PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.BeginState");

	UObject_BeginState_Params params;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.DumpStateStack
// (Final, Native, Public)

void UObject::DumpStateStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DumpStateStack");

	UObject_DumpStateStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PopState
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bPopAll                        (OptionalParm, Parm)

void UObject::PopState(unsigned long bPopAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PopState");

	UObject_PopState_Params params;
	params.bPopAll = bPopAll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PushState
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   NewState                       (Parm)
// struct FName                   NewLabel                       (OptionalParm, Parm)

void UObject::PushState(const struct FName& NewState, const struct FName& NewLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PushState");

	UObject_PushState_Params params;
	params.NewState = NewState;
	params.NewLabel = NewLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetStateName
// (Final, Native, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UObject::GetStateName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetStateName");

	UObject_GetStateName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsChildState
// (Final, Native, Public)
// Parameters:
// struct FName                   TestState                      (Parm)
// struct FName                   TestParentState                (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::IsChildState(const struct FName& TestState, const struct FName& TestParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsChildState");

	UObject_IsChildState_Params params;
	params.TestState = TestState;
	params.TestParentState = TestParentState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsInState
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   TestState                      (Parm)
// unsigned long                  bTestStateStack                (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::IsInState(const struct FName& TestState, unsigned long bTestStateStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsInState");

	UObject_IsInState_Params params;
	params.TestState = TestState;
	params.bTestStateStack = bTestStateStack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GotoState
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   NewState                       (OptionalParm, Parm)
// struct FName                   Label                          (OptionalParm, Parm)
// unsigned long                  bForceEvents                   (OptionalParm, Parm)
// unsigned long                  bKeepStack                     (OptionalParm, Parm)

void UObject::GotoState(const struct FName& NewState, const struct FName& Label, unsigned long bForceEvents, unsigned long bKeepStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GotoState");

	UObject_GotoState_Params params;
	params.NewState = NewState;
	params.Label = Label;
	params.bForceEvents = bForceEvents;
	params.bKeepStack = bKeepStack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.IsUTracing
// (Final, Native, Static, Public)
// Parameters:
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_IsUTracing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsUTracing");

	UObject_IsUTracing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SetUTracing
// (Final, Native, Static, Public)
// Parameters:
// unsigned long                  bShouldUTrace                  (Parm)

void UObject::STATIC_SetUTracing(unsigned long bShouldUTrace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SetUTracing");

	UObject_SetUTracing_Params params;
	params.bShouldUTrace = bShouldUTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetFuncName
// (Final, Native, Static, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UObject::STATIC_GetFuncName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetFuncName");

	UObject_GetFuncName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.DebugBreak
// (Final, Native, Static, HasOptionalParms, Public)
// Parameters:
// int                            UserFlags                      (OptionalParm, Parm)
// TEnumAsByte<EDebugBreakType>   DebuggerType                   (OptionalParm, Parm)

void UObject::STATIC_DebugBreak(int UserFlags, TEnumAsByte<EDebugBreakType> DebuggerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DebugBreak");

	UObject_DebugBreak_Params params;
	params.UserFlags = UserFlags;
	params.DebuggerType = DebuggerType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ScriptTrace
// (Final, Native, Static, Public)

void UObject::STATIC_ScriptTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ScriptTrace");

	UObject_ScriptTrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ParseLocalizedPropertyPath
// (Final, Defined, Static, Public)
// Parameters:
// struct FString                 PathName                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_ParseLocalizedPropertyPath(const struct FString& PathName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ParseLocalizedPropertyPath");

	UObject_ParseLocalizedPropertyPath_Params params;
	params.PathName = PathName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Localize
// (Native, Static, Public)
// Parameters:
// struct FString                 SectionName                    (Parm, NeedCtorLink)
// struct FString                 KeyName                        (Parm, NeedCtorLink)
// struct FString                 PackageName                    (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Localize(const struct FString& SectionName, const struct FString& KeyName, const struct FString& PackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Localize");

	UObject_Localize_Params params;
	params.SectionName = SectionName;
	params.KeyName = KeyName;
	params.PackageName = PackageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.WarnInternal
// (Final, Native, Static, Private)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)

void UObject::STATIC_WarnInternal(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.WarnInternal");

	UObject_WarnInternal_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.LogInternal
// (Final, Native, Static, HasOptionalParms, Private)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// struct FName                   Tag                            (OptionalParm, Parm)

void UObject::STATIC_LogInternal(const struct FString& S, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LogInternal");

	UObject_LogInternal_Params params;
	params.S = S;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Subtract_LinearColorLinearColor
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FLinearColor            A                              (Parm)
// struct FLinearColor            B                              (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::STATIC_Subtract_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_LinearColorLinearColor");

	UObject_Subtract_LinearColorLinearColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_LinearColorFloat
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FLinearColor            LC                             (Parm)
// float                          Mult                           (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::STATIC_Multiply_LinearColorFloat(const struct FLinearColor& LC, float Mult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_LinearColorFloat");

	UObject_Multiply_LinearColorFloat_Params params;
	params.LC = LC;
	params.Mult = Mult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ColorToLinearColor
// (Final, Defined, Static, Public)
// Parameters:
// struct FColor                  OldColor                       (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::STATIC_ColorToLinearColor(const struct FColor& OldColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ColorToLinearColor");

	UObject_ColorToLinearColor_Params params;
	params.OldColor = OldColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeLinearColor
// (Final, Defined, Static, Public, HasDefaults)
// Parameters:
// float                          R                              (Parm)
// float                          G                              (Parm)
// float                          B                              (Parm)
// float                          A                              (Parm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinearColor UObject::STATIC_MakeLinearColor(float R, float G, float B, float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeLinearColor");

	UObject_MakeLinearColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LerpColor
// (Final, Defined, Static, Public, HasDefaults)
// Parameters:
// struct FColor                  A                              (Parm)
// struct FColor                  B                              (Parm)
// float                          Alpha                          (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_LerpColor(const struct FColor& A, const struct FColor& B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LerpColor");

	UObject_LerpColor_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeColor
// (Final, Defined, Static, HasOptionalParms, Public, HasDefaults)
// Parameters:
// unsigned char                  R                              (Parm)
// unsigned char                  G                              (Parm)
// unsigned char                  B                              (Parm)
// unsigned char                  A                              (OptionalParm, Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeColor");

	UObject_MakeColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_ColorColor
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FColor                  A                              (Parm)
// struct FColor                  B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_Add_ColorColor(const struct FColor& A, const struct FColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_ColorColor");

	UObject_Add_ColorColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_ColorFloat
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FColor                  A                              (Parm)
// float                          B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_Multiply_ColorFloat(const struct FColor& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_ColorFloat");

	UObject_Multiply_ColorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatColor
// (Final, Defined, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// struct FColor                  B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_Multiply_FloatColor(float A, const struct FColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatColor");

	UObject_Multiply_FloatColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_ColorColor
// (Final, Defined, Operator, Static, Public)
// Parameters:
// struct FColor                  A                              (Parm)
// struct FColor                  B                              (Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UObject::STATIC_Subtract_ColorColor(const struct FColor& A, const struct FColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_ColorColor");

	UObject_Subtract_ColorColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EvalInterpCurveVector2D
// (Final, Native, Public)
// Parameters:
// struct FInterpCurveVector2D    Vector2DCurve                  (Parm, NeedCtorLink)
// float                          InVal                          (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::EvalInterpCurveVector2D(const struct FInterpCurveVector2D& Vector2DCurve, float InVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveVector2D");

	UObject_EvalInterpCurveVector2D_Params params;
	params.Vector2DCurve = Vector2DCurve;
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EvalInterpCurveVector
// (Final, Native, Public)
// Parameters:
// struct FInterpCurveVector      VectorCurve                    (Parm, NeedCtorLink)
// float                          InVal                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::EvalInterpCurveVector(const struct FInterpCurveVector& VectorCurve, float InVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveVector");

	UObject_EvalInterpCurveVector_Params params;
	params.VectorCurve = VectorCurve;
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EvalInterpCurveFloat
// (Final, Native, Public)
// Parameters:
// struct FInterpCurveFloat       FloatCurve                     (Parm, NeedCtorLink)
// float                          InVal                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::EvalInterpCurveFloat(const struct FInterpCurveFloat& FloatCurve, float InVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveFloat");

	UObject_EvalInterpCurveFloat_Params params;
	params.FloatCurve = FloatCurve;
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.vect2d
// (Final, Defined, Static, Public, HasDefaults)
// Parameters:
// float                          InX                            (Parm)
// float                          InY                            (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::STATIC_vect2d(float InX, float InY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.vect2d");

	UObject_vect2d_Params params;
	params.InX = InX;
	params.InY = InY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetMappedRangeValue
// (Final, Simulated, Native, Static, Public)
// Parameters:
// struct FVector2D               InputRange                     (Parm)
// struct FVector2D               OutputRange                    (Parm)
// float                          Value                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_GetMappedRangeValue(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetMappedRangeValue");

	UObject_GetMappedRangeValue_Params params;
	params.InputRange = InputRange;
	params.OutputRange = OutputRange;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetRangePctByValue
// (Final, Defined, Simulated, Static, Public)
// Parameters:
// struct FVector2D               Range                          (Parm)
// float                          Value                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_GetRangePctByValue(const struct FVector2D& Range, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRangePctByValue");

	UObject_GetRangePctByValue_Params params;
	params.Range = Range;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetRangeValueByPct
// (Final, Defined, Simulated, Static, Public)
// Parameters:
// struct FVector2D               Range                          (Parm)
// float                          Pct                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_GetRangeValueByPct(const struct FVector2D& Range, float Pct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRangeValueByPct");

	UObject_GetRangeValueByPct_Params params;
	params.Range = Range;
	params.Pct = Pct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_Vector2DVector2D
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FVector2D               A                              (Parm)
// struct FVector2D               B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::STATIC_Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_Vector2DVector2D");

	UObject_Subtract_Vector2DVector2D_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_Vector2DVector2D
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FVector2D               A                              (Parm)
// struct FVector2D               B                              (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector2D UObject::STATIC_Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_Vector2DVector2D");

	UObject_Add_Vector2DVector2D_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_QuatQuat
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   B                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_Subtract_QuatQuat(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_QuatQuat");

	UObject_Subtract_QuatQuat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_QuatQuat
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   B                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_Add_QuatQuat(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_QuatQuat");

	UObject_Add_QuatQuat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatSlerp
// (Final, Native, Static, HasOptionalParms, Public)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   B                              (Parm)
// float                          Alpha                          (Parm)
// unsigned long                  bShortestPath                  (OptionalParm, Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_QuatSlerp(const struct FQuat& A, const struct FQuat& B, float Alpha, unsigned long bShortestPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatSlerp");

	UObject_QuatSlerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.bShortestPath = bShortestPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatToRotator
// (Final, Native, Static, Public)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_QuatToRotator(const struct FQuat& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatToRotator");

	UObject_QuatToRotator_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatFromRotator
// (Final, Native, Static, Public)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_QuatFromRotator(const struct FRotator& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFromRotator");

	UObject_QuatFromRotator_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatFromAxisAndAngle
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 Axis                           (Parm)
// float                          Angle                          (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_QuatFromAxisAndAngle(const struct FVector& Axis, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFromAxisAndAngle");

	UObject_QuatFromAxisAndAngle_Params params;
	params.Axis = Axis;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatFindBetween
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_QuatFindBetween(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFindBetween");

	UObject_QuatFindBetween_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatRotateVector
// (Final, Native, Static, Public)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_QuatRotateVector(const struct FQuat& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatRotateVector");

	UObject_QuatRotateVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatInvert
// (Final, Native, Static, Public)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_QuatInvert(const struct FQuat& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatInvert");

	UObject_QuatInvert_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatDot
// (Final, Native, Static, Public)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_QuatDot(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatDot");

	UObject_QuatDot_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatProduct
// (Final, Native, Static, Public)
// Parameters:
// struct FQuat                   A                              (Parm)
// struct FQuat                   B                              (Parm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuat UObject::STATIC_QuatProduct(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatProduct");

	UObject_QuatProduct_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MatrixGetAxis
// (Final, Native, Static, Public)
// Parameters:
// struct FMatrix                 TM                             (Parm)
// TEnumAsByte<EAxis>             Axis                           (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_MatrixGetAxis(const struct FMatrix& TM, TEnumAsByte<EAxis> Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetAxis");

	UObject_MatrixGetAxis_Params params;
	params.TM = TM;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MatrixGetOrigin
// (Final, Native, Static, Public)
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_MatrixGetOrigin(const struct FMatrix& TM)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetOrigin");

	UObject_MatrixGetOrigin_Params params;
	params.TM = TM;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MatrixGetRotator
// (Final, Native, Static, Public)
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_MatrixGetRotator(const struct FMatrix& TM)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetRotator");

	UObject_MatrixGetRotator_Params params;
	params.TM = TM;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeRotationMatrix
// (Final, Native, Static, Public)
// Parameters:
// struct FRotator                Rotation                       (Parm)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UObject::STATIC_MakeRotationMatrix(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotationMatrix");

	UObject_MakeRotationMatrix_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeRotationTranslationMatrix
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 Translation                    (Parm)
// struct FRotator                Rotation                       (Parm)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UObject::STATIC_MakeRotationTranslationMatrix(const struct FVector& Translation, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotationTranslationMatrix");

	UObject_MakeRotationTranslationMatrix_Params params;
	params.Translation = Translation;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InverseTransformNormal
// (Final, Native, Static, Public)
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_InverseTransformNormal(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InverseTransformNormal");

	UObject_InverseTransformNormal_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.TransformNormal
// (Final, Native, Static, Public)
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_TransformNormal(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TransformNormal");

	UObject_TransformNormal_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InverseTransformVector
// (Final, Native, Static, Public)
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_InverseTransformVector(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InverseTransformVector");

	UObject_InverseTransformVector_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.TransformVector
// (Final, Native, Static, Public)
// Parameters:
// struct FMatrix                 TM                             (Parm)
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_TransformVector(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TransformVector");

	UObject_TransformVector_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_MatrixMatrix
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FMatrix                 A                              (Parm)
// struct FMatrix                 B                              (Parm)
// struct FMatrix                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatrix UObject::STATIC_Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_MatrixMatrix");

	UObject_Multiply_MatrixMatrix_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_NameName
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FName                   A                              (Parm)
// struct FName                   B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_NotEqual_NameName(const struct FName& A, const struct FName& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_NameName");

	UObject_NotEqual_NameName_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_NameName
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FName                   A                              (Parm)
// struct FName                   B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_EqualEqual_NameName(const struct FName& A, const struct FName& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_NameName");

	UObject_EqualEqual_NameName_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsA
// (Final, Native, Public)
// Parameters:
// struct FName                   ClassName                      (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::IsA(const struct FName& ClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsA");

	UObject_IsA_Params params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClassIsChildOf
// (Final, Native, Static, Public)
// Parameters:
// class UClass*                  TestClass                      (Parm)
// class UClass*                  ParentClass                    (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClassIsChildOf");

	UObject_ClassIsChildOf_Params params;
	params.TestClass = TestClass;
	params.ParentClass = ParentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_InterfaceInterface
// (Final, Native, Operator, Static, Public)
// Parameters:
// TScriptInterface<class UInterface> A                              (Parm)
// TScriptInterface<class UInterface> B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_NotEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_InterfaceInterface");

	UObject_NotEqual_InterfaceInterface_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_InterfaceInterface
// (Final, Native, Operator, Static, Public)
// Parameters:
// TScriptInterface<class UInterface> A                              (Parm)
// TScriptInterface<class UInterface> B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_EqualEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_InterfaceInterface");

	UObject_EqualEqual_InterfaceInterface_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_ObjectObject
// (Final, Native, Operator, Static, Public)
// Parameters:
// class UObject*                 A                              (Parm)
// class UObject*                 B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_NotEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_ObjectObject");

	UObject_NotEqual_ObjectObject_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_ObjectObject
// (Final, Native, Operator, Static, Public)
// Parameters:
// class UObject*                 A                              (Parm)
// class UObject*                 B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_EqualEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_ObjectObject");

	UObject_EqualEqual_ObjectObject_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.PathName
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 CheckObject                    (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_PathName(class UObject* CheckObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PathName");

	UObject_PathName_Params params;
	params.CheckObject = CheckObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SplitString
// (Final, Defined, Static, HasOptionalParms, Public)
// Parameters:
// struct FString                 Source                         (Parm, NeedCtorLink)
// struct FString                 Delimiter                      (OptionalParm, Parm, NeedCtorLink)
// unsigned long                  bCullEmpty                     (OptionalParm, Parm)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UObject::STATIC_SplitString(const struct FString& Source, const struct FString& Delimiter, unsigned long bCullEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SplitString");

	UObject_SplitString_Params params;
	params.Source = Source;
	params.Delimiter = Delimiter;
	params.bCullEmpty = bCullEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ParseStringIntoArray
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 BaseString                     (Parm, NeedCtorLink)
// TArray<struct FString>         Pieces                         (Parm, OutParm, NeedCtorLink)
// struct FString                 delim                          (Parm, NeedCtorLink)
// unsigned long                  bCullEmpty                     (Parm)

void UObject::STATIC_ParseStringIntoArray(const struct FString& BaseString, const struct FString& delim, unsigned long bCullEmpty, TArray<struct FString>* Pieces)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ParseStringIntoArray");

	UObject_ParseStringIntoArray_Params params;
	params.BaseString = BaseString;
	params.delim = delim;
	params.bCullEmpty = bCullEmpty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pieces != nullptr)
		*Pieces = params.Pieces;
}


// Function Core.Object.JoinArray
// (Final, Defined, Static, HasOptionalParms, Public, HasOutParms)
// Parameters:
// TArray<struct FString>         StringArray                    (Parm, NeedCtorLink)
// struct FString                 out_Result                     (Parm, OutParm, NeedCtorLink)
// struct FString                 delim                          (OptionalParm, Parm, NeedCtorLink)
// unsigned long                  bIgnoreBlanks                  (OptionalParm, Parm)

void UObject::STATIC_JoinArray(TArray<struct FString> StringArray, const struct FString& delim, unsigned long bIgnoreBlanks, struct FString* out_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.JoinArray");

	UObject_JoinArray_Params params;
	params.StringArray = StringArray;
	params.delim = delim;
	params.bIgnoreBlanks = bIgnoreBlanks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Result != nullptr)
		*out_Result = params.out_Result;
}


// Function Core.Object.GetRightMost
// (Final, Defined, Static, Public)
// Parameters:
// struct FString                 Text                           (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_GetRightMost(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRightMost");

	UObject_GetRightMost_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Split
// (Final, Defined, Static, HasOptionalParms, Public)
// Parameters:
// struct FString                 Text                           (Parm, CoerceParm, NeedCtorLink)
// struct FString                 SplitStr                       (Parm, CoerceParm, NeedCtorLink)
// unsigned long                  bOmitSplitStr                  (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Split(const struct FString& Text, const struct FString& SplitStr, unsigned long bOmitSplitStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Split");

	UObject_Split_Params params;
	params.Text = Text;
	params.SplitStr = SplitStr;
	params.bOmitSplitStr = bOmitSplitStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Repl
// (Final, Native, Static, HasOptionalParms, Public)
// Parameters:
// struct FString                 Src                            (Parm, CoerceParm, NeedCtorLink)
// struct FString                 Match                          (Parm, CoerceParm, NeedCtorLink)
// struct FString                 With                           (Parm, CoerceParm, NeedCtorLink)
// unsigned long                  bCaseSensitive                 (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Repl(const struct FString& Src, const struct FString& Match, const struct FString& With, unsigned long bCaseSensitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Repl");

	UObject_Repl_Params params;
	params.Src = Src;
	params.Match = Match;
	params.With = With;
	params.bCaseSensitive = bCaseSensitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Asc
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Asc(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Asc");

	UObject_Asc_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Chr
// (Final, Native, Static, Public)
// Parameters:
// int                            I                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Chr(int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Chr");

	UObject_Chr_Params params;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Locs
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Locs(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Locs");

	UObject_Locs_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Caps
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Caps(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Caps");

	UObject_Caps_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Right
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// int                            I                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Right(const struct FString& S, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Right");

	UObject_Right_Params params;
	params.S = S;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Left
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// int                            I                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Left(const struct FString& S, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Left");

	UObject_Left_Params params;
	params.S = S;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Mid
// (Final, Native, Static, HasOptionalParms, Public)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// int                            I                              (Parm)
// int                            J                              (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Mid(const struct FString& S, int I, int J)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Mid");

	UObject_Mid_Params params;
	params.S = S;
	params.I = I;
	params.J = J;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InStr
// (Final, Native, Static, HasOptionalParms, Public)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 T                              (Parm, CoerceParm, NeedCtorLink)
// unsigned long                  bSearchFromRight               (OptionalParm, Parm)
// unsigned long                  bIgnoreCase                    (OptionalParm, Parm)
// int                            StartPos                       (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_InStr(const struct FString& S, const struct FString& T, unsigned long bSearchFromRight, unsigned long bIgnoreCase, int StartPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InStr");

	UObject_InStr_Params params;
	params.S = S;
	params.T = T;
	params.bSearchFromRight = bSearchFromRight;
	params.bIgnoreCase = bIgnoreCase;
	params.StartPos = StartPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Len
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 S                              (Parm, CoerceParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Len(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Len");

	UObject_Len_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_StrStr
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FString                 A                              (Parm, OutParm, NeedCtorLink)
// struct FString                 B                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_SubtractEqual_StrStr(const struct FString& B, struct FString* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_StrStr");

	UObject_SubtractEqual_StrStr_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AtEqual_StrStr
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FString                 A                              (Parm, OutParm, NeedCtorLink)
// struct FString                 B                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_AtEqual_StrStr(const struct FString& B, struct FString* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AtEqual_StrStr");

	UObject_AtEqual_StrStr_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.ConcatEqual_StrStr
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FString                 A                              (Parm, OutParm, NeedCtorLink)
// struct FString                 B                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_ConcatEqual_StrStr(const struct FString& B, struct FString* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ConcatEqual_StrStr");

	UObject_ConcatEqual_StrStr_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.ComplementEqual_StrStr
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_ComplementEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ComplementEqual_StrStr");

	UObject_ComplementEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_StrStr
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_NotEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_StrStr");

	UObject_NotEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_StrStr
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_EqualEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_StrStr");

	UObject_EqualEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_StrStr
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_GreaterEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_StrStr");

	UObject_GreaterEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_StrStr
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_LessEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_StrStr");

	UObject_LessEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_StrStr
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_Greater_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_StrStr");

	UObject_Greater_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_StrStr
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FString                 A                              (Parm, NeedCtorLink)
// struct FString                 B                              (Parm, NeedCtorLink)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_Less_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_StrStr");

	UObject_Less_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.At_StrStr
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FString                 A                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 B                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_At_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.At_StrStr");

	UObject_At_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Concat_StrStr
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FString                 A                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 B                              (Parm, CoerceParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_Concat_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Concat_StrStr");

	UObject_Concat_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeRotator
// (Final, Defined, Static, Public, HasDefaults)
// Parameters:
// int                            Pitch                          (Parm)
// int                            Yaw                            (Parm)
// int                            Roll                           (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_MakeRotator(int Pitch, int Yaw, int Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotator");

	UObject_MakeRotator_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SClampRotAxis
// (Final, Defined, Simulated, Static, Public, HasOutParms)
// Parameters:
// float                          DeltaTime                      (Parm)
// int                            ViewAxis                       (Parm)
// int                            out_DeltaViewAxis              (Parm, OutParm)
// int                            MaxLimit                       (Parm)
// int                            MinLimit                       (Parm)
// float                          InterpolationSpeed             (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_SClampRotAxis(float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SClampRotAxis");

	UObject_SClampRotAxis_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewAxis = ViewAxis;
	params.MaxLimit = MaxLimit;
	params.MinLimit = MinLimit;
	params.InterpolationSpeed = InterpolationSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_DeltaViewAxis != nullptr)
		*out_DeltaViewAxis = params.out_DeltaViewAxis;

	return params.ReturnValue;
}


// Function Core.Object.ClampRotAxisFromRange
// (Final, Simulated, Native, Static, Public)
// Parameters:
// int                            Current                        (Parm)
// int                            Min                            (Parm)
// int                            Max                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_ClampRotAxisFromRange(int Current, int Min, int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxisFromRange");

	UObject_ClampRotAxisFromRange_Params params;
	params.Current = Current;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClampRotAxisFromBase
// (Final, Simulated, Native, Static, Public)
// Parameters:
// int                            Current                        (Parm)
// int                            Center                         (Parm)
// int                            MaxDelta                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_ClampRotAxisFromBase(int Current, int Center, int MaxDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxisFromBase");

	UObject_ClampRotAxisFromBase_Params params;
	params.Current = Current;
	params.Center = Center;
	params.MaxDelta = MaxDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClampRotAxis
// (Final, Defined, Simulated, Static, Public, HasOutParms)
// Parameters:
// int                            ViewAxis                       (Parm)
// int                            out_DeltaViewAxis              (Parm, OutParm)
// int                            MaxLimit                       (Parm)
// int                            MinLimit                       (Parm)

void UObject::STATIC_ClampRotAxis(int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxis");

	UObject_ClampRotAxis_Params params;
	params.ViewAxis = ViewAxis;
	params.MaxLimit = MaxLimit;
	params.MinLimit = MinLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_DeltaViewAxis != nullptr)
		*out_DeltaViewAxis = params.out_DeltaViewAxis;
}


// Function Core.Object.RSize
// (Final, Defined, Static, Public)
// Parameters:
// struct FRotator                R                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_RSize(const struct FRotator& R)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RSize");

	UObject_RSize_Params params;
	params.R = R;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RDiff
// (Final, Native, Static, Public)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_RDiff(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RDiff");

	UObject_RDiff_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NormalizeRotAxis
// (Final, Native, Static, Public)
// Parameters:
// int                            Angle                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_NormalizeRotAxis(int Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NormalizeRotAxis");

	UObject_NormalizeRotAxis_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RInterpTo
// (Final, Native, Static, HasOptionalParms, Public)
// Parameters:
// struct FRotator                Current                        (Parm)
// struct FRotator                Target                         (Parm)
// float                          DeltaTime                      (Parm)
// float                          InterpSpeed                    (Parm)
// unsigned long                  bConstantInterpSpeed           (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, unsigned long bConstantInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RInterpTo");

	UObject_RInterpTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;
	params.bConstantInterpSpeed = bConstantInterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RTransform
// (Final, Native, Static, Public)
// Parameters:
// struct FRotator                R                              (Parm)
// struct FRotator                RBasis                         (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_RTransform(const struct FRotator& R, const struct FRotator& RBasis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RTransform");

	UObject_RTransform_Params params;
	params.R = R;
	params.RBasis = RBasis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RSmerp
// (Final, Native, Static, HasOptionalParms, Public)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// float                          Alpha                          (Parm)
// unsigned long                  bShortestPath                  (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_RSmerp(const struct FRotator& A, const struct FRotator& B, float Alpha, unsigned long bShortestPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RSmerp");

	UObject_RSmerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.bShortestPath = bShortestPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RLerp
// (Final, Native, Static, HasOptionalParms, Public)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// float                          Alpha                          (Parm)
// unsigned long                  bShortestPath                  (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, unsigned long bShortestPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RLerp");

	UObject_RLerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.bShortestPath = bShortestPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Normalize
// (Final, Native, Static, Public)
// Parameters:
// struct FRotator                Rot                            (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_Normalize(const struct FRotator& Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Normalize");

	UObject_Normalize_Params params;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.OrthoRotation
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 X                              (Parm)
// struct FVector                 Y                              (Parm)
// struct FVector                 Z                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_OrthoRotation(const struct FVector& X, const struct FVector& Y, const struct FVector& Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.OrthoRotation");

	UObject_OrthoRotation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RotRand
// (Final, Native, Static, HasOptionalParms, Public)
// Parameters:
// unsigned long                  bRoll                          (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_RotRand(unsigned long bRoll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RotRand");

	UObject_RotRand_Params params;
	params.bRoll = bRoll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetUnAxes
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FVector                 X                              (Parm, OutParm)
// struct FVector                 Y                              (Parm, OutParm)
// struct FVector                 Z                              (Parm, OutParm)

void UObject::STATIC_GetUnAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetUnAxes");

	UObject_GetUnAxes_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;
}


// Function Core.Object.GetAxes
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FVector                 X                              (Parm, OutParm)
// struct FVector                 Y                              (Parm, OutParm)
// struct FVector                 Z                              (Parm, OutParm)

void UObject::STATIC_GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAxes");

	UObject_GetAxes_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;
}


// Function Core.Object.ClockwiseFrom_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_ClockwiseFrom_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClockwiseFrom_IntInt");

	UObject_ClockwiseFrom_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_RotatorRotator
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FRotator                A                              (Parm, OutParm)
// struct FRotator                B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_SubtractEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_RotatorRotator");

	UObject_SubtractEqual_RotatorRotator_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_RotatorRotator
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FRotator                A                              (Parm, OutParm)
// struct FRotator                B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_AddEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_RotatorRotator");

	UObject_AddEqual_RotatorRotator_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_RotatorRotator
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_Subtract_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_RotatorRotator");

	UObject_Subtract_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_RotatorRotator
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_Add_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_RotatorRotator");

	UObject_Add_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_RotatorFloat
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FRotator                A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_DivideEqual_RotatorFloat(float B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_RotatorFloat");

	UObject_DivideEqual_RotatorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_RotatorFloat
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FRotator                A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_MultiplyEqual_RotatorFloat(float B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_RotatorFloat");

	UObject_MultiplyEqual_RotatorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Divide_RotatorFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FRotator                A                              (Parm)
// float                          B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_Divide_RotatorFloat(const struct FRotator& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_RotatorFloat");

	UObject_Divide_RotatorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatRotator
// (Final, Native, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// struct FRotator                B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_Multiply_FloatRotator(float A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatRotator");

	UObject_Multiply_FloatRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_RotatorFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FRotator                A                              (Parm)
// float                          B                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UObject::STATIC_Multiply_RotatorFloat(const struct FRotator& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_RotatorFloat");

	UObject_Multiply_RotatorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_RotatorRotator
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_RotatorRotator");

	UObject_NotEqual_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_RotatorRotator
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FRotator                A                              (Parm)
// struct FRotator                B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_RotatorRotator");

	UObject_EqualEqual_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InCylinder
// (Final, Defined, Simulated, HasOptionalParms, Public, HasDefaults)
// Parameters:
// struct FVector                 Origin                         (Parm)
// struct FRotator                Dir                            (Parm)
// float                          Width                          (Parm)
// struct FVector                 A                              (Parm)
// unsigned long                  bIgnoreZ                       (OptionalParm, Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::InCylinder(const struct FVector& Origin, const struct FRotator& Dir, float Width, const struct FVector& A, unsigned long bIgnoreZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InCylinder");

	UObject_InCylinder_Params params;
	params.Origin = Origin;
	params.Dir = Dir;
	params.Width = Width;
	params.A = A;
	params.bIgnoreZ = bIgnoreZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NoZDot
// (Final, Defined, Simulated, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::NoZDot(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NoZDot");

	UObject_NoZDot_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClampLength
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 V                              (Parm)
// float                          MaxLength                      (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_ClampLength(const struct FVector& V, float MaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampLength");

	UObject_ClampLength_Params params;
	params.V = V;
	params.MaxLength = MaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VInterpConstantTo
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 Current                        (Parm)
// struct FVector                 Target                         (Parm)
// float                          DeltaTime                      (Parm)
// float                          InterpSpeed                    (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_VInterpConstantTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VInterpConstantTo");

	UObject_VInterpConstantTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VInterpTo
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 Current                        (Parm)
// struct FVector                 Target                         (Parm)
// float                          DeltaTime                      (Parm)
// float                          InterpSpeed                    (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VInterpTo");

	UObject_VInterpTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsZero
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_IsZero(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsZero");

	UObject_IsZero_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ProjectOnTo
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 X                              (Parm)
// struct FVector                 Y                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_ProjectOnTo(const struct FVector& X, const struct FVector& Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProjectOnTo");

	UObject_ProjectOnTo_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MirrorVectorByNormal
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 InVect                         (Parm)
// struct FVector                 InNormal                       (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MirrorVectorByNormal");

	UObject_MirrorVectorByNormal_Params params;
	params.InVect = InVect;
	params.InNormal = InNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VRandCone2
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 Dir                            (Parm)
// float                          HorizontalConeHalfAngleRadians (Parm)
// float                          VerticalConeHalfAngleRadians   (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_VRandCone2(const struct FVector& Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VRandCone2");

	UObject_VRandCone2_Params params;
	params.Dir = Dir;
	params.HorizontalConeHalfAngleRadians = HorizontalConeHalfAngleRadians;
	params.VerticalConeHalfAngleRadians = VerticalConeHalfAngleRadians;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VRandCone
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 Dir                            (Parm)
// float                          ConeHalfAngleRadians           (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_VRandCone(const struct FVector& Dir, float ConeHalfAngleRadians)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VRandCone");

	UObject_VRandCone_Params params;
	params.Dir = Dir;
	params.ConeHalfAngleRadians = ConeHalfAngleRadians;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VRand
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_VRand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VRand");

	UObject_VRand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSmerp
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// float                          Alpha                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_VSmerp(const struct FVector& A, const struct FVector& B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSmerp");

	UObject_VSmerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VLerp
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// float                          Alpha                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_VLerp(const struct FVector& A, const struct FVector& B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VLerp");

	UObject_VLerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Normal
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Normal(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Normal");

	UObject_Normal_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSizeSq2D
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_VSizeSq2D(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSizeSq2D");

	UObject_VSizeSq2D_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSizeSq
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_VSizeSq(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSizeSq");

	UObject_VSizeSq_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSize2D
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_VSize2D(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSize2D");

	UObject_VSize2D_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSize
// (Final, Native, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_VSize(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSize");

	UObject_VSize_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_VectorVector
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FVector                 A                              (Parm, OutParm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_SubtractEqual_VectorVector(const struct FVector& B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_VectorVector");

	UObject_SubtractEqual_VectorVector_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_VectorVector
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FVector                 A                              (Parm, OutParm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_AddEqual_VectorVector(const struct FVector& B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_VectorVector");

	UObject_AddEqual_VectorVector_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_VectorFloat
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FVector                 A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_DivideEqual_VectorFloat(float B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_VectorFloat");

	UObject_DivideEqual_VectorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_VectorVector
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FVector                 A                              (Parm, OutParm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_MultiplyEqual_VectorVector(const struct FVector& B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_VectorVector");

	UObject_MultiplyEqual_VectorVector_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_VectorFloat
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// struct FVector                 A                              (Parm, OutParm)
// float                          B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_MultiplyEqual_VectorFloat(float B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_VectorFloat");

	UObject_MultiplyEqual_VectorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Cross_VectorVector
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Cross_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Cross_VectorVector");

	UObject_Cross_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Dot_VectorVector
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Dot_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Dot_VectorVector");

	UObject_Dot_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_VectorVector
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_NotEqual_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_VectorVector");

	UObject_NotEqual_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_VectorVector
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_VectorVector");

	UObject_EqualEqual_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterGreater_VectorRotator
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FRotator                B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreater_VectorRotator");

	UObject_GreaterGreater_VectorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessLess_VectorRotator
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FRotator                B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessLess_VectorRotator");

	UObject_LessLess_VectorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_VectorVector
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Subtract_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_VectorVector");

	UObject_Subtract_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_VectorVector
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Add_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_VectorVector");

	UObject_Add_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Divide_VectorFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// float                          B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Divide_VectorFloat(const struct FVector& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_VectorFloat");

	UObject_Divide_VectorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_VectorVector
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Multiply_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_VectorVector");

	UObject_Multiply_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatVector
// (Final, Native, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// struct FVector                 B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Multiply_FloatVector(float A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatVector");

	UObject_Multiply_FloatVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_VectorFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// float                          B                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Multiply_VectorFloat(const struct FVector& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_VectorFloat");

	UObject_Multiply_VectorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_PreVector
// (Final, PreOperator, Native, Operator, Static, Public)
// Parameters:
// struct FVector                 A                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UObject::STATIC_Subtract_PreVector(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreVector");

	UObject_Subtract_PreVector_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpConstantTo
// (Final, Native, Static, Public)
// Parameters:
// float                          Current                        (Parm)
// float                          Target                         (Parm)
// float                          DeltaTime                      (Parm)
// float                          InterpSpeed                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpConstantTo");

	UObject_FInterpConstantTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpTo
// (Final, Native, Static, Public)
// Parameters:
// float                          Current                        (Parm)
// float                          Target                         (Parm)
// float                          DeltaTime                      (Parm)
// float                          InterpSpeed                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpTo");

	UObject_FInterpTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FPctByRange
// (Final, Defined, Simulated, Static, Public)
// Parameters:
// float                          Value                          (Parm)
// float                          InMin                          (Parm)
// float                          InMax                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FPctByRange(float Value, float InMin, float InMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FPctByRange");

	UObject_FPctByRange_Params params;
	params.Value = Value;
	params.InMin = InMin;
	params.InMax = InMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RandRange
// (Final, Defined, Simulated, Static, HasOptionalParms, Public)
// Parameters:
// float                          InMin                          (Parm)
// float                          InMax                          (Parm)
// float                          rounding_offset                (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_RandRange(float InMin, float InMax, float rounding_offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RandRange");

	UObject_RandRange_Params params;
	params.InMin = InMin;
	params.InMax = InMax;
	params.rounding_offset = rounding_offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpEaseInOut
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          Alpha                          (Parm)
// float                          Exp                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FInterpEaseInOut(float A, float B, float Alpha, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseInOut");

	UObject_FInterpEaseInOut_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpEaseOut
// (Final, Defined, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          Alpha                          (Parm)
// float                          Exp                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FInterpEaseOut(float A, float B, float Alpha, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseOut");

	UObject_FInterpEaseOut_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpEaseIn
// (Final, Defined, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          Alpha                          (Parm)
// float                          Exp                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FInterpEaseIn(float A, float B, float Alpha, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseIn");

	UObject_FInterpEaseIn_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FCubicInterp
// (Final, Native, Static, Public)
// Parameters:
// float                          P0                             (Parm)
// float                          T0                             (Parm)
// float                          P1                             (Parm)
// float                          T1                             (Parm)
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FCubicInterp(float P0, float T0, float P1, float T1, float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FCubicInterp");

	UObject_FCubicInterp_Params params;
	params.P0 = P0;
	params.T0 = T0;
	params.P1 = P1;
	params.T1 = T1;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SeededRand
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// int                            Seed                           (Parm, OutParm)
// int                            MaxVal                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_SeededRand(int MaxVal, int* Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SeededRand");

	UObject_SeededRand_Params params;
	params.MaxVal = MaxVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Seed != nullptr)
		*Seed = params.Seed;

	return params.ReturnValue;
}


// Function Core.Object.SeededFRand
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// int                            Seed                           (Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_SeededFRand(int* Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SeededFRand");

	UObject_SeededFRand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Seed != nullptr)
		*Seed = params.Seed;

	return params.ReturnValue;
}


// Function Core.Object.SeedRand
// (Native, Static, Public)
// Parameters:
// int                            A                              (Parm)

void UObject::STATIC_SeedRand(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SeedRand");

	UObject_SeedRand_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FCeil
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_FCeil(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FCeil");

	UObject_FCeil_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FFloor
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_FFloor(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FFloor");

	UObject_FFloor_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Round
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Round(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Round");

	UObject_Round_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Lerp
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          Alpha                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Lerp(float A, float B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Lerp");

	UObject_Lerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FClamp
// (Final, Native, Static, Public)
// Parameters:
// float                          V                              (Parm)
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FClamp(float V, float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FClamp");

	UObject_FClamp_Params params;
	params.V = V;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FMax
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FMax(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FMax");

	UObject_FMax_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FMin
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FMin(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FMin");

	UObject_FMin_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FRand
// (Final, Native, Static, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_FRand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FRand");

	UObject_FRand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Square
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Square(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Square");

	UObject_Square_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Sqrt
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Sqrt(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Sqrt");

	UObject_Sqrt_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Loge
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Loge(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Loge");

	UObject_Loge_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Exp
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Exp(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Exp");

	UObject_Exp_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Atan2
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Atan2(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Atan2");

	UObject_Atan2_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Atan
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Atan(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Atan");

	UObject_Atan_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Tan
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Tan(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Tan");

	UObject_Tan_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Acos
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Acos(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Acos");

	UObject_Acos_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Cos
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Cos(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Cos");

	UObject_Cos_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Asin
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Asin(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Asin");

	UObject_Asin_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Sin
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Sin(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Sin");

	UObject_Sin_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Abs
// (Final, Native, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Abs(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Abs");

	UObject_Abs_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_FloatFloat
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// float                          A                              (Parm, OutParm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_SubtractEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_FloatFloat");

	UObject_SubtractEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_FloatFloat
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// float                          A                              (Parm, OutParm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_AddEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_FloatFloat");

	UObject_AddEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_FloatFloat
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// float                          A                              (Parm, OutParm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_DivideEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_FloatFloat");

	UObject_DivideEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_FloatFloat
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// float                          A                              (Parm, OutParm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_MultiplyEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_FloatFloat");

	UObject_MultiplyEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_FloatFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_NotEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_FloatFloat");

	UObject_NotEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ComplementEqual_FloatFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_ComplementEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ComplementEqual_FloatFloat");

	UObject_ComplementEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_FloatFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_EqualEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_FloatFloat");

	UObject_EqualEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_FloatFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_GreaterEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_FloatFloat");

	UObject_GreaterEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_FloatFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_LessEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_FloatFloat");

	UObject_LessEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_FloatFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_Greater_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_FloatFloat");

	UObject_Greater_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_FloatFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_Less_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_FloatFloat");

	UObject_Less_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_FloatFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Subtract_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_FloatFloat");

	UObject_Subtract_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_FloatFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Add_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_FloatFloat");

	UObject_Add_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Percent_FloatFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Percent_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Percent_FloatFloat");

	UObject_Percent_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Divide_FloatFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Divide_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_FloatFloat");

	UObject_Divide_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          B                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Multiply_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatFloat");

	UObject_Multiply_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyMultiply_FloatFloat
// (Final, Native, Operator, Static, Public)
// Parameters:
// float                          Base                           (Parm)
// float                          Exp                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_MultiplyMultiply_FloatFloat(float Base, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyMultiply_FloatFloat");

	UObject_MultiplyMultiply_FloatFloat_Params params;
	params.Base = Base;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_PreFloat
// (Final, PreOperator, Native, Operator, Static, Public)
// Parameters:
// float                          A                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UObject::STATIC_Subtract_PreFloat(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreFloat");

	UObject_Subtract_PreFloat_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ToHex
// (Final, Native, Static, Public)
// Parameters:
// int                            A                              (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UObject::STATIC_ToHex(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ToHex");

	UObject_ToHex_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Clamp
// (Final, Native, Static, Public)
// Parameters:
// int                            V                              (Parm)
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Clamp(int V, int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Clamp");

	UObject_Clamp_Params params;
	params.V = V;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Max
// (Final, Native, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Max(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Max");

	UObject_Max_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Min
// (Final, Native, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Min(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Min");

	UObject_Min_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LargeRand
// (Final, Native, Static, Public)
// Parameters:
// int                            Max                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_LargeRand(int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LargeRand");

	UObject_LargeRand_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Rand
// (Final, Native, Static, Public)
// Parameters:
// int                            Max                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Rand(int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Rand");

	UObject_Rand_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractSubtract_Int
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_SubtractSubtract_Int(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_Int");

	UObject_SubtractSubtract_Int_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_Int
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_AddAdd_Int(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_Int");

	UObject_AddAdd_Int_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractSubtract_PreInt
// (Final, PreOperator, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_SubtractSubtract_PreInt(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_PreInt");

	UObject_SubtractSubtract_PreInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_PreInt
// (Final, PreOperator, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_AddAdd_PreInt(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_PreInt");

	UObject_AddAdd_PreInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_IntInt
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_SubtractEqual_IntInt(int B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_IntInt");

	UObject_SubtractEqual_IntInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_IntInt
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// int                            A                              (Parm, OutParm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_AddEqual_IntInt(int B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_IntInt");

	UObject_AddEqual_IntInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_IntFloat
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// int                            A                              (Parm, OutParm)
// float                          B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_DivideEqual_IntFloat(float B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_IntFloat");

	UObject_DivideEqual_IntFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_IntFloat
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// int                            A                              (Parm, OutParm)
// float                          B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_MultiplyEqual_IntFloat(float B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_IntFloat");

	UObject_MultiplyEqual_IntFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Or_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Or_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Or_IntInt");

	UObject_Or_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Xor_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Xor_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Xor_IntInt");

	UObject_Xor_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.And_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_And_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.And_IntInt");

	UObject_And_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_NotEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_IntInt");

	UObject_NotEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_EqualEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_IntInt");

	UObject_EqualEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_GreaterEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_IntInt");

	UObject_GreaterEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_LessEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_IntInt");

	UObject_LessEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_Greater_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_IntInt");

	UObject_Greater_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_Less_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_IntInt");

	UObject_Less_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterGreaterGreater_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_GreaterGreaterGreater_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreaterGreater_IntInt");

	UObject_GreaterGreaterGreater_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterGreater_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_GreaterGreater_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreater_IntInt");

	UObject_GreaterGreater_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessLess_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_LessLess_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessLess_IntInt");

	UObject_LessLess_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Subtract_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_IntInt");

	UObject_Subtract_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Add_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_IntInt");

	UObject_Add_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Percent_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Percent_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Percent_IntInt");

	UObject_Percent_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Divide_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Divide_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_IntInt");

	UObject_Divide_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_IntInt
// (Final, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Multiply_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_IntInt");

	UObject_Multiply_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_PreInt
// (Final, PreOperator, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Subtract_PreInt(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreInt");

	UObject_Subtract_PreInt_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Complement_PreInt
// (Final, PreOperator, Native, Operator, Static, Public)
// Parameters:
// int                            A                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::STATIC_Complement_PreInt(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Complement_PreInt");

	UObject_Complement_PreInt_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractSubtract_Byte
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_SubtractSubtract_Byte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_Byte");

	UObject_SubtractSubtract_Byte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_Byte
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_AddAdd_Byte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_Byte");

	UObject_AddAdd_Byte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractSubtract_PreByte
// (Final, PreOperator, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_SubtractSubtract_PreByte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_PreByte");

	UObject_SubtractSubtract_PreByte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_PreByte
// (Final, PreOperator, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_AddAdd_PreByte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_PreByte");

	UObject_AddAdd_PreByte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_ByteByte
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  B                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_SubtractEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_ByteByte");

	UObject_SubtractEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_ByteByte
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  B                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_AddEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_ByteByte");

	UObject_AddEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_ByteByte
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  B                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_DivideEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_ByteByte");

	UObject_DivideEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_ByteFloat
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// float                          B                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_MultiplyEqual_ByteFloat(float B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_ByteFloat");

	UObject_MultiplyEqual_ByteFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_ByteByte
// (Final, Native, Operator, Static, Public, HasOutParms)
// Parameters:
// unsigned char                  A                              (Parm, OutParm)
// unsigned char                  B                              (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UObject::STATIC_MultiplyEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_ByteByte");

	UObject_MultiplyEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.OrOr_BoolBool
// (Final, Native, Operator, Static, Public)
// Parameters:
// unsigned long                  A                              (Parm)
// unsigned long                  B                              (Parm, SkipParm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_OrOr_BoolBool(unsigned long A, unsigned long B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.OrOr_BoolBool");

	UObject_OrOr_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.XorXor_BoolBool
// (Final, Native, Operator, Static, Public)
// Parameters:
// unsigned long                  A                              (Parm)
// unsigned long                  B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_XorXor_BoolBool(unsigned long A, unsigned long B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.XorXor_BoolBool");

	UObject_XorXor_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.AndAnd_BoolBool
// (Final, Native, Operator, Static, Public)
// Parameters:
// unsigned long                  A                              (Parm)
// unsigned long                  B                              (Parm, SkipParm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_AndAnd_BoolBool(unsigned long A, unsigned long B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AndAnd_BoolBool");

	UObject_AndAnd_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_BoolBool
// (Final, Native, Operator, Static, Public)
// Parameters:
// unsigned long                  A                              (Parm)
// unsigned long                  B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_NotEqual_BoolBool(unsigned long A, unsigned long B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_BoolBool");

	UObject_NotEqual_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_BoolBool
// (Final, Native, Operator, Static, Public)
// Parameters:
// unsigned long                  A                              (Parm)
// unsigned long                  B                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_EqualEqual_BoolBool(unsigned long A, unsigned long B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_BoolBool");

	UObject_EqualEqual_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Not_PreBool
// (Final, PreOperator, Native, Operator, Static, Public)
// Parameters:
// unsigned long                  A                              (Parm)
// unsigned long                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned long UObject::STATIC_Not_PreBool(unsigned long A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Not_PreBool");

	UObject_Not_PreBool_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.DistributionVector.GetVectorValue
// (Native, HasOptionalParms, Public)
// Parameters:
// float                          F                              (OptionalParm, Parm)
// int                            LastExtreme                    (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UDistributionVector::GetVectorValue(float F, int LastExtreme)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DistributionVector.GetVectorValue");

	UDistributionVector_GetVectorValue_Params params;
	params.F = F;
	params.LastExtreme = LastExtreme;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.DistributionFloat.GetFloatValue
// (Native, HasOptionalParms, Public)
// Parameters:
// float                          F                              (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UDistributionFloat::GetFloatValue(float F)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DistributionFloat.GetFloatValue");

	UDistributionFloat_GetFloatValue_Params params;
	params.F = F;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Commandlet.Main
// (Native, Event, Public)
// Parameters:
// struct FString                 Params                         (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UCommandlet::Main(const struct FString& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Commandlet.Main");

	UCommandlet_Main_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.HelpCommandlet.Main
// (Native, Event, Public)
// Parameters:
// struct FString                 Params                         (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHelpCommandlet::Main(const struct FString& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.HelpCommandlet.Main");

	UHelpCommandlet_Main_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
