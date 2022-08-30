# Makefile笔记

## 杂项

makefile具有隐含规则,所以gcc或者g++等编译命令不需要写出来.

vpath可以添加指定的目录,VPATH可以让make运行的时候查看指定目录.

g++和gcc如果编译完成后需要调试,那应该在编译时加上-g的选项.后果是编译的结果会比不调试的结果大.

## 函数

Makefile函数的使用如下所示：

    $(<function> <arguments>)

    or

    ${<function> <arguments>}

## 字符串处理函数

    $(subst <from>,<to>,<text>)

- 名称：字符串替换函数--subst。
- 功能：把子串<text>中的<from>字符串替换成<to>。
- 返回：函数返回被替换过后的字符串。

    $(patsubst <pattern>,<replacement>,<text>)

和上个类似，不过可以使用通配符'%'。

    $(var:<pattern>=<replacement>)

和上个效果一样，不过吧`<text>`的位置变成了var

    $(strip <string>)

去掉多余空格

    $(findstring <find>,<in>)

查找。

    $(filter <pattern...>,<text>)

反向过滤函数，将`<text>`中符合`<pattern>`模式的单词去除。

    $(sort <list>)

排序

    $(word <n>,<text>)

取出第n个单词。

    $(wordlist <s>,<e>,<text>)

取单词串函数，从`<text>`中取从`<s>`开始到`<e>`的单词串。`<s>`和`<e>`是数字。

    $(words <text>)

统计单词数量

    $(firstword <text>)

取首单词。

    $(dir <names...>)

取目录名称。

    $(notdir <names...>)

取文件函数。

    $(suffix <names...>)

取后缀函数。

    $(basename <names...>)

取前缀函数。

    $(addsuffix <suffix>,<names...>)

加后缀函数，把`<suffix>`加到`<names>`中每个单词的后面。

    $(addprefix <prefix>,<names...>)

加前缀函数，把`<prefix>`加到`<names>`中每个单词的后面。

    $(join <list1>;<list2>)

连接函数，例如`$(join aaa bbb; c c c c c c)`是`aaac bbbc c c c c`

## foreach函数

foreach函数是用来做循环用的。

    $(foreach <var>,<list>,<text>)

该函数的意义是，把参数`<list>`中的单词逐一取出来然后放入参数`<var>`,再执行`<text>`里面所含的表达式。
其中，`<var>`只是一个局部变量，在该条命令结束之后将不再存在。

## if函数

if函数顾名思义就是做判断的。

    $(if <condition>,<then-part>,<else-part>)

其中，`<else-part>`可以省略。

## call函数

call函数是唯一一个可以用来创建名新的参数化的函数。

    $(call <expression>,<parm1>,<parm2>,<parm3>...)

当make执行该函数的时候，`<expression>`参数中的变量，例如`$(1),$(2)...`等，会被后面的参数取代。

## origin函数

origin函数不操作变量的值，只是告诉该变量是从哪里来。

    $(origin <variable>) 

此处的`<variable>`仅仅只是变量的名称，而不是引用变量。

## shell函数

该函数的作用和\`是相同的功能。
shell函数把执行操作系统命令后输出作为函数返回。

    contents := $(shell cat foo)
    files := $(shell echo *.c)

注意：该函数将生成一个新的shell程序来执行命令，所以要注意运行性能。

## 控制make的函数

make提供了一些函数来控制make的运行。

    $(error <text ...>)

产生一个致命的错误，`<text...>`是错误信息。（抛出异常)

    $(warning <text ...>)

这个函数不会让make停止，只是输出一段警告。

## vpath

制定make在某个文件夹寻找指定的文件，例如

    vpath %.cpp <path>

## make的运行

make命令执行后有三个退出码：
- 0代表成功执行。
- 1如果make运行产生任何错误，返回1。
- 如果使用了make的"q"选项，并且make使得一些目标不需要更新，返回2。

## 指定Makefile

    make -f <Makefile>

## 指定目标

一般来说，make的最终目标是makefile中的第一个目标，而其他目标一般都是由这个目标连带出来的。这是make的默认行为。

make使用`.PHONY`来指定伪目标。常用的伪目标如下：
    "all"               编译所有目标
    "clean"             删除所有编译好的文件
    "install"           安装已编译的文件
    "print"             列出改变过的源文件
    "tar"               将源程序打包
    "dist"              创建一个压缩文件
    "TAGS"              更新所有目标，以备完整地编译使用
    "check"和"test"     测试

## 检查规则

    -n
    --just-print
    --dry-run
    --recon

不执行参数，这些参数只是打印命令，不管目标是否更新，把规则和连带规则下的命令打印出来，但是不执行。

    -t
    --touch

把目标文件的时间更新，但是不更新目标文件。假装编译。

    