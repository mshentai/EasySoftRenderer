#pragma once
class Sampler2D
{
	typedef unsigned char BYTE;
	//Member Variable
private:
	int m_Width;
	int m_Height;
	const char* m_BmpName;
	BYTE* m_BufferPtr;

	//Member Function
public:
	Sampler2D(const char* bmpName) : m_Width(0), m_Height(0), m_BmpName(bmpName), m_BufferPtr(nullptr){}
	void Init();
	const BYTE* GetData() const;
	const BYTE* GetData();
	int GetWidth() const;
	int GetHeight() const;
	~Sampler2D();

private:
	Sampler2D() = delete;
	Sampler2D(const Sampler2D& other) = delete;

};

