#include "thousand.h"

std::vector<std::string> split(std::string str, char ch)
{
    std::string sub_str = "";
    std::vector<std::string> result;
    result.reserve(str.length() / 2);
    for (auto s : str)
    {
        if (s == ch)
        {
            result.push_back(sub_str);
            sub_str = "";
        }
        else
        {
            sub_str += s;
        }
    }
    result.push_back(sub_str);
    return result;
}

std::string lstrip(std::string str, char ch)
{
    std::size_t index = 0;
    for (auto s : str)
    {
        if (s == ch)
        {
            ++index;
        }
        else
        {
            break;
        }
    }
    if (index >= str.length())
    {
        return "";
    }
    return str.substr(index);
}

std::string rstrip(std::string str, char ch)
{
    std::size_t index = str.length() - 1;
    while (index >= 0 && str[index] == ch)
    {
        --index;
    }
    if (index < 0)
    {
        return "";
    }
    return str.substr(0, index + 1);
}

std::string replace(std::string str, std::string srce, std::string dest, int limit)
{
    std::size_t content_len = srce.length();
    if (limit == 0)
    {
        while (1)
        {
            std::size_t index = str.find(srce);
            if (index == std::string::npos)
            {
                break;
            }
            else
            {
                str = str.replace(index, content_len, dest);
            }
        }
        return str;
    }
    while (limit > 0)
    {
        std::size_t index = str.find(srce);
        if (index == std::string::npos)
        {
            break;
        }
        else
        {
            str = str.replace(index, content_len, dest);
        }
        --limit;
    }
    return str;
}

bool IfPathExists(std::string path)
{
    std::FILE *file = fopen(path.c_str(), "r");
    if (file)
    {
        fclose(file);
        return true;
    }
    else
        return false;
}