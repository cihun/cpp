# git笔记

## git的三个区域

git分为三个区域：

- 工作区：就是在电脑里可以看到的目录。
- 暂存区：英文名称叫做stage或index.一般放在.git目录下的index文件中，所以我们把暂存区有时候也叫作索引。
- 版本库：工作区有一个隐藏目录.git, 这个不算工作区，而是git的版本库。

## Git创建仓库

    git init

该命令可以用来初始化一个git仓库。将当前目录作为git仓库，并生成一个.git的目录。

    git init newrepo

该命令创建一个newrepo的目录，然后将该目录作为仓库。

    git add <file>

添加一个<file>文件到版本控制中。

    git commit -m '<版本说明>' #Linux系统中使用单引号，Windows系统中使用双引号。

提交。-m选项后是版本说明。

    git clone <repo> <directory>

克隆仓库。reop是Git仓库，directory是本地目录。将reop克隆到directory中，directory可以省略。

## git配置

    git config

该命令是git的配置命令。

    git config --list

显示git的配置信息。

    git config -e 

编辑git的配置信息。只针对当前用户。

    git config -e --global

编辑git的配置信息。针对所有用户。

## git常用命令

    git status

显示当前仓库的状态，显示需要变更的文件。-s选项可以使其简短输出。

    git rm

删除文件，从暂存区和工作区都删除，加上--cache只在暂存区删除。

    git diff

比较文件的不同，即比较文件在缓存区和工作区的差异。
<https://www.runoob.com/git/git-diff.html>

    git reset

返回上一个版本，具体使用：<https://www.runoob.com/git/git-reset.html>

    git mv

移动或重命名文件。

### 提交日志

    git log

查看历史提交记录。

    git blame <file>

以列表的形式查看制定文件的修改记录。

## 分支管理

    git branch <branchname>

创建一个名为 branchname 的分支

    git checkout <branchname>

切换分支

    git merge 

合并分支

    git branch

该命令如果没有参数的时候，会列出在本地的分支。

    git checkout -b <branchname>

创建分支branchname并立即切换到该分支下工作。

### 删除分支

    git branch -d <branchname>

### 合并分支

    git merge <branchname>

之后可以使用之前的删除分支命令将该分支删除。

### 合并冲突

在合并分支时，会遇到冲突。

如果两个分支的相同文件无法自动合并，那么git会将文件冲突的位置标记出来，然后
我们手动打开文件修改后使用git add命令来告诉git冲突已解决。

## git 查看历史提交

    git log
    git blame

对于第一个命令，加上--oneline参数可以简化显示的结果。

加上 --graph可以显示历史中出现的分支与合并。

加上 --reverse可以逆向显示所有日志。

## git标签

    git tag -a <tag>

可以使用该命令给某个时刻的项目做一个标签，例如开发到某个阶段的时候（v1.0）。

加上-a可以写个注释。





# github

    ssh-keygen -t rsa -C "your_email@youremail.com"

生成一个密匙，然后再GitHub里面添加它。

    ssh -T git@github.com

测试是否成功。

    git config --global user.name "your name"
    git config --global user.email "your_email@youremail.com"

给git设置一个用户名和邮箱。

    git remote add origin git@github.com:yourName/yourRepo.git

在github获取到连接，然后更换后面的连接，将此连接添加到git中。

    git clone <url>

clone仓库，<url>不能是别名。

    git push origin master

推送。


    git config --global user.name "L-鲁璞亮"
    git config --global user.email "puliang.lu@fibocom.com"

    git config  user.name "L-鲁璞亮"
    git config  user.email "puliang.lu@fibocom.com"
。。。

    git grep
    git blame
    git diff

用来检索`grep`是用来查找指定关键字。

`blame`是用来查找代码行是来自哪一次提交。



    [GIT PRACTICE]
    This is a task.
    [Description]
    Find a file and modify it without affecting the content.
    [Root Cause]
    Git practice.
    [Solution]
    Line comments have been added to the /home/songjinjian/git_test/practice-sandbox/Readme.md file.
    [Influence]
    No effect.
    [Project]
    NA.

...

    git clean

加上-f选项可以删除工作区未保存的文件。

## git 合并策略

git有Fast-foward，Recursive，Ours，Octopus这些合并策略

### Fast-foward

Fast-forward是git在合并两个没有分叉的分支时的默认行为，如果你想禁用掉这种行为，明确拥有一次合并的commit记录，可以使用git merge --no-ff命令来禁用掉。

### Recursive

Recursive是git中最重要也是最常用的合并策略，简单概述为：通过算法寻找两个分支的最近公共祖先节点，再将找到的公共祖先节点作为base节点使用三向合并的策略来进行合并。

[GIT PRACTICE]
This is a task.
[Description]
Take a file and move it from ftmp-rickchen-simulate-l860pciot-20220815 to Master.
[Root Cause]
Git practice.
[Solution]
Find a file CusConverter.py in directory practice-sandbox\tools\cstools_rel\CellularCustomizationTool\scripts of ftmp-rickchen-simulate-l860pciot-20220815 and move it to lupuliang\ of master
[Influence]
No effect.
[Project]
NA.

git merge的功能，意义，流程
原理：通过算法三路合并实现，即如果遇到冲突文件，那么会对比需要合并的两个分支的文件和两个分支最近的共同节点的文件，然后再一行一行比较，如果git可以解决就自动解决，如果解决不了就会提示要求手动解决。

功能：git merge可以合并两个分支，同时解决代码之间的冲突。在遇到项目需要开发新功能时，如果周期很长那么可以创建一个新的分支开发新功能，在开发完成后可以使用merge合并代码。使得新功能开发过程中不影响整体的代码开发。

意义：使得同一个项目可以根据功能分成多个分支，然后在开发结束时可以合并在一起。

流程：假设有两个分支A和B，在A分支时执行命令git merge B，那么git会先找A和B最近的共同节点C，如果要是A分支当前节点就是C，那么会执行rebase。否则会比较A和C的差异，如果有差异的话则会通过三路合并合并到A分支上，如果差异无法自动处理就会要求手动处理。

merge