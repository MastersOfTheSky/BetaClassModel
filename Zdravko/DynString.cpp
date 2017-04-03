#include "DynString.h"

DynString::DynString()
{
	str = new char[minCapacity];
	str[0] = '\0';

	currentLength = 0;
	maxCapacity = minCapacity - 1;
}

DynString::DynString(const char * text)
{
	size_t len = strlen(text);
	size_t cap = CalcMinCapacity(len);
	str = new char[cap];

	strcpy_s(str, cap - 1, text);
	maxCapacity = cap;
	currentLength = len;
}

DynString::DynString(const DynString & other)
{
	CopyInfo(other);
}

DynString & DynString::operator=(const DynString & other)
{
	if (this != &other)
	{
		ClearMemory();
		CopyInfo(other);
	}

	return *this;
}

char & DynString::operator[](size_t index) const
{
	assert(index >= 0 && index < currentLength);

	return str[index];
}

void DynString::PushBack(char element)
{
	if (currentLength == maxCapacity - 1)
	{
		maxCapacity *= 2;
		char *strCopy = new char[maxCapacity];
		strcpy_s(strCopy, maxCapacity - 1, str);
		
		ClearMemory();
		str = strCopy;
	}

	str[currentLength] = element;
	currentLength++;
	str[currentLength] = '\0';
}

char DynString::PopBack()
{
	char result = str[currentLength - 1];
	currentLength--;
	str[currentLength] = '\0';

	return result;
}

size_t DynString::GetMaxCapacity()
{
	return maxCapacity;
}

size_t DynString::Size()
{
	return currentLength;
}

DynString DynString::operator+(const DynString & other)
{
	DynString result = *this;
	result += other;

	return result;
}

size_t DynString::CalcMinCapacity(size_t strLength)
{
	size_t base = 2;

	while (base <= strLength)
	{
		base *= 2;
	}

	if (base < minCapacity)
	{
		base = minCapacity;
	}

	return base;
}

void DynString::CopyInfo(const DynString & other)
{
	str = new char[other.maxCapacity];

	currentLength = other.currentLength;
	maxCapacity = other.maxCapacity;

	strcpy_s(str, maxCapacity - 1, other.str);
}

void DynString::ClearMemory()
{
	delete[] str;
}

void DynString::operator+=(const DynString & other)
{
	for (int ind = 0; ind < other.currentLength; ind++)
	{
		this->PushBack(other.str[ind]);
	}
}

DynString::operator const char*()
{
	return str;
}

DynString DynString::Substring(size_t startIndex, size_t length)
{
	DynString result;
	int end = startIndex + length;
	if (end > currentLength)
	{
		end = currentLength;
	}

	for (int ind = startIndex; ind < end; ind++)
	{
		result.PushBack(str[ind]);
	}

	return result;
}

DynString DynString::Substring(size_t length)
{
	return Substring(0, length);
}

DynString::~DynString()
{
	ClearMemory();
}
