### Build
    Build是将源代码转换为可执行文件的过程，在C/C++中，Build过程大体上分为三步：

    1.预处理（Preprocessing）
    2.编译（Compiling）
    3.链接（Linking）

### 预处理
    cpp文件首先预处理变为translation unit，translation unit仍然是文本代码文件，它是传入编译器的基本单元，把cpp和h整合到了一起，并且去掉不必要的空格 / 换行之类的。
### 编译
    translation unit传入编译器（compiler）之后会被编译成obj文件（二进制）。
    即：高级语言->汇编语言->机器语言（二进制）
    一般而言，生成的都是obj，但如果你想写一个第三方库文件，那么编译器会对应的生成lib（静态链接库）或者dll（动态链接库）文件。

    每一个cpp生成一个translation unit，然后编译生成一个obj，所以cpp与obj是一一对应的，每一个cpp都会独立编译出来一个obj文件。
