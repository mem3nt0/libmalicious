#pragma once



#include <stdint.h>
#include <Windows.h>

#include "xObfuscation.h"



#define X_MEMORY_MODULE_FUNCTION_0(__Type, __Name) \
	typedef  __Type (WINAPI* pfn_##__Name)(); \
private: \
	xObfuscationObfuscatedAddress<pfn_##__Name> m_pfn##__Name; \
	static bool Is##__Name(const bool set = false) \
	{ \
		static bool s_Is##__Name(false); \
		if (set) \
		{ \
			s_Is##__Name = true; \
		} \
		return s_Is##__Name; \
	} \
public: \
	__Type __Name() \
	{ \
		if (GetModule()) \
		{ \
			if (!Is##__Name()) \
			{ \
				m_pfn##__Name = X_OBFUSCATED_ADDRESS((pfn_##__Name) GetFunction(X_OBFUSCATED_STRING_A(#__Name))); \
				Is##__Name(true); \
			} \
			if (m_pfn##__Name.Callee()) \
			{ \
				return m_pfn##__Name.Callee()(); \
			} \
			else \
			{ \
				return (__Type) NULL; \
			} \
		} \
		else \
		{ \
			return (__Type) NULL; \
		} \
	} 

#define X_MEMORY_MODULE_FUNCTION_1(__Type, __Name, __Param_1) \
	typedef  __Type (WINAPI* pfn_##__Name)(__Param_1); \
private: \
	xObfuscationObfuscatedAddress<pfn_##__Name> m_pfn##__Name; \
	static bool Is##__Name(const bool set = false) \
	{ \
		static bool s_Is##__Name(false); \
		if (set) \
		{ \
			s_Is##__Name = true; \
		} \
		return s_Is##__Name; \
	} \
public: \
	__Type __Name(__Param_1 p1) \
	{ \
		if (GetModule()) \
		{ \
			if (!Is##__Name()) \
			{ \
				m_pfn##__Name = X_OBFUSCATED_ADDRESS((pfn_##__Name) GetFunction(X_OBFUSCATED_STRING_A(#__Name))); \
				Is##__Name(true); \
			} \
			if (m_pfn##__Name.Callee()) \
			{ \
				return m_pfn##__Name.Callee()(p1); \
			} \
			else \
			{ \
				return (__Type) NULL; \
			} \
		} \
		else \
		{ \
			return (__Type) NULL; \
		} \
	} 

#define X_MEMORY_MODULE_FUNCTION_2(__Type, __Name, __Param_1, __Param_2) \
	typedef  __Type (WINAPI* pfn_##__Name)(__Param_1, __Param_2); \
private: \
	xObfuscationObfuscatedAddress<pfn_##__Name> m_pfn##__Name; \
	static bool Is##__Name(const bool set = false) \
	{ \
		static bool s_Is##__Name(false); \
		if (set) \
		{ \
			s_Is##__Name = true; \
		} \
		return s_Is##__Name; \
	} \
public: \
	__Type __Name(__Param_1 p1, __Param_2 p2) \
	{ \
		if (GetModule()) \
		{ \
			if (!Is##__Name()) \
			{ \
				m_pfn##__Name = X_OBFUSCATED_ADDRESS((pfn_##__Name) GetFunction(X_OBFUSCATED_STRING_A(#__Name))); \
				Is##__Name(true); \
			} \
			if (m_pfn##__Name.Callee()) \
			{ \
				return m_pfn##__Name.Callee()(p1, p2); \
			} \
			else \
			{ \
				return (__Type) NULL; \
			} \
		} \
		else \
		{ \
			return (__Type) NULL; \
		} \
	} 

#define X_MEMORY_MODULE_FUNCTION_3(__Type, __Name, __Param_1, __Param_2, __Param_3) \
	typedef  __Type (WINAPI* pfn_##__Name)(__Param_1, __Param_2, __Param_3); \
private: \
	xObfuscationObfuscatedAddress<pfn_##__Name> m_pfn##__Name; \
	static bool Is##__Name(const bool set = false) \
	{ \
		static bool s_Is##__Name(false); \
		if (set) \
		{ \
			s_Is##__Name = true; \
		} \
		return s_Is##__Name; \
	} \
public: \
	__Type __Name(__Param_1 p1, __Param_2 p2, __Param_3 p3) \
	{ \
		if (GetModule()) \
		{ \
			if (!Is##__Name()) \
			{ \
				m_pfn##__Name = X_OBFUSCATED_ADDRESS((pfn_##__Name) GetFunction(X_OBFUSCATED_STRING_A(#__Name))); \
				Is##__Name(true); \
			} \
			if (m_pfn##__Name.Callee()) \
			{ \
				return m_pfn##__Name.Callee()(p1, p2, p3); \
			} \
			else \
			{ \
				return (__Type) NULL; \
			} \
		} \
		else \
		{ \
			return (__Type) NULL; \
		} \
	} 

#define X_MEMORY_MODULE_FUNCTION_4(__Type, __Name, __Param_1, __Param_2, __Param_3, __Param_4) \
	typedef  __Type (WINAPI* pfn_##__Name)(__Param_1, __Param_2, __Param_3, __Param_4); \
private: \
	xObfuscationObfuscatedAddress<pfn_##__Name> m_pfn##__Name; \
	static bool Is##__Name(const bool set = false) \
	{ \
		static bool s_Is##__Name(false); \
		if (set) \
		{ \
			s_Is##__Name = true; \
		} \
		return s_Is##__Name; \
	} \
public: \
	__Type __Name(__Param_1 p1, __Param_2 p2, __Param_3 p3, __Param_4 p4) \
	{ \
		if (GetModule()) \
		{ \
			if (!Is##__Name()) \
			{ \
				m_pfn##__Name = X_OBFUSCATED_ADDRESS((pfn_##__Name) GetFunction(X_OBFUSCATED_STRING_A(#__Name))); \
				Is##__Name(true); \
			} \
			if (m_pfn##__Name.Callee()) \
			{ \
				return m_pfn##__Name.Callee()(p1, p2, p3, p4); \
			} \
			else \
			{ \
				return (__Type) NULL; \
			} \
		} \
		else \
		{ \
			return (__Type) NULL; \
		} \
	} 

#define X_MEMORY_MODULE_FUNCTION_5(__Type, __Name, __Param_1, __Param_2, __Param_3, __Param_4, __Param_5) \
	typedef  __Type (WINAPI* pfn_##__Name)(__Param_1, __Param_2, __Param_3, __Param_4, __Param_5); \
private: \
	xObfuscationObfuscatedAddress<pfn_##__Name> m_pfn##__Name; \
	static bool Is##__Name(const bool set = false) \
	{ \
		static bool s_Is##__Name(false); \
		if (set) \
		{ \
			s_Is##__Name = true; \
		} \
		return s_Is##__Name; \
	} \
public: \
	__Type __Name(__Param_1 p1, __Param_2 p2, __Param_3 p3, __Param_4 p4, __Param_5 p5) \
	{ \
		if (GetModule()) \
		{ \
			if (!Is##__Name()) \
			{ \
				m_pfn##__Name = X_OBFUSCATED_ADDRESS((pfn_##__Name) GetFunction(X_OBFUSCATED_STRING_A(#__Name))); \
				Is##__Name(true); \
			} \
			if (m_pfn##__Name.Callee()) \
			{ \
				return m_pfn##__Name.Callee()(p1, p2, p3, p4, p5); \
			} \
			else \
			{ \
				return (__Type) NULL; \
			} \
		} \
		else \
		{ \
			return (__Type) NULL; \
		} \
	} 

#define X_MEMORY_MODULE_FUNCTION_6(__Type, __Name, __Param_1, __Param_2, __Param_3, __Param_4, __Param_5, __Param_6) \
	typedef  __Type (WINAPI* pfn_##__Name)(__Param_1, __Param_2, __Param_3, __Param_4, __Param_5, __Param_6); \
private: \
	xObfuscationObfuscatedAddress<pfn_##__Name> m_pfn##__Name; \
	static bool Is##__Name(const bool set = false) \
	{ \
		static bool s_Is##__Name(false); \
		if (set) \
		{ \
			s_Is##__Name = true; \
		} \
		return s_Is##__Name; \
	} \
public: \
	__Type __Name(__Param_1 p1, __Param_2 p2, __Param_3 p3, __Param_4 p4, __Param_5 p5, __Param_6 p6) \
	{ \
		if (GetModule()) \
		{ \
			if (!Is##__Name()) \
			{ \
				m_pfn##__Name = X_OBFUSCATED_ADDRESS((pfn_##__Name) GetFunction(X_OBFUSCATED_STRING_A(#__Name))); \
				Is##__Name(true); \
			} \
			if (m_pfn##__Name.Callee()) \
			{ \
				return m_pfn##__Name.Callee()(p1, p2, p3, p4, p5, p6); \
			} \
			else \
			{ \
				return (__Type) NULL; \
			} \
		} \
		else \
		{ \
			return (__Type) NULL; \
		} \
	} 

#define X_MEMORY_MODULE_FUNCTION_7(__Type, __Name, __Param_1, __Param_2, __Param_3, __Param_4, __Param_5, __Param_6, __Param_7) \
	typedef  __Type (WINAPI* pfn_##__Name)(__Param_1, __Param_2, __Param_3, __Param_4, __Param_5, __Param_6, __Param_7); \
private: \
	xObfuscationObfuscatedAddress<pfn_##__Name> m_pfn##__Name; \
	static bool Is##__Name(const bool set = false) \
	{ \
		static bool s_Is##__Name(false); \
		if (set) \
		{ \
			s_Is##__Name = true; \
		} \
		return s_Is##__Name; \
	} \
public: \
	__Type __Name(__Param_1 p1, __Param_2 p2, __Param_3 p3, __Param_4 p4, __Param_5 p5, __Param_6 p6, __Param_7 p7) \
	{ \
		if (GetModule()) \
		{ \
			if (!Is##__Name()) \
			{ \
				m_pfn##__Name = X_OBFUSCATED_ADDRESS((pfn_##__Name) GetFunction(X_OBFUSCATED_STRING_A(#__Name))); \
				Is##__Name(true); \
			} \
			if (m_pfn##__Name.Callee()) \
			{ \
				return m_pfn##__Name.Callee()(p1, p2, p3, p4, p5, p6, p7); \
			} \
			else \
			{ \
				return (__Type) NULL; \
			} \
		} \
		else \
		{ \
			return (__Type) NULL; \
		} \
	} 

#define X_MEMORY_MODULE_FUNCTION_8(__Type, __Name, __Param_1, __Param_2, __Param_3, __Param_4, __Param_5, __Param_6, __Param_7, __Param_8) \
	typedef  __Type (WINAPI* pfn_##__Name)(__Param_1, __Param_2, __Param_3, __Param_4, __Param_5, __Param_6, __Param_7, __Param_8); \
private: \
	xObfuscationObfuscatedAddress<pfn_##__Name> m_pfn##__Name; \
	static bool Is##__Name(const bool set = false) \
	{ \
		static bool s_Is##__Name(false); \
		if (set) \
		{ \
			s_Is##__Name = true; \
		} \
		return s_Is##__Name; \
	} \
public: \
	__Type __Name(__Param_1 p1, __Param_2 p2, __Param_3 p3, __Param_4 p4, __Param_5 p5, __Param_6 p6, __Param_7 p7, __Param_8 p8) \
	{ \
		if (GetModule()) \
		{ \
			if (!Is##__Name()) \
			{ \
				m_pfn##__Name = X_OBFUSCATED_ADDRESS((pfn_##__Name) GetFunction(X_OBFUSCATED_STRING_A(#__Name))); \
				Is##__Name(true); \
			} \
			if (m_pfn##__Name.Callee()) \
			{ \
				return m_pfn##__Name.Callee()(p1, p2, p3, p4, p5, p6, p7, p8); \
			} \
			else \
			{ \
				return (__Type) NULL; \
			} \
		} \
		else \
		{ \
			return (__Type) NULL; \
		} \
	} 

#define X_MEMORY_MODULE_FUNCTION_9(__Type, __Name, __Param_1, __Param_2, __Param_3, __Param_4, __Param_5, __Param_6, __Param_7, __Param_8, __Param_9) \
	typedef  __Type (WINAPI* pfn_##__Name)(__Param_1, __Param_2, __Param_3, __Param_4, __Param_5, __Param_6, __Param_7, __Param_8, __Param_9); \
private: \
	xObfuscationObfuscatedAddress<pfn_##__Name> m_pfn##__Name; \
	static bool Is##__Name(const bool set = false) \
	{ \
		static bool s_Is##__Name(false); \
		if (set) \
		{ \
			s_Is##__Name = true; \
		} \
		return s_Is##__Name; \
	} \
public: \
	__Type __Name(__Param_1 p1, __Param_2 p2, __Param_3 p3, __Param_4 p4, __Param_5 p5, __Param_6 p6, __Param_7 p7, __Param_8 p8, __Param_9 p9) \
	{ \
		if (GetModule()) \
		{ \
			if (!Is##__Name()) \
			{ \
				m_pfn##__Name = X_OBFUSCATED_ADDRESS((pfn_##__Name) GetFunction(X_OBFUSCATED_STRING_A(#__Name))); \
				Is##__Name(true); \
			} \
			if (m_pfn##__Name.Callee()) \
			{ \
				return m_pfn##__Name.Callee()(p1, p2, p3, p4, p5, p6, p7, p8, p9); \
			} \
			else \
			{ \
				return (__Type) NULL; \
			} \
		} \
		else \
		{ \
			return (__Type) NULL; \
		} \
	} 

#define X_MEMORY_MODULE_FUNCTION_10(__Type, __Name, __Param_1, __Param_2, __Param_3, __Param_4, __Param_5, __Param_6, __Param_7, __Param_8, __Param_9, __Param_10) \
	typedef  __Type (WINAPI* pfn_##__Name)(__Param_1, __Param_2, __Param_3, __Param_4, __Param_5, __Param_6, __Param_7, __Param_8, __Param_9, __Param_10); \
private: \
	xObfuscationObfuscatedAddress<pfn_##__Name> m_pfn##__Name; \
	static bool Is##__Name(const bool set = false) \
	{ \
		static bool s_Is##__Name(false); \
		if (set) \
		{ \
			s_Is##__Name = true; \
		} \
		return s_Is##__Name; \
	} \
public: \
	__Type __Name(__Param_1 p1, __Param_2 p2, __Param_3 p3, __Param_4 p4, __Param_5 p5, __Param_6 p6, __Param_7 p7, __Param_8 p8, __Param_9 p9, __Param_10 p10) \
	{ \
		if (GetModule()) \
		{ \
			if (!Is##__Name()) \
			{ \
				m_pfn##__Name = X_OBFUSCATED_ADDRESS((pfn_##__Name) GetFunction(X_OBFUSCATED_STRING_A(#__Name))); \
				Is##__Name(true); \
			} \
			if (m_pfn##__Name.Callee()) \
			{ \
				return m_pfn##__Name.Callee()(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); \
			} \
			else \
			{ \
				return (__Type) NULL; \
			} \
		} \
		else \
		{ \
			return (__Type) NULL; \
		} \
	} 

#define X_MEMORY_MODULE_FUNCTION_11(__Type, __Name, __Param_1, __Param_2, __Param_3, __Param_4, __Param_5, __Param_6, __Param_7, __Param_8, __Param_9, __Param_10, __Param11) \
	typedef  __Type (WINAPI* pfn_##__Name)(__Param_1, __Param_2, __Param_3, __Param_4, __Param_5, __Param_6, __Param_7, __Param_8, __Param_9, __Param_10, __Param11); \
private: \
	xObfuscationObfuscatedAddress<pfn_##__Name> m_pfn##__Name; \
	static bool Is##__Name(const bool set = false) \
	{ \
		static bool s_Is##__Name(false); \
		if (set) \
		{ \
			s_Is##__Name = true; \
		} \
		return s_Is##__Name; \
	} \
public: \
	__Type __Name(__Param_1 p1, __Param_2 p2, __Param_3 p3, __Param_4 p4, __Param_5 p5, __Param_6 p6, __Param_7 p7, __Param_8 p8, __Param_9 p9, __Param_10 p10, __Param11 p11) \
	{ \
		if (GetModule()) \
		{ \
			if (!Is##__Name()) \
			{ \
				m_pfn##__Name = X_OBFUSCATED_ADDRESS((pfn_##__Name) GetFunction(X_OBFUSCATED_STRING_A(#__Name))); \
				Is##__Name(true); \
			} \
			if (m_pfn##__Name.Callee()) \
			{ \
				return m_pfn##__Name.Callee()(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); \
			} \
			else \
			{ \
				return (__Type) NULL; \
			} \
		} \
		else \
		{ \
			return (__Type) NULL; \
		} \
	} 

#define X_MEMORY_MODULE_FUNCTION_12(__Type, __Name, __Param_1, __Param_2, __Param_3, __Param_4, __Param_5, __Param_6, __Param_7, __Param_8, __Param_9, __Param_10, __Param11, __Param12) \
	typedef  __Type (WINAPI* pfn_##__Name)(__Param_1, __Param_2, __Param_3, __Param_4, __Param_5, __Param_6, __Param_7, __Param_8, __Param_9, __Param_10, __Param11, __Param12); \
private: \
	xObfuscationObfuscatedAddress<pfn_##__Name> m_pfn##__Name; \
	static bool Is##__Name(const bool set = false) \
	{ \
		static bool s_Is##__Name(false); \
		if (set) \
		{ \
			s_Is##__Name = true; \
		} \
		return s_Is##__Name; \
	} \
public: \
	__Type __Name(__Param_1 p1, __Param_2 p2, __Param_3 p3, __Param_4 p4, __Param_5 p5, __Param_6 p6, __Param_7 p7, __Param_8 p8, __Param_9 p9, __Param_10 p10, __Param11 p11, __Param12 p12) \
	{ \
		if (GetModule()) \
		{ \
			if (!Is##__Name()) \
			{ \
				m_pfn##__Name = X_OBFUSCATED_ADDRESS((pfn_##__Name) GetFunction(X_OBFUSCATED_STRING_A(#__Name))); \
				Is##__Name(true); \
			} \
			if (m_pfn##__Name.Callee()) \
			{ \
				return m_pfn##__Name.Callee()(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); \
			} \
			else \
			{ \
				return (__Type) NULL; \
			} \
		} \
		else \
		{ \
			return (__Type) NULL; \
		} \
	} 



typedef void* HMEMORYMODULE;

typedef void* HCUSTOMMODULE;



class xMemoryModule
{
public:
	xMemoryModule();

	xMemoryModule(const void* buffer, const size_t size);

	xMemoryModule(HMEMORYMODULE module);

	~xMemoryModule();

	bool Load(const void* buffer, const size_t size);

	void Free();

	HMEMORYMODULE GetModule();

	void* GetFunction(const char* name);

private:
	HMEMORYMODULE m_module;
};



LPVOID xMemoryModuleDefaultAlloc(LPVOID, SIZE_T, DWORD, DWORD, void*);

BOOL xMemoryModuleDefaultFree(LPVOID, SIZE_T, DWORD, void*);

FARPROC xMemoryModuleDefaultGetProcAddress(HCUSTOMMODULE, LPCSTR, void*);



#define X_MEMORY_MODULE_BEGIN(__Class) \
	class __Class : public xMemoryModule \
	{ \
	public:	\
		__Class() : xMemoryModule() {}

#define X_MEMORY_MODULE_END(__Class) \
	}; \
	static __Class& Get##__Class() \
	{ \
		static __Class s_##__Class; \
		return s_##__Class; \
	}
