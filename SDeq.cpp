#include "SDeq.h"
#include <iostream>
#include <iomanip>

using namespace std;

/*SDeq::~SDeq()
{
	delete deq[];
}*/

SDeq::SDeq(unsigned int n):Max_size(n+2)
{
	deq = new dataa[Max_size];
	left = 0; right = 1;
	size = 0;
}


/*SDeq::SDeq(const SDeq& st):Max_size(st.Max_size)
{
	queue = new dataa[Max_size];
	top = st.top;
	for (int i = 0; i <= top; i++)
		queue[i] = st.queue[i];
	bottom = st.bottom;
	for (int j = 0; j <= bottom; j++)
		queue[j] = st.queue[j];
}*/


void SDeq::Clear()
{
	left = 0; right = 1;
	size = 0;
}

int SDeq::Size()
{
	return size;
}

bool SDeq::Empty()
{
	return size==0 ? true : false;
}

bool SDeq::Full()
{
	return size==Max_size-2 ? true : false;
}

void SDeq::Push_Left(dataa c)
{
	if (!Full())
	{
		deq[left] = c;
		size++;
		if (left != 0)
			left--;
		else
			left = Max_size - 1;
	}
	else
		cout << "Deq is full" << endl;
}

void SDeq::Push_Right(dataa c)
{
	if (!Full())
	{
		deq[right] = c;
		size++;
		right = (right + 1) % Max_size;
	}
	else
		cout << "Deq is full" << endl;
}

dataa SDeq::Pop_Left()
{
	if (!Empty())
	{
		left = (left + 1) % Max_size;
		size--;
		return deq[left];
	}
}

dataa SDeq::Pop_Right()
{
	if (!Empty())
	{
		if (right != 0)
			right--;
		else
			right = Max_size - 1;
		size--;
		return deq[right];
	}
}


void SDeq::List()
{
	int i = (left+1)%Max_size;
	if (!Empty())
	{
		cout << "Данні дека:" << endl;
		while (i != right)
		{
			printf("%3c", deq[i]);
			i = (i + 1) % Max_size;
		}
		cout << endl;
	}
	else
		cout << "Дек порожній" << endl;
}


