# 记录

## 程序流程

首先程序通过运行时传递文件名称,然后打开指定文件的方式获取接口名称.

然后会初始化接口,在初始化接口时会检测接口是否存在并打开.

## memset

```c
memset(a, 0, sizeof(a));
```

将a设置为0.来自string.h

## fopen

```c
fp = fopen(argv[1], "r");
```

以读取的方式打开文件argv[1].来自stdio.h

## access

```c
access(argv[1], F_OK) == 0
```

可以判断文件是否存在.来自unistd.h

## int open(char *, int)

```c
int fd = open(Dev, O_RDWR);
```

O_RDWR是以读取和写入的方式打开文件.成功返回文件描述符,失败返回-1.来自fcntl.h

## tcgetattr

```c
tcgetattr(fd, &Opt);
```

tcgetattr函数用于获取与终端相关的参数。参数fd为终端的 文件描述符，返回的结果保存在termios 结构体中.termios.h

## tcflush

```c
int tcflush（int filedes，int quene）
```

该函数可以刷清（扔掉）输入缓存（终端驱动法度已接管到，但用户法度尚未读）或输出缓存（用户法度已经写，但尚未发送）.termios.h

## int cfsetospeed(struct termios *termptr, speed_t speed);

```c
int cfsetospeed(struct termios *termptr, speed_t speed);
```

设置波特率,speed是需要设置的输出波特率.返回值是-1或0.

## int cfsetispeed(struct termios *termptr, speed_t speed);

```c
int cfsetispeed(struct termios *termptr, speed_t speed);
```

设置波特率,speed是需要设置的输入波特率.返回值是-1或0.

## tcgetattr tcsetattr

前者获取终端参数,后者设置终端参数

```c
int tcgetattr(int fd, struct termios *termios_p);

int tcsetattr(int fd, int optional_actions, const struct termios *termios_p);
```

fd是使用open打开的文件的文件描述符,一个int类型

`termios`是一个结构体的对象,用来存储参数

`optional_actions`是一个选项:

- TCSANOW：  不等数据传输完毕就立即改变属性

- TCSADRAIN：等待所有数据传输结束才改变属性

- TCSAFLUSH：清空输入输出缓冲区才改变属性

## perror

```c
void perror(const char *s);
```

将s对应的字符串打印输出，后面跟着一个:和错误信息。（错误信息会从全局错误信息表里面寻找）

## bzero

```c
void bzero(void *s, int n);
```

使字符串或内存块前n个字节清零。string.h

## system

```c
int system(char *command);
```

来自stdilb.h.发送一条命令。

## WIFEXITED

检查system的返回值，判断子程序是否正常退出，如果正常退出会返回一个非零值。

## WEXITSTATUS

如果子程序正常退出，这个值是子程序的返回值。先通过上个命令检查程序是否正常退出，然后再使用这个宏获取子程序的返回值。

## strstr

寻找字串的位置

## 

```c
int select(int maxfdp,fd_set *readfds,fd_set *writefds,fd_set *errorfds,struct timeval*timeout);
```