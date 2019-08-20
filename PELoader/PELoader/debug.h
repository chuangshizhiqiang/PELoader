#pragma once

//ע����Ҫ��formatǰ��ӿո� C++11�������Ե��µ�
#define __CSZQDEBUG 1
#if __CSZQDEBUG > 0
#define DBGPRINT(format, ...)   printf("[DEBUG]%s:%d :" format  , __func__, __LINE__, ##__VA_ARGS__);
#define PRINTDBG printf("[DEBUG]%s:%d\r\n", __FUNCTION__, __LINE__);
#else
#define DBGPRINT(format, ...)
#define PRINTDBG
#endif