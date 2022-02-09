#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50;
// System.Func`2<System.Boolean,System.String>
struct Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7;
// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>
struct List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Battlehub.Dispatcher.DispatcherTest
struct DispatcherTest_t8867F837C6823DF4C7F3C1176C98F1F27B3B4A46;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// GooglePlayGames.BasicApi.SavedGame.IConflictResolver
struct IConflictResolver_tA0A82FBB5E43647C4B6D09AF94D83FAEE3A4BA9F;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_tBB651FD35E23180071D14340E1ADDA4AFB8108FB;
// UnityEngine.SocialPlatforms.IScore
struct IScore_tE3BDDCDC8FB888BD6AF13EE00EF6AE225DDF2B3B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient
struct DummyNearbyConnectionClient_t2ADA62640062D1EDBEAD1F92058F04BE8D042F3F  : public RuntimeObject
{
public:

public:
};


// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5  : public RuntimeObject
{
public:
	// System.Boolean GooglePlayGames.BasicApi.PlayerStats::mValid
	bool ___mValid_1;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mNumberOfPurchases
	int32_t ___mNumberOfPurchases_2;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mAvgSessionLength
	float ___mAvgSessionLength_3;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mDaysSinceLastPlayed
	int32_t ___mDaysSinceLastPlayed_4;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mNumberOfSessions
	int32_t ___mNumberOfSessions_5;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSessPercentile
	float ___mSessPercentile_6;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSpendPercentile
	float ___mSpendPercentile_7;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSpendProbability
	float ___mSpendProbability_8;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mChurnProbability
	float ___mChurnProbability_9;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mHighSpenderProbability
	float ___mHighSpenderProbability_10;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mTotalSpendNext28Days
	float ___mTotalSpendNext28Days_11;

public:
	inline static int32_t get_offset_of_mValid_1() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mValid_1)); }
	inline bool get_mValid_1() const { return ___mValid_1; }
	inline bool* get_address_of_mValid_1() { return &___mValid_1; }
	inline void set_mValid_1(bool value)
	{
		___mValid_1 = value;
	}

	inline static int32_t get_offset_of_mNumberOfPurchases_2() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mNumberOfPurchases_2)); }
	inline int32_t get_mNumberOfPurchases_2() const { return ___mNumberOfPurchases_2; }
	inline int32_t* get_address_of_mNumberOfPurchases_2() { return &___mNumberOfPurchases_2; }
	inline void set_mNumberOfPurchases_2(int32_t value)
	{
		___mNumberOfPurchases_2 = value;
	}

	inline static int32_t get_offset_of_mAvgSessionLength_3() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mAvgSessionLength_3)); }
	inline float get_mAvgSessionLength_3() const { return ___mAvgSessionLength_3; }
	inline float* get_address_of_mAvgSessionLength_3() { return &___mAvgSessionLength_3; }
	inline void set_mAvgSessionLength_3(float value)
	{
		___mAvgSessionLength_3 = value;
	}

	inline static int32_t get_offset_of_mDaysSinceLastPlayed_4() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mDaysSinceLastPlayed_4)); }
	inline int32_t get_mDaysSinceLastPlayed_4() const { return ___mDaysSinceLastPlayed_4; }
	inline int32_t* get_address_of_mDaysSinceLastPlayed_4() { return &___mDaysSinceLastPlayed_4; }
	inline void set_mDaysSinceLastPlayed_4(int32_t value)
	{
		___mDaysSinceLastPlayed_4 = value;
	}

	inline static int32_t get_offset_of_mNumberOfSessions_5() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mNumberOfSessions_5)); }
	inline int32_t get_mNumberOfSessions_5() const { return ___mNumberOfSessions_5; }
	inline int32_t* get_address_of_mNumberOfSessions_5() { return &___mNumberOfSessions_5; }
	inline void set_mNumberOfSessions_5(int32_t value)
	{
		___mNumberOfSessions_5 = value;
	}

	inline static int32_t get_offset_of_mSessPercentile_6() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mSessPercentile_6)); }
	inline float get_mSessPercentile_6() const { return ___mSessPercentile_6; }
	inline float* get_address_of_mSessPercentile_6() { return &___mSessPercentile_6; }
	inline void set_mSessPercentile_6(float value)
	{
		___mSessPercentile_6 = value;
	}

	inline static int32_t get_offset_of_mSpendPercentile_7() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mSpendPercentile_7)); }
	inline float get_mSpendPercentile_7() const { return ___mSpendPercentile_7; }
	inline float* get_address_of_mSpendPercentile_7() { return &___mSpendPercentile_7; }
	inline void set_mSpendPercentile_7(float value)
	{
		___mSpendPercentile_7 = value;
	}

	inline static int32_t get_offset_of_mSpendProbability_8() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mSpendProbability_8)); }
	inline float get_mSpendProbability_8() const { return ___mSpendProbability_8; }
	inline float* get_address_of_mSpendProbability_8() { return &___mSpendProbability_8; }
	inline void set_mSpendProbability_8(float value)
	{
		___mSpendProbability_8 = value;
	}

	inline static int32_t get_offset_of_mChurnProbability_9() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mChurnProbability_9)); }
	inline float get_mChurnProbability_9() const { return ___mChurnProbability_9; }
	inline float* get_address_of_mChurnProbability_9() { return &___mChurnProbability_9; }
	inline void set_mChurnProbability_9(float value)
	{
		___mChurnProbability_9 = value;
	}

	inline static int32_t get_offset_of_mHighSpenderProbability_10() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mHighSpenderProbability_10)); }
	inline float get_mHighSpenderProbability_10() const { return ___mHighSpenderProbability_10; }
	inline float* get_address_of_mHighSpenderProbability_10() { return &___mHighSpenderProbability_10; }
	inline void set_mHighSpenderProbability_10(float value)
	{
		___mHighSpenderProbability_10 = value;
	}

	inline static int32_t get_offset_of_mTotalSpendNext28Days_11() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5, ___mTotalSpendNext28Days_11)); }
	inline float get_mTotalSpendNext28Days_11() const { return ___mTotalSpendNext28Days_11; }
	inline float* get_address_of_mTotalSpendNext28Days_11() { return &___mTotalSpendNext28Days_11; }
	inline void set_mTotalSpendNext28Days_11(float value)
	{
		___mTotalSpendNext28Days_11 = value;
	}
};

struct PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5_StaticFields
{
public:
	// System.Single GooglePlayGames.BasicApi.PlayerStats::UNSET_VALUE
	float ___UNSET_VALUE_0;

public:
	inline static int32_t get_offset_of_UNSET_VALUE_0() { return static_cast<int32_t>(offsetof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5_StaticFields, ___UNSET_VALUE_0)); }
	inline float get_UNSET_VALUE_0() const { return ___UNSET_VALUE_0; }
	inline float* get_address_of_UNSET_VALUE_0() { return &___UNSET_VALUE_0; }
	inline void set_UNSET_VALUE_0(float value)
	{
		___UNSET_VALUE_0 = value;
	}
};


// GooglePlayGames.BasicApi.SignInHelper
struct SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6  : public RuntimeObject
{
public:

public:
};

struct SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_StaticFields
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SignInHelper::True
	int32_t ___True_0;
	// System.Int32 GooglePlayGames.BasicApi.SignInHelper::False
	int32_t ___False_1;

public:
	inline static int32_t get_offset_of_True_0() { return static_cast<int32_t>(offsetof(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_StaticFields, ___True_0)); }
	inline int32_t get_True_0() const { return ___True_0; }
	inline int32_t* get_address_of_True_0() { return &___True_0; }
	inline void set_True_0(int32_t value)
	{
		___True_0 = value;
	}

	inline static int32_t get_offset_of_False_1() { return static_cast<int32_t>(offsetof(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_StaticFields, ___False_1)); }
	inline int32_t get_False_1() const { return ___False_1; }
	inline int32_t* get_address_of_False_1() { return &___False_1; }
	inline void set_False_1(int32_t value)
	{
		___False_1 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// GooglePlayGames.BasicApi.Video.VideoCapabilities
struct VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99  : public RuntimeObject
{
public:
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsCameraSupported
	bool ___mIsCameraSupported_0;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsMicSupported
	bool ___mIsMicSupported_1;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsWriteStorageSupported
	bool ___mIsWriteStorageSupported_2;
	// System.Boolean[] GooglePlayGames.BasicApi.Video.VideoCapabilities::mCaptureModesSupported
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___mCaptureModesSupported_3;
	// System.Boolean[] GooglePlayGames.BasicApi.Video.VideoCapabilities::mQualityLevelsSupported
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___mQualityLevelsSupported_4;

public:
	inline static int32_t get_offset_of_mIsCameraSupported_0() { return static_cast<int32_t>(offsetof(VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99, ___mIsCameraSupported_0)); }
	inline bool get_mIsCameraSupported_0() const { return ___mIsCameraSupported_0; }
	inline bool* get_address_of_mIsCameraSupported_0() { return &___mIsCameraSupported_0; }
	inline void set_mIsCameraSupported_0(bool value)
	{
		___mIsCameraSupported_0 = value;
	}

	inline static int32_t get_offset_of_mIsMicSupported_1() { return static_cast<int32_t>(offsetof(VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99, ___mIsMicSupported_1)); }
	inline bool get_mIsMicSupported_1() const { return ___mIsMicSupported_1; }
	inline bool* get_address_of_mIsMicSupported_1() { return &___mIsMicSupported_1; }
	inline void set_mIsMicSupported_1(bool value)
	{
		___mIsMicSupported_1 = value;
	}

	inline static int32_t get_offset_of_mIsWriteStorageSupported_2() { return static_cast<int32_t>(offsetof(VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99, ___mIsWriteStorageSupported_2)); }
	inline bool get_mIsWriteStorageSupported_2() const { return ___mIsWriteStorageSupported_2; }
	inline bool* get_address_of_mIsWriteStorageSupported_2() { return &___mIsWriteStorageSupported_2; }
	inline void set_mIsWriteStorageSupported_2(bool value)
	{
		___mIsWriteStorageSupported_2 = value;
	}

	inline static int32_t get_offset_of_mCaptureModesSupported_3() { return static_cast<int32_t>(offsetof(VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99, ___mCaptureModesSupported_3)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_mCaptureModesSupported_3() const { return ___mCaptureModesSupported_3; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_mCaptureModesSupported_3() { return &___mCaptureModesSupported_3; }
	inline void set_mCaptureModesSupported_3(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___mCaptureModesSupported_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCaptureModesSupported_3), (void*)value);
	}

	inline static int32_t get_offset_of_mQualityLevelsSupported_4() { return static_cast<int32_t>(offsetof(VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99, ___mQualityLevelsSupported_4)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_mQualityLevelsSupported_4() const { return ___mQualityLevelsSupported_4; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_mQualityLevelsSupported_4() { return &___mQualityLevelsSupported_4; }
	inline void set_mQualityLevelsSupported_4(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___mQualityLevelsSupported_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mQualityLevelsSupported_4), (void*)value);
	}
};


// Battlehub.Dispatcher.DispatcherTest/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3B830C526F10B57965FB6C95DEBB8D7A20F81BD6  : public RuntimeObject
{
public:
	// Battlehub.Dispatcher.DispatcherTest Battlehub.Dispatcher.DispatcherTest/<>c__DisplayClass2_0::<>4__this
	DispatcherTest_t8867F837C6823DF4C7F3C1176C98F1F27B3B4A46 * ___U3CU3E4__this_0;
	// System.Object Battlehub.Dispatcher.DispatcherTest/<>c__DisplayClass2_0::param
	RuntimeObject * ___param_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3B830C526F10B57965FB6C95DEBB8D7A20F81BD6, ___U3CU3E4__this_0)); }
	inline DispatcherTest_t8867F837C6823DF4C7F3C1176C98F1F27B3B4A46 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline DispatcherTest_t8867F837C6823DF4C7F3C1176C98F1F27B3B4A46 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(DispatcherTest_t8867F837C6823DF4C7F3C1176C98F1F27B3B4A46 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_param_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3B830C526F10B57965FB6C95DEBB8D7A20F81BD6, ___param_1)); }
	inline RuntimeObject * get_param_1() const { return ___param_1; }
	inline RuntimeObject ** get_address_of_param_1() { return &___param_1; }
	inline void set_param_1(RuntimeObject * value)
	{
		___param_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___param_1), (void*)value);
	}
};


// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder
struct Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D  : public RuntimeObject
{
public:
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mEnableSaveGames
	bool ___mEnableSaveGames_0;
	// System.Collections.Generic.List`1<System.String> GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mScopes
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___mScopes_1;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mHidePopups
	bool ___mHidePopups_2;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestAuthCode
	bool ___mRequestAuthCode_3;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mForceRefresh
	bool ___mForceRefresh_4;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestEmail
	bool ___mRequestEmail_5;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestIdToken
	bool ___mRequestIdToken_6;
	// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mAccountName
	String_t* ___mAccountName_7;

public:
	inline static int32_t get_offset_of_mEnableSaveGames_0() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mEnableSaveGames_0)); }
	inline bool get_mEnableSaveGames_0() const { return ___mEnableSaveGames_0; }
	inline bool* get_address_of_mEnableSaveGames_0() { return &___mEnableSaveGames_0; }
	inline void set_mEnableSaveGames_0(bool value)
	{
		___mEnableSaveGames_0 = value;
	}

	inline static int32_t get_offset_of_mScopes_1() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mScopes_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_mScopes_1() const { return ___mScopes_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_mScopes_1() { return &___mScopes_1; }
	inline void set_mScopes_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___mScopes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScopes_1), (void*)value);
	}

	inline static int32_t get_offset_of_mHidePopups_2() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mHidePopups_2)); }
	inline bool get_mHidePopups_2() const { return ___mHidePopups_2; }
	inline bool* get_address_of_mHidePopups_2() { return &___mHidePopups_2; }
	inline void set_mHidePopups_2(bool value)
	{
		___mHidePopups_2 = value;
	}

	inline static int32_t get_offset_of_mRequestAuthCode_3() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mRequestAuthCode_3)); }
	inline bool get_mRequestAuthCode_3() const { return ___mRequestAuthCode_3; }
	inline bool* get_address_of_mRequestAuthCode_3() { return &___mRequestAuthCode_3; }
	inline void set_mRequestAuthCode_3(bool value)
	{
		___mRequestAuthCode_3 = value;
	}

	inline static int32_t get_offset_of_mForceRefresh_4() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mForceRefresh_4)); }
	inline bool get_mForceRefresh_4() const { return ___mForceRefresh_4; }
	inline bool* get_address_of_mForceRefresh_4() { return &___mForceRefresh_4; }
	inline void set_mForceRefresh_4(bool value)
	{
		___mForceRefresh_4 = value;
	}

	inline static int32_t get_offset_of_mRequestEmail_5() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mRequestEmail_5)); }
	inline bool get_mRequestEmail_5() const { return ___mRequestEmail_5; }
	inline bool* get_address_of_mRequestEmail_5() { return &___mRequestEmail_5; }
	inline void set_mRequestEmail_5(bool value)
	{
		___mRequestEmail_5 = value;
	}

	inline static int32_t get_offset_of_mRequestIdToken_6() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mRequestIdToken_6)); }
	inline bool get_mRequestIdToken_6() const { return ___mRequestIdToken_6; }
	inline bool* get_address_of_mRequestIdToken_6() { return &___mRequestIdToken_6; }
	inline void set_mRequestIdToken_6(bool value)
	{
		___mRequestIdToken_6 = value;
	}

	inline static int32_t get_offset_of_mAccountName_7() { return static_cast<int32_t>(offsetof(Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D, ___mAccountName_7)); }
	inline String_t* get_mAccountName_7() const { return ___mAccountName_7; }
	inline String_t** get_address_of_mAccountName_7() { return &___mAccountName_7; }
	inline void set_mAccountName_7(String_t* value)
	{
		___mAccountName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAccountName_7), (void*)value);
	}
};


// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields
{
public:
	// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9
	U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * ___U3CU3E9_0;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_0
	Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * ___U3CU3E9__14_0_1;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_1
	Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * ___U3CU3E9__14_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields, ___U3CU3E9__14_0_1)); }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * get_U3CU3E9__14_0_1() const { return ___U3CU3E9__14_0_1; }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 ** get_address_of_U3CU3E9__14_0_1() { return &___U3CU3E9__14_0_1; }
	inline void set_U3CU3E9__14_0_1(Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * value)
	{
		___U3CU3E9__14_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields, ___U3CU3E9__14_1_2)); }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * get_U3CU3E9__14_1_2() const { return ___U3CU3E9__14_1_2; }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 ** get_address_of_U3CU3E9__14_1_2() { return &___U3CU3E9__14_1_2; }
	inline void set_U3CU3E9__14_1_2(Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * value)
	{
		___U3CU3E9__14_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_1_2), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 
{
public:
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mEndpointId
	String_t* ___mEndpointId_0;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mServiceId
	String_t* ___mServiceId_2;

public:
	inline static int32_t get_offset_of_mEndpointId_0() { return static_cast<int32_t>(offsetof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288, ___mEndpointId_0)); }
	inline String_t* get_mEndpointId_0() const { return ___mEndpointId_0; }
	inline String_t** get_address_of_mEndpointId_0() { return &___mEndpointId_0; }
	inline void set_mEndpointId_0(String_t* value)
	{
		___mEndpointId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEndpointId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mName_1), (void*)value);
	}

	inline static int32_t get_offset_of_mServiceId_2() { return static_cast<int32_t>(offsetof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288, ___mServiceId_2)); }
	inline String_t* get_mServiceId_2() const { return ___mServiceId_2; }
	inline String_t** get_address_of_mServiceId_2() { return &___mServiceId_2; }
	inline void set_mServiceId_2(String_t* value)
	{
		___mServiceId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mServiceId_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke
{
	char* ___mEndpointId_0;
	char* ___mName_1;
	char* ___mServiceId_2;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_com
{
	Il2CppChar* ___mEndpointId_0;
	Il2CppChar* ___mName_1;
	Il2CppChar* ___mServiceId_2;
};

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967 
{
public:
	// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mInitializationCallback
	Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * ___mInitializationCallback_2;
	// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mLocalClientId
	int64_t ___mLocalClientId_3;

public:
	inline static int32_t get_offset_of_mInitializationCallback_2() { return static_cast<int32_t>(offsetof(NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967, ___mInitializationCallback_2)); }
	inline Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * get_mInitializationCallback_2() const { return ___mInitializationCallback_2; }
	inline Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 ** get_address_of_mInitializationCallback_2() { return &___mInitializationCallback_2; }
	inline void set_mInitializationCallback_2(Action_1_t960474DB725ECFAE3FB77A89D1E71F308EC14D50 * value)
	{
		___mInitializationCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInitializationCallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_mLocalClientId_3() { return static_cast<int32_t>(offsetof(NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967, ___mLocalClientId_3)); }
	inline int64_t get_mLocalClientId_3() const { return ___mLocalClientId_3; }
	inline int64_t* get_address_of_mLocalClientId_3() { return &___mLocalClientId_3; }
	inline void set_mLocalClientId_3(int64_t value)
	{
		___mLocalClientId_3 = value;
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshaled_pinvoke
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshaled_com
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mEnableSavedGames
	bool ___mEnableSavedGames_1;
	// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mScopes
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___mScopes_2;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestAuthCode
	bool ___mRequestAuthCode_3;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mForceRefresh
	bool ___mForceRefresh_4;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mHidePopups
	bool ___mHidePopups_5;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestEmail
	bool ___mRequestEmail_6;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestIdToken
	bool ___mRequestIdToken_7;
	// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mAccountName
	String_t* ___mAccountName_8;

public:
	inline static int32_t get_offset_of_mEnableSavedGames_1() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mEnableSavedGames_1)); }
	inline bool get_mEnableSavedGames_1() const { return ___mEnableSavedGames_1; }
	inline bool* get_address_of_mEnableSavedGames_1() { return &___mEnableSavedGames_1; }
	inline void set_mEnableSavedGames_1(bool value)
	{
		___mEnableSavedGames_1 = value;
	}

	inline static int32_t get_offset_of_mScopes_2() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mScopes_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_mScopes_2() const { return ___mScopes_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_mScopes_2() { return &___mScopes_2; }
	inline void set_mScopes_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___mScopes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScopes_2), (void*)value);
	}

	inline static int32_t get_offset_of_mRequestAuthCode_3() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mRequestAuthCode_3)); }
	inline bool get_mRequestAuthCode_3() const { return ___mRequestAuthCode_3; }
	inline bool* get_address_of_mRequestAuthCode_3() { return &___mRequestAuthCode_3; }
	inline void set_mRequestAuthCode_3(bool value)
	{
		___mRequestAuthCode_3 = value;
	}

	inline static int32_t get_offset_of_mForceRefresh_4() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mForceRefresh_4)); }
	inline bool get_mForceRefresh_4() const { return ___mForceRefresh_4; }
	inline bool* get_address_of_mForceRefresh_4() { return &___mForceRefresh_4; }
	inline void set_mForceRefresh_4(bool value)
	{
		___mForceRefresh_4 = value;
	}

	inline static int32_t get_offset_of_mHidePopups_5() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mHidePopups_5)); }
	inline bool get_mHidePopups_5() const { return ___mHidePopups_5; }
	inline bool* get_address_of_mHidePopups_5() { return &___mHidePopups_5; }
	inline void set_mHidePopups_5(bool value)
	{
		___mHidePopups_5 = value;
	}

	inline static int32_t get_offset_of_mRequestEmail_6() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mRequestEmail_6)); }
	inline bool get_mRequestEmail_6() const { return ___mRequestEmail_6; }
	inline bool* get_address_of_mRequestEmail_6() { return &___mRequestEmail_6; }
	inline void set_mRequestEmail_6(bool value)
	{
		___mRequestEmail_6 = value;
	}

	inline static int32_t get_offset_of_mRequestIdToken_7() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mRequestIdToken_7)); }
	inline bool get_mRequestIdToken_7() const { return ___mRequestIdToken_7; }
	inline bool* get_address_of_mRequestIdToken_7() { return &___mRequestIdToken_7; }
	inline void set_mRequestIdToken_7(bool value)
	{
		___mRequestIdToken_7 = value;
	}

	inline static int32_t get_offset_of_mAccountName_8() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767, ___mAccountName_8)); }
	inline String_t* get_mAccountName_8() const { return ___mAccountName_8; }
	inline String_t** get_address_of_mAccountName_8() { return &___mAccountName_8; }
	inline void set_mAccountName_8(String_t* value)
	{
		___mAccountName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAccountName_8), (void*)value);
	}
};

struct PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767_StaticFields
{
public:
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration::DefaultConfiguration
	PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  ___DefaultConfiguration_0;

public:
	inline static int32_t get_offset_of_DefaultConfiguration_0() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767_StaticFields, ___DefaultConfiguration_0)); }
	inline PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  get_DefaultConfiguration_0() const { return ___DefaultConfiguration_0; }
	inline PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767 * get_address_of_DefaultConfiguration_0() { return &___DefaultConfiguration_0; }
	inline void set_DefaultConfiguration_0(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767  value)
	{
		___DefaultConfiguration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultConfiguration_0))->___mScopes_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultConfiguration_0))->___mAccountName_8), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767_marshaled_pinvoke
{
	int32_t ___mEnableSavedGames_1;
	char** ___mScopes_2;
	int32_t ___mRequestAuthCode_3;
	int32_t ___mForceRefresh_4;
	int32_t ___mHidePopups_5;
	int32_t ___mRequestEmail_6;
	int32_t ___mRequestIdToken_7;
	char* ___mAccountName_8;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767_marshaled_com
{
	int32_t ___mEnableSavedGames_1;
	Il2CppChar** ___mScopes_2;
	int32_t ___mRequestAuthCode_3;
	int32_t ___mForceRefresh_4;
	int32_t ___mHidePopups_5;
	int32_t ___mRequestEmail_6;
	int32_t ___mRequestIdToken_7;
	Il2CppChar* ___mAccountName_8;
};

// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy
struct ConflictResolutionStrategy_t8684F345D2B2B3161F672F8D75C5F877217742A4 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConflictResolutionStrategy_t8684F345D2B2B3161F672F8D75C5F877217742A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B 
{
public:
	// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mRemoteEndpoint
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  ___mRemoteEndpoint_0;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mPayload
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mPayload_1;

public:
	inline static int32_t get_offset_of_mRemoteEndpoint_0() { return static_cast<int32_t>(offsetof(ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B, ___mRemoteEndpoint_0)); }
	inline EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  get_mRemoteEndpoint_0() const { return ___mRemoteEndpoint_0; }
	inline EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * get_address_of_mRemoteEndpoint_0() { return &___mRemoteEndpoint_0; }
	inline void set_mRemoteEndpoint_0(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  value)
	{
		___mRemoteEndpoint_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mRemoteEndpoint_0))->___mEndpointId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mRemoteEndpoint_0))->___mName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mRemoteEndpoint_0))->___mServiceId_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_mPayload_1() { return static_cast<int32_t>(offsetof(ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B, ___mPayload_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mPayload_1() const { return ___mPayload_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mPayload_1() { return &___mPayload_1; }
	inline void set_mPayload_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mPayload_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPayload_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshaled_pinvoke
{
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke ___mRemoteEndpoint_0;
	Il2CppSafeArray/*NONE*/* ___mPayload_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshaled_com
{
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_com ___mRemoteEndpoint_0;
	Il2CppSafeArray/*NONE*/* ___mPayload_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// GooglePlayGames.BasicApi.Events.EventVisibility
struct EventVisibility_t8E2509CE94C7A012FC15C91D47DF7B980E07F80B 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Events.EventVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventVisibility_t8E2509CE94C7A012FC15C91D47DF7B980E07F80B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.InitializationStatus
struct InitializationStatus_t8592B0F11F97A79EE9E0DFA2818B9BB31D52320D 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Nearby.InitializationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializationStatus_t8592B0F11F97A79EE9E0DFA2818B9BB31D52320D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.LeaderboardCollection
struct LeaderboardCollection_tC3638B09024F3416BA7A76950E28BB3E1E30A63A 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.LeaderboardCollection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeaderboardCollection_tC3638B09024F3416BA7A76950E28BB3E1E30A63A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.LeaderboardTimeSpan
struct LeaderboardTimeSpan_t841AD02F4AAB745A9683498796B3F19BF1499A20 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.LeaderboardTimeSpan::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeaderboardTimeSpan_t841AD02F4AAB745A9683498796B3F19BF1499A20, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesUserProfile::mDisplayName
	String_t* ___mDisplayName_0;
	// System.String GooglePlayGames.PlayGamesUserProfile::mPlayerId
	String_t* ___mPlayerId_1;
	// System.String GooglePlayGames.PlayGamesUserProfile::mAvatarUrl
	String_t* ___mAvatarUrl_2;
	// System.Boolean GooglePlayGames.PlayGamesUserProfile::mIsFriend
	bool ___mIsFriend_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesUserProfile::mImageLoading
	bool ___mImageLoading_4;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesUserProfile::mImage
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___mImage_5;

public:
	inline static int32_t get_offset_of_mDisplayName_0() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mDisplayName_0)); }
	inline String_t* get_mDisplayName_0() const { return ___mDisplayName_0; }
	inline String_t** get_address_of_mDisplayName_0() { return &___mDisplayName_0; }
	inline void set_mDisplayName_0(String_t* value)
	{
		___mDisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDisplayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_mPlayerId_1() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mPlayerId_1)); }
	inline String_t* get_mPlayerId_1() const { return ___mPlayerId_1; }
	inline String_t** get_address_of_mPlayerId_1() { return &___mPlayerId_1; }
	inline void set_mPlayerId_1(String_t* value)
	{
		___mPlayerId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayerId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mAvatarUrl_2() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mAvatarUrl_2)); }
	inline String_t* get_mAvatarUrl_2() const { return ___mAvatarUrl_2; }
	inline String_t** get_address_of_mAvatarUrl_2() { return &___mAvatarUrl_2; }
	inline void set_mAvatarUrl_2(String_t* value)
	{
		___mAvatarUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAvatarUrl_2), (void*)value);
	}

	inline static int32_t get_offset_of_mIsFriend_3() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mIsFriend_3)); }
	inline bool get_mIsFriend_3() const { return ___mIsFriend_3; }
	inline bool* get_address_of_mIsFriend_3() { return &___mIsFriend_3; }
	inline void set_mIsFriend_3(bool value)
	{
		___mIsFriend_3 = value;
	}

	inline static int32_t get_offset_of_mImageLoading_4() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mImageLoading_4)); }
	inline bool get_mImageLoading_4() const { return ___mImageLoading_4; }
	inline bool* get_address_of_mImageLoading_4() { return &___mImageLoading_4; }
	inline void set_mImageLoading_4(bool value)
	{
		___mImageLoading_4 = value;
	}

	inline static int32_t get_offset_of_mImage_5() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4, ___mImage_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_mImage_5() const { return ___mImage_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_mImage_5() { return &___mImage_5; }
	inline void set_mImage_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___mImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImage_5), (void*)value);
	}
};


// GooglePlayGames.BasicApi.ResponseStatus
struct ResponseStatus_t31C6337C84ABBF9243B1628F28D9B459D4D18FC0 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.ResponseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResponseStatus_t31C6337C84ABBF9243B1628F28D9B459D4D18FC0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus
struct SavedGameRequestStatus_tA5EF487EDCE427196C113A9774865F776A83E3DF 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SavedGameRequestStatus_tA5EF487EDCE427196C113A9774865F776A83E3DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.ScorePageDirection
struct ScorePageDirection_tDDF3409B758D1404422B7151BF3A408B621A164E 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.ScorePageDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScorePageDirection_tDDF3409B758D1404422B7151BF3A408B621A164E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SavedGame.SelectUIStatus
struct SelectUIStatus_tE3BC39A02A1CD04825A49B705478FE3E32F38EC3 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SavedGame.SelectUIStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectUIStatus_tE3BC39A02A1CD04825A49B705478FE3E32F38EC3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SignInInteractivity
struct SignInInteractivity_t49D2984050DB1F6918E15969E5592E9CB5E4A65F 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SignInInteractivity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SignInInteractivity_t49D2984050DB1F6918E15969E5592E9CB5E4A65F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SignInStatus
struct SignInStatus_t8AB2FD9416400CA43D65FC1F4217E509CE05D968 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SignInStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SignInStatus_t8AB2FD9416400CA43D65FC1F4217E509CE05D968, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// GooglePlayGames.BasicApi.VideoCaptureMode
struct VideoCaptureMode_t3AFBC016247CBDE78D0B0836A25118928C4D764E 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.VideoCaptureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoCaptureMode_t3AFBC016247CBDE78D0B0836A25118928C4D764E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.VideoQualityLevel
struct VideoQualityLevel_t78599CFB330356CB2E93733E59B0C36A1A7EFEDD 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.VideoQualityLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoQualityLevel_t78599CFB330356CB2E93733E59B0C36A1A7EFEDD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status
struct Status_t2A40B1117B3DA0A9707437CCAA60368A4D1345AB 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t2A40B1117B3DA0A9707437CCAA60368A4D1345AB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___value_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_value_0() const { return ___value_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E 
{
public:
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mStatus
	int32_t ___mStatus_0;
	// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mLocalEndpointName
	String_t* ___mLocalEndpointName_1;

public:
	inline static int32_t get_offset_of_mStatus_0() { return static_cast<int32_t>(offsetof(AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E, ___mStatus_0)); }
	inline int32_t get_mStatus_0() const { return ___mStatus_0; }
	inline int32_t* get_address_of_mStatus_0() { return &___mStatus_0; }
	inline void set_mStatus_0(int32_t value)
	{
		___mStatus_0 = value;
	}

	inline static int32_t get_offset_of_mLocalEndpointName_1() { return static_cast<int32_t>(offsetof(AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E, ___mLocalEndpointName_1)); }
	inline String_t* get_mLocalEndpointName_1() const { return ___mLocalEndpointName_1; }
	inline String_t** get_address_of_mLocalEndpointName_1() { return &___mLocalEndpointName_1; }
	inline void set_mLocalEndpointName_1(String_t* value)
	{
		___mLocalEndpointName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLocalEndpointName_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshaled_pinvoke
{
	int32_t ___mStatus_0;
	char* ___mLocalEndpointName_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshaled_com
{
	int32_t ___mStatus_0;
	Il2CppChar* ___mLocalEndpointName_1;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38 
{
public:
	// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mLocalClientId
	int64_t ___mLocalClientId_1;
	// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mRemoteEndpointId
	String_t* ___mRemoteEndpointId_2;
	// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mResponseStatus
	int32_t ___mResponseStatus_3;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mPayload
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mPayload_4;

public:
	inline static int32_t get_offset_of_mLocalClientId_1() { return static_cast<int32_t>(offsetof(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38, ___mLocalClientId_1)); }
	inline int64_t get_mLocalClientId_1() const { return ___mLocalClientId_1; }
	inline int64_t* get_address_of_mLocalClientId_1() { return &___mLocalClientId_1; }
	inline void set_mLocalClientId_1(int64_t value)
	{
		___mLocalClientId_1 = value;
	}

	inline static int32_t get_offset_of_mRemoteEndpointId_2() { return static_cast<int32_t>(offsetof(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38, ___mRemoteEndpointId_2)); }
	inline String_t* get_mRemoteEndpointId_2() const { return ___mRemoteEndpointId_2; }
	inline String_t** get_address_of_mRemoteEndpointId_2() { return &___mRemoteEndpointId_2; }
	inline void set_mRemoteEndpointId_2(String_t* value)
	{
		___mRemoteEndpointId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRemoteEndpointId_2), (void*)value);
	}

	inline static int32_t get_offset_of_mResponseStatus_3() { return static_cast<int32_t>(offsetof(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38, ___mResponseStatus_3)); }
	inline int32_t get_mResponseStatus_3() const { return ___mResponseStatus_3; }
	inline int32_t* get_address_of_mResponseStatus_3() { return &___mResponseStatus_3; }
	inline void set_mResponseStatus_3(int32_t value)
	{
		___mResponseStatus_3 = value;
	}

	inline static int32_t get_offset_of_mPayload_4() { return static_cast<int32_t>(offsetof(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38, ___mPayload_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mPayload_4() const { return ___mPayload_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mPayload_4() { return &___mPayload_4; }
	inline void set_mPayload_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mPayload_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPayload_4), (void*)value);
	}
};

struct ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_StaticFields
{
public:
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EmptyPayload
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___EmptyPayload_0;

public:
	inline static int32_t get_offset_of_EmptyPayload_0() { return static_cast<int32_t>(offsetof(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_StaticFields, ___EmptyPayload_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_EmptyPayload_0() const { return ___EmptyPayload_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_EmptyPayload_0() { return &___EmptyPayload_0; }
	inline void set_EmptyPayload_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___EmptyPayload_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyPayload_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshaled_pinvoke
{
	int64_t ___mLocalClientId_1;
	char* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	Il2CppSafeArray/*NONE*/* ___mPayload_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshaled_com
{
	int64_t ___mLocalClientId_1;
	Il2CppChar* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	Il2CppSafeArray/*NONE*/* ___mPayload_4;
};

// GooglePlayGames.BasicApi.Events.Event
struct Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.Events.Event::mId
	String_t* ___mId_0;
	// System.String GooglePlayGames.BasicApi.Events.Event::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Events.Event::mDescription
	String_t* ___mDescription_2;
	// System.String GooglePlayGames.BasicApi.Events.Event::mImageUrl
	String_t* ___mImageUrl_3;
	// System.UInt64 GooglePlayGames.BasicApi.Events.Event::mCurrentCount
	uint64_t ___mCurrentCount_4;
	// GooglePlayGames.BasicApi.Events.EventVisibility GooglePlayGames.BasicApi.Events.Event::mVisibility
	int32_t ___mVisibility_5;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mName_1), (void*)value);
	}

	inline static int32_t get_offset_of_mDescription_2() { return static_cast<int32_t>(offsetof(Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00, ___mDescription_2)); }
	inline String_t* get_mDescription_2() const { return ___mDescription_2; }
	inline String_t** get_address_of_mDescription_2() { return &___mDescription_2; }
	inline void set_mDescription_2(String_t* value)
	{
		___mDescription_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDescription_2), (void*)value);
	}

	inline static int32_t get_offset_of_mImageUrl_3() { return static_cast<int32_t>(offsetof(Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00, ___mImageUrl_3)); }
	inline String_t* get_mImageUrl_3() const { return ___mImageUrl_3; }
	inline String_t** get_address_of_mImageUrl_3() { return &___mImageUrl_3; }
	inline void set_mImageUrl_3(String_t* value)
	{
		___mImageUrl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImageUrl_3), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentCount_4() { return static_cast<int32_t>(offsetof(Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00, ___mCurrentCount_4)); }
	inline uint64_t get_mCurrentCount_4() const { return ___mCurrentCount_4; }
	inline uint64_t* get_address_of_mCurrentCount_4() { return &___mCurrentCount_4; }
	inline void set_mCurrentCount_4(uint64_t value)
	{
		___mCurrentCount_4 = value;
	}

	inline static int32_t get_offset_of_mVisibility_5() { return static_cast<int32_t>(offsetof(Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00, ___mVisibility_5)); }
	inline int32_t get_mVisibility_5() const { return ___mVisibility_5; }
	inline int32_t* get_address_of_mVisibility_5() { return &___mVisibility_5; }
	inline void set_mVisibility_5(int32_t value)
	{
		___mVisibility_5 = value;
	}
};


// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mId
	String_t* ___mId_0;
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.LeaderboardScoreData::mStatus
	int32_t ___mStatus_1;
	// System.UInt64 GooglePlayGames.BasicApi.LeaderboardScoreData::mApproxCount
	uint64_t ___mApproxCount_2;
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mTitle
	String_t* ___mTitle_3;
	// UnityEngine.SocialPlatforms.IScore GooglePlayGames.BasicApi.LeaderboardScoreData::mPlayerScore
	RuntimeObject* ___mPlayerScore_4;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mPrevPage
	ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * ___mPrevPage_5;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mNextPage
	ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * ___mNextPage_6;
	// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore> GooglePlayGames.BasicApi.LeaderboardScoreData::mScores
	List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD * ___mScores_7;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mStatus_1() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mStatus_1)); }
	inline int32_t get_mStatus_1() const { return ___mStatus_1; }
	inline int32_t* get_address_of_mStatus_1() { return &___mStatus_1; }
	inline void set_mStatus_1(int32_t value)
	{
		___mStatus_1 = value;
	}

	inline static int32_t get_offset_of_mApproxCount_2() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mApproxCount_2)); }
	inline uint64_t get_mApproxCount_2() const { return ___mApproxCount_2; }
	inline uint64_t* get_address_of_mApproxCount_2() { return &___mApproxCount_2; }
	inline void set_mApproxCount_2(uint64_t value)
	{
		___mApproxCount_2 = value;
	}

	inline static int32_t get_offset_of_mTitle_3() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mTitle_3)); }
	inline String_t* get_mTitle_3() const { return ___mTitle_3; }
	inline String_t** get_address_of_mTitle_3() { return &___mTitle_3; }
	inline void set_mTitle_3(String_t* value)
	{
		___mTitle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_3), (void*)value);
	}

	inline static int32_t get_offset_of_mPlayerScore_4() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mPlayerScore_4)); }
	inline RuntimeObject* get_mPlayerScore_4() const { return ___mPlayerScore_4; }
	inline RuntimeObject** get_address_of_mPlayerScore_4() { return &___mPlayerScore_4; }
	inline void set_mPlayerScore_4(RuntimeObject* value)
	{
		___mPlayerScore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayerScore_4), (void*)value);
	}

	inline static int32_t get_offset_of_mPrevPage_5() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mPrevPage_5)); }
	inline ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * get_mPrevPage_5() const { return ___mPrevPage_5; }
	inline ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 ** get_address_of_mPrevPage_5() { return &___mPrevPage_5; }
	inline void set_mPrevPage_5(ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * value)
	{
		___mPrevPage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPrevPage_5), (void*)value);
	}

	inline static int32_t get_offset_of_mNextPage_6() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mNextPage_6)); }
	inline ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * get_mNextPage_6() const { return ___mNextPage_6; }
	inline ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 ** get_address_of_mNextPage_6() { return &___mNextPage_6; }
	inline void set_mNextPage_6(ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27 * value)
	{
		___mNextPage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNextPage_6), (void*)value);
	}

	inline static int32_t get_offset_of_mScores_7() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A, ___mScores_7)); }
	inline List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD * get_mScores_7() const { return ___mScores_7; }
	inline List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD ** get_address_of_mScores_7() { return &___mScores_7; }
	inline void set_mScores_7(List_1_tEE3229E4B0D2376E0A736159C61CA832259519DD * value)
	{
		___mScores_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScores_7), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// GooglePlayGames.BasicApi.Player
struct Player_t3A66FEFFF92A8FB233A5AE2093ECAD476AE585AC  : public PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4
{
public:

public:
};


// GooglePlayGames.BasicApi.PlayerProfile
struct PlayerProfile_t08951A4376DBBC54B16FFAC7DA67D0B7BB1E2CF0  : public PlayGamesUserProfile_t006D357E6B0FC8890F2F95188880A0E0DFA3CDF4
{
public:

public:
};


// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.ScorePageToken::mId
	String_t* ___mId_0;
	// System.Object GooglePlayGames.BasicApi.ScorePageToken::mInternalObject
	RuntimeObject * ___mInternalObject_1;
	// GooglePlayGames.BasicApi.LeaderboardCollection GooglePlayGames.BasicApi.ScorePageToken::mCollection
	int32_t ___mCollection_2;
	// GooglePlayGames.BasicApi.LeaderboardTimeSpan GooglePlayGames.BasicApi.ScorePageToken::mTimespan
	int32_t ___mTimespan_3;
	// GooglePlayGames.BasicApi.ScorePageDirection GooglePlayGames.BasicApi.ScorePageToken::mDirection
	int32_t ___mDirection_4;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mInternalObject_1() { return static_cast<int32_t>(offsetof(ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27, ___mInternalObject_1)); }
	inline RuntimeObject * get_mInternalObject_1() const { return ___mInternalObject_1; }
	inline RuntimeObject ** get_address_of_mInternalObject_1() { return &___mInternalObject_1; }
	inline void set_mInternalObject_1(RuntimeObject * value)
	{
		___mInternalObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInternalObject_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCollection_2() { return static_cast<int32_t>(offsetof(ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27, ___mCollection_2)); }
	inline int32_t get_mCollection_2() const { return ___mCollection_2; }
	inline int32_t* get_address_of_mCollection_2() { return &___mCollection_2; }
	inline void set_mCollection_2(int32_t value)
	{
		___mCollection_2 = value;
	}

	inline static int32_t get_offset_of_mTimespan_3() { return static_cast<int32_t>(offsetof(ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27, ___mTimespan_3)); }
	inline int32_t get_mTimespan_3() const { return ___mTimespan_3; }
	inline int32_t* get_address_of_mTimespan_3() { return &___mTimespan_3; }
	inline void set_mTimespan_3(int32_t value)
	{
		___mTimespan_3 = value;
	}

	inline static int32_t get_offset_of_mDirection_4() { return static_cast<int32_t>(offsetof(ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27, ___mDirection_4)); }
	inline int32_t get_mDirection_4() const { return ___mDirection_4; }
	inline int32_t* get_address_of_mDirection_4() { return &___mDirection_4; }
	inline void set_mDirection_4(int32_t value)
	{
		___mDirection_4 = value;
	}
};


// GooglePlayGames.BasicApi.Video.VideoCaptureState
struct VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E  : public RuntimeObject
{
public:
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsCapturing
	bool ___mIsCapturing_0;
	// GooglePlayGames.BasicApi.VideoCaptureMode GooglePlayGames.BasicApi.Video.VideoCaptureState::mCaptureMode
	int32_t ___mCaptureMode_1;
	// GooglePlayGames.BasicApi.VideoQualityLevel GooglePlayGames.BasicApi.Video.VideoCaptureState::mQualityLevel
	int32_t ___mQualityLevel_2;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsOverlayVisible
	bool ___mIsOverlayVisible_3;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsPaused
	bool ___mIsPaused_4;

public:
	inline static int32_t get_offset_of_mIsCapturing_0() { return static_cast<int32_t>(offsetof(VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E, ___mIsCapturing_0)); }
	inline bool get_mIsCapturing_0() const { return ___mIsCapturing_0; }
	inline bool* get_address_of_mIsCapturing_0() { return &___mIsCapturing_0; }
	inline void set_mIsCapturing_0(bool value)
	{
		___mIsCapturing_0 = value;
	}

	inline static int32_t get_offset_of_mCaptureMode_1() { return static_cast<int32_t>(offsetof(VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E, ___mCaptureMode_1)); }
	inline int32_t get_mCaptureMode_1() const { return ___mCaptureMode_1; }
	inline int32_t* get_address_of_mCaptureMode_1() { return &___mCaptureMode_1; }
	inline void set_mCaptureMode_1(int32_t value)
	{
		___mCaptureMode_1 = value;
	}

	inline static int32_t get_offset_of_mQualityLevel_2() { return static_cast<int32_t>(offsetof(VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E, ___mQualityLevel_2)); }
	inline int32_t get_mQualityLevel_2() const { return ___mQualityLevel_2; }
	inline int32_t* get_address_of_mQualityLevel_2() { return &___mQualityLevel_2; }
	inline void set_mQualityLevel_2(int32_t value)
	{
		___mQualityLevel_2 = value;
	}

	inline static int32_t get_offset_of_mIsOverlayVisible_3() { return static_cast<int32_t>(offsetof(VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E, ___mIsOverlayVisible_3)); }
	inline bool get_mIsOverlayVisible_3() const { return ___mIsOverlayVisible_3; }
	inline bool* get_address_of_mIsOverlayVisible_3() { return &___mIsOverlayVisible_3; }
	inline void set_mIsOverlayVisible_3(bool value)
	{
		___mIsOverlayVisible_3 = value;
	}

	inline static int32_t get_offset_of_mIsPaused_4() { return static_cast<int32_t>(offsetof(VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E, ___mIsPaused_4)); }
	inline bool get_mIsPaused_4() const { return ___mIsPaused_4; }
	inline bool* get_address_of_mIsPaused_4() { return &___mIsPaused_4; }
	inline void set_mIsPaused_4(bool value)
	{
		___mIsPaused_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t2E111633623A7EC978BB282E1B8D86209A078644  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPngCoverImage
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPlayedTime
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;

public:
	inline static int32_t get_offset_of_mDescriptionUpdated_0() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mDescriptionUpdated_0)); }
	inline bool get_mDescriptionUpdated_0() const { return ___mDescriptionUpdated_0; }
	inline bool* get_address_of_mDescriptionUpdated_0() { return &___mDescriptionUpdated_0; }
	inline void set_mDescriptionUpdated_0(bool value)
	{
		___mDescriptionUpdated_0 = value;
	}

	inline static int32_t get_offset_of_mNewDescription_1() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mNewDescription_1)); }
	inline String_t* get_mNewDescription_1() const { return ___mNewDescription_1; }
	inline String_t** get_address_of_mNewDescription_1() { return &___mNewDescription_1; }
	inline void set_mNewDescription_1(String_t* value)
	{
		___mNewDescription_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewDescription_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCoverImageUpdated_2() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mCoverImageUpdated_2)); }
	inline bool get_mCoverImageUpdated_2() const { return ___mCoverImageUpdated_2; }
	inline bool* get_address_of_mCoverImageUpdated_2() { return &___mCoverImageUpdated_2; }
	inline void set_mCoverImageUpdated_2(bool value)
	{
		___mCoverImageUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mNewPngCoverImage_3() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mNewPngCoverImage_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mNewPngCoverImage_3() const { return ___mNewPngCoverImage_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mNewPngCoverImage_3() { return &___mNewPngCoverImage_3; }
	inline void set_mNewPngCoverImage_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mNewPngCoverImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewPngCoverImage_3), (void*)value);
	}

	inline static int32_t get_offset_of_mNewPlayedTime_4() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3, ___mNewPlayedTime_4)); }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  get_mNewPlayedTime_4() const { return ___mNewPlayedTime_4; }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * get_address_of_mNewPlayedTime_4() { return &___mNewPlayedTime_4; }
	inline void set_mNewPlayedTime_4(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  value)
	{
		___mNewPlayedTime_4 = value;
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPngCoverImage
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPlayedTime
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;

public:
	inline static int32_t get_offset_of_mDescriptionUpdated_0() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mDescriptionUpdated_0)); }
	inline bool get_mDescriptionUpdated_0() const { return ___mDescriptionUpdated_0; }
	inline bool* get_address_of_mDescriptionUpdated_0() { return &___mDescriptionUpdated_0; }
	inline void set_mDescriptionUpdated_0(bool value)
	{
		___mDescriptionUpdated_0 = value;
	}

	inline static int32_t get_offset_of_mNewDescription_1() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mNewDescription_1)); }
	inline String_t* get_mNewDescription_1() const { return ___mNewDescription_1; }
	inline String_t** get_address_of_mNewDescription_1() { return &___mNewDescription_1; }
	inline void set_mNewDescription_1(String_t* value)
	{
		___mNewDescription_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewDescription_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCoverImageUpdated_2() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mCoverImageUpdated_2)); }
	inline bool get_mCoverImageUpdated_2() const { return ___mCoverImageUpdated_2; }
	inline bool* get_address_of_mCoverImageUpdated_2() { return &___mCoverImageUpdated_2; }
	inline void set_mCoverImageUpdated_2(bool value)
	{
		___mCoverImageUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mNewPngCoverImage_3() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mNewPngCoverImage_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mNewPngCoverImage_3() const { return ___mNewPngCoverImage_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mNewPngCoverImage_3() { return &___mNewPngCoverImage_3; }
	inline void set_mNewPngCoverImage_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mNewPngCoverImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewPngCoverImage_3), (void*)value);
	}

	inline static int32_t get_offset_of_mNewPlayedTime_4() { return static_cast<int32_t>(offsetof(Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059, ___mNewPlayedTime_4)); }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  get_mNewPlayedTime_4() const { return ___mNewPlayedTime_4; }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * get_address_of_mNewPlayedTime_4() { return &___mNewPlayedTime_4; }
	inline void set_mNewPlayedTime_4(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  value)
	{
		___mNewPlayedTime_4 = value;
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Battlehub.Dispatcher.Dispatcher
struct Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Battlehub.Dispatcher.Dispatcher Battlehub.Dispatcher.Dispatcher::m_current
	Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F * ___m_current_4;
	// System.Int32 Battlehub.Dispatcher.Dispatcher::m_lock
	int32_t ___m_lock_6;
	// System.Boolean Battlehub.Dispatcher.Dispatcher::m_run
	bool ___m_run_7;
	// System.Collections.Generic.Queue`1<System.Action> Battlehub.Dispatcher.Dispatcher::m_wait
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * ___m_wait_8;

public:
	inline static int32_t get_offset_of_m_current_4() { return static_cast<int32_t>(offsetof(Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F, ___m_current_4)); }
	inline Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F * get_m_current_4() const { return ___m_current_4; }
	inline Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F ** get_address_of_m_current_4() { return &___m_current_4; }
	inline void set_m_current_4(Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F * value)
	{
		___m_current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_current_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_lock_6() { return static_cast<int32_t>(offsetof(Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F, ___m_lock_6)); }
	inline int32_t get_m_lock_6() const { return ___m_lock_6; }
	inline int32_t* get_address_of_m_lock_6() { return &___m_lock_6; }
	inline void set_m_lock_6(int32_t value)
	{
		___m_lock_6 = value;
	}

	inline static int32_t get_offset_of_m_run_7() { return static_cast<int32_t>(offsetof(Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F, ___m_run_7)); }
	inline bool get_m_run_7() const { return ___m_run_7; }
	inline bool* get_address_of_m_run_7() { return &___m_run_7; }
	inline void set_m_run_7(bool value)
	{
		___m_run_7 = value;
	}

	inline static int32_t get_offset_of_m_wait_8() { return static_cast<int32_t>(offsetof(Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F, ___m_wait_8)); }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * get_m_wait_8() const { return ___m_wait_8; }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 ** get_address_of_m_wait_8() { return &___m_wait_8; }
	inline void set_m_wait_8(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * value)
	{
		___m_wait_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wait_8), (void*)value);
	}
};

struct Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F_StaticFields
{
public:
	// Battlehub.Dispatcher.Dispatcher Battlehub.Dispatcher.Dispatcher::<Current>k__BackingField
	Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F * ___U3CCurrentU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F_StaticFields, ___U3CCurrentU3Ek__BackingField_5)); }
	inline Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F * get_U3CCurrentU3Ek__BackingField_5() const { return ___U3CCurrentU3Ek__BackingField_5; }
	inline Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F ** get_address_of_U3CCurrentU3Ek__BackingField_5() { return &___U3CCurrentU3Ek__BackingField_5; }
	inline void set_U3CCurrentU3Ek__BackingField_5(Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F * value)
	{
		___U3CCurrentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentU3Ek__BackingField_5), (void*)value);
	}
};


// Battlehub.Dispatcher.DispatcherTest
struct DispatcherTest_t8867F837C6823DF4C7F3C1176C98F1F27B3B4A46  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Battlehub.Dispatcher.DispatcherTest::Output
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Output_4;

public:
	inline static int32_t get_offset_of_Output_4() { return static_cast<int32_t>(offsetof(DispatcherTest_t8867F837C6823DF4C7F3C1176C98F1F27B3B4A46, ___Output_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Output_4() const { return ___Output_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Output_4() { return &___Output_4; }
	inline void set_Output_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Output_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Output_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4631;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4631 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4632;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4632 = { sizeof (LeaderboardScoreData_tFB3294363C69976558D10147503B5A6C1B12471A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4633;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4633 = { sizeof (Builder_t921D47CB7A1A180A4F830ADDF2129A0CBF74A79D), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4634;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4634 = { sizeof (PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767)+ sizeof (RuntimeObject), -1, sizeof(PlayGamesClientConfiguration_t1CAFB82E49A49FCA5426765257A5986967131767_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4635;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4635 = { sizeof (Player_t3A66FEFFF92A8FB233A5AE2093ECAD476AE585AC), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4636;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4636 = { sizeof (PlayerProfile_t08951A4376DBBC54B16FFAC7DA67D0B7BB1E2CF0), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4637;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4637 = { sizeof (PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5), -1, sizeof(PlayerStats_tDF1598DA58B629082F9C1889DF0E3242571521A5_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4638;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4638 = { sizeof (ScorePageDirection_tDDF3409B758D1404422B7151BF3A408B621A164E)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4639;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4639 = { sizeof (ScorePageToken_t52D37F539CE0112739F7A7FC91CBBFDA75290A27), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4640;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4640 = { sizeof (SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6), -1, sizeof(SignInHelper_tD9043E9BEEDD34030E2DB35BB33D5B7C33FE84A6_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4641;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4641 = { sizeof (SignInInteractivity_t49D2984050DB1F6918E15969E5592E9CB5E4A65F)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4642;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4642 = { sizeof (SignInStatus_t8AB2FD9416400CA43D65FC1F4217E509CE05D968)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4643;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4643 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4644;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4644 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4645;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4645 = { sizeof (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6), -1, sizeof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4646;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4646 = { sizeof (VideoCapabilities_tCFD333CB6914C81DB9D35BBFE41F469BBC693B99), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4647;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4647 = { sizeof (VideoCaptureState_t2AF8B5BAF15632F82FE8C3323DEE568068083A1E), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4648;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4648 = { sizeof (ConflictResolutionStrategy_t8684F345D2B2B3161F672F8D75C5F877217742A4)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4649;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4649 = { sizeof (SavedGameRequestStatus_tA5EF487EDCE427196C113A9774865F776A83E3DF)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4650;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4650 = { sizeof (SelectUIStatus_tE3BC39A02A1CD04825A49B705478FE3E32F38EC3)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4651;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4651 = { sizeof (ConflictCallback_t2E111633623A7EC978BB282E1B8D86209A078644), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4652;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4652 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4653;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4653 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4654;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4654 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4655;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4655 = { sizeof (Builder_tCE85399ED504E02B55159C00D7808D85DBBD9059)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4656;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4656 = { sizeof (SavedGameMetadataUpdate_t02F6414B871AAAA1775D3E3696A2217D947BD1C3)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4657;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4657 = { sizeof (AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E)+ sizeof (RuntimeObject), sizeof(AdvertisingResult_t9924760C749A87DD07FECCB8A1C144A65D71532E_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4658;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4658 = { sizeof (ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B)+ sizeof (RuntimeObject), sizeof(ConnectionRequest_tDD5F0F3650C9619D78F998326C739A3E763AD76B_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4659;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4659 = { sizeof (Status_t2A40B1117B3DA0A9707437CCAA60368A4D1345AB)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4660;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4660 = { sizeof (ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38)+ sizeof (RuntimeObject), sizeof(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_marshaled_pinvoke), sizeof(ConnectionResponse_tEAFD25C036FE17317B25CEAF4D40491CC2C6FE38_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4661;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4661 = { sizeof (DummyNearbyConnectionClient_t2ADA62640062D1EDBEAD1F92058F04BE8D042F3F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4662;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4662 = { sizeof (EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288)+ sizeof (RuntimeObject), sizeof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4663;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4663 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4664;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4664 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4665;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4665 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4666;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4666 = { sizeof (InitializationStatus_t8592B0F11F97A79EE9E0DFA2818B9BB31D52320D)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4667;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4667 = { sizeof (NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967)+ sizeof (RuntimeObject), sizeof(NearbyConnectionConfiguration_tDF5975060B0DFB52FE4AA7345B0C8C77663D3967_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4668;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4668 = { sizeof (Event_tDD9280585BBC47DF1DB6DBE82C46BB939CA74A00), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4669;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4669 = { sizeof (EventVisibility_t8E2509CE94C7A012FC15C91D47DF7B980E07F80B)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4670;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4670 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4671;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4671 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4672;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4672 = { sizeof (Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F), -1, sizeof(Dispatcher_t6F4D64A1CE946F170D36A22BD992BF039BAD3A4F_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4673;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4673 = { sizeof (U3CU3Ec__DisplayClass2_0_t3B830C526F10B57965FB6C95DEBB8D7A20F81BD6), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4674;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4674 = { sizeof (DispatcherTest_t8867F837C6823DF4C7F3C1176C98F1F27B3B4A46), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
