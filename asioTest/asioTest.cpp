//--------------------- 
//���ߣ�qq_29846883 
//��Դ��CSDN 
//ԭ�ģ�https://blog.csdn.net/qq_29846883/article/details/71515435 
//��Ȩ����������Ϊ����ԭ�����£�ת���븽�ϲ������ӣ�

#include "stdafx.h"
#include "asio.hpp"
#include <iostream>
using namespace std;
using namespace asio;
using asio::ip::tcp;
#include<functional>

class myasio
{
public:
	myasio()
		:m_acc(m_iosvr, tcp::endpoint(tcp::v4(), 1986))
	{

	}
	~myasio()
	{

	}

public:
	int start()
	{
		return 0;
	}
protected:
private:
	io_service		m_iosvr;
	tcp::acceptor		m_acc;
};


int main()
{
	myasio asio;
	asio.start();

	return 0;
}

