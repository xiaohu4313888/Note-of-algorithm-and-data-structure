# Github 基本操作
# 面向分支进行开发
    在做任何更改之前，我们需要从主仓库的master分支切出一个新的分支，比如bug-fix。然后在本地，我们全程基于bug-fix分支进行开发。开发结束之后，把bug-fix分支push到自己fork出来的仓库中（自己的仓库自己才有权限push），最后在github上面提PR将这个分支合入主仓库的master上。

## 常用操作
    git remote add upstream
    git fetch upstream
    git checkout upstream/master -b new-feature
    .........some change
    git add {changed files}
    git commit -sm"Add some new feature"
    git push origin new-feature
## 如何避免拉取时候本地修改被源代码处修改覆盖
    一种是将本地的改变 stash，然后fetch，merge，stash pop：
    git stash
    git fetch upstream
    git merge upstream/master
    git stash pop
    如果 pop时有冲突，解决冲突即可
    另一种是将本地的改变提交：
    git add {changd files}
    git commit -sm"some changes"
    git fetch upstream
    git merge upstream/master
    如果merge的时候有冲突，解决冲突即可