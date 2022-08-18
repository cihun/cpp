# Makefile笔记

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

    