#pragma once

#include <mysql.h>
#include <vector>
#include "Datarow.h"

using namespace std;

#define DB_HOST "127.0.0.1"	// ���� ������
#define DB_USER "root"	// DB ���Ӱ���
#define DB_PASS "1234"	// DB ������ȣ
#define DB_NAME "bookdb"	// DB �̸�

class CMysqlController
{
public:
	CMysqlController();
	~CMysqlController();
	bool SelectQuery(char* sql, vector<Datarow*>& row);
	bool InsertQuery(char* sql);
};

