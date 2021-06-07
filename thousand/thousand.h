#ifndef _THOUSAND_H_
#define _THOUSAND_H_

#include <vector>
#include <string>

//字符串分割，按照指定字符将字符串分割为多个子串
//@parameter str 原字符串
//@parameter ch 进行分割的标记字符
std::vector<std::string> split(std::string str, char ch);

//删除字符串从开始位置的指定字符
//@parameter str 原字符串
//@parameter ch 要删除的字符
std::string lstrip(std::string str, char ch);

//删除字符串从末尾位置开始的指定字符
//@parameter str 原字符串
//@parameter ch 要删除的字符
std::string rstrip(std::string str, char ch);

//从开始位置，替换字符串中指定的内容
//@parameter str 要替换的字符串
//@parameter srce 被替换的内容
//@parameter dest 替换的内容
//@parameter limit 要替换的次数，默认为0，表示全部替换
std::string replace(std::string str, std::string srce, std::string dest, int limit = 0);

//判断文件是否存在
//@parameter path 文件路径
//存在返回true，不存在返回false
bool IfPathExists(std::string path);

#endif