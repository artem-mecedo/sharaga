#pragma once
typedef char dataa;
жопа
struct SDeq
{
private:
	unsigned int const Max_size;
	dataa* deq; 
	short int left, right; 
	unsigned int size;
public:
	SDeq(unsigned int);
	SDeq(const SDeq&);
	void Clear();
	int Size();
	bool Empty();
	bool Full();
	dataa Pop_Left();
	dataa Pop_Right();
	void Push_Left(dataa);
	void Push_Right(dataa);
	void List();
	
	~SDeq() {};
};
