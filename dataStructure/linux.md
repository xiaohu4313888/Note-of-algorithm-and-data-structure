## linuxfind命令
    find命令的一般形式：
    find pathname -options [-print -exec -ok ...]

### 常用find命令举例
    find $home -print
    find / -type f -size 0 -exec ls -I{}
### 结合find进行删除操作
    find .-name "admin.log[0-9][0-9][0-9]" -atime -7 -ok 
### 查询过去24小时修改的文件
    find /directory_path -mtime -1 -ls
