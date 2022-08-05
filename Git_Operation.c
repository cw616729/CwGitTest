
查看Git版本, 确定当前电脑是否安装Git
git version

设置用户名和邮箱
git config --global user.name "yourname"
git config --global user.email "1509832650@qq.com"

在当前目录初始化生成一个空的Git仓库, 表现为生成一个名为.git的隐藏文件夹
git init

添加文件到暂存区
git add

提交文件到本地版本库
git commit -m "添加关于提交的说明信息"

查看提交记录
git log

硬回退, 注意此操作c, 会将比目标硬回退版本号更新的版本, 全部删除. 所以需要谨慎使用.
git reset --hard 提交Id

创建分支
git branch 分支名

切换分支
git checkout 分支名

在分支A上, 把分支B合并到分支A上
git merge 被合并分支名