//--------------------- 
//作者：qq_29846883 
//来源：CSDN 
//原文：https://blog.csdn.net/qq_29846883/article/details/71515435 
//版权声明：本文为博主原创文章，转载请附上博文链接！

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

