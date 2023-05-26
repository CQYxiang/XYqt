#include "widget.h"

//命名规范
//类名 首字符大写，单词和单词之间首字母大写
//函数名 变量名称 首字母小写，单词和单词之间首字母大写
/*
//快捷键
注释                   ctrl /
运行                   ctrl r
编译                   ctrl b
字体缩放                ctrl 鼠标滚轮
查找                   ctrl f
整行移动                ctrl shift 上箭头、下箭头
帮助文档                F1
自动对齐                ctrl i
同名之间的头文件与cpp     F4
*/

Widget::Widget(QWidget *parent)
    : QWidget(parent){
//    qDebug()<<"a";
}

Widget::~Widget(){

}

