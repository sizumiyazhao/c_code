#include<stdio.h>
#include<stdlib.h>

struct test_driver
{
	int a;
	void *pri_data;
	int (*fun)(void *data);
};

struct private_data
{
	int io_num;
	char name[20];
};

struct private_data test_data=
{
	10,
	"IO_B"

};

int fun_pri(void *data)
{
	struct private_data *tmp=data;
	printf("a is %d,name is %s\n",tmp->io_num,tmp->name);
	return 1;
}

struct test_driver driver1
=
{
	11,
	&test_data,
	fun_pri
};

struct test_driver driver2
=
{
	11,
	&test_data,
	fun_pri
};
int main()
{
	printf("test\n");
	driver1.fun(driver1.pri_data);
    system("pause");
}
