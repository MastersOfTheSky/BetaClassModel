#ifndef DYN_STRING
#define DYN_STRING

#include <string>
#include <assert.h>

class DynString
{
public:

	DynString();
	DynString(const char* text);
	DynString(const DynString &other);
	DynString& operator = (const DynString &other);
	char& operator [] (size_t index) const;
	void PushBack(char element);
	char PopBack();
	size_t GetMaxCapacity();
	size_t Size();
	DynString operator + (const DynString &other);
	void operator += (const DynString &other);
	operator const char*();
	DynString Substring(size_t startIndex, size_t length);
	DynString Substring(size_t length);
	~DynString();

private:

	size_t CalcMinCapacity(size_t strLength);
	void CopyInfo(const DynString& other);
	void ClearMemory();

	const short int minCapacity = 64;
	char *str;
	size_t maxCapacity;
	size_t currentLength;
};

#endif // !DYN_STRING

