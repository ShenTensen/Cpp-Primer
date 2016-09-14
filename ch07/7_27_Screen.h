//
//  7_27_Screen.h
//  ch07
//
//  Created by ShenTensen on 16/7/29.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#ifndef __27_Screen_h
#define __27_Screen_h

#include <iostream>
#include <string>

class Screen {
public:
    typedef std::string::size_type pos;     // 类型成员
    
    // 构造函数
    Screen() = default;
    Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') { }
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { }
    
    // 成员函数
    char get() const { return contents[cursor]; }   // 类内定义，隐式内联函数
    inline char get(pos r, pos c) const;          // inline 关键字，显式内联
    Screen &move(pos r, pos c);               // 能在之后设为内联
    Screen &set(char c);
    Screen &set(pos, pos, char);
    
    const Screen &display(std::ostream &os) const
    { do_display(os); return *this; }
    Screen &display(std::ostream &os)
                        { do_display(os); return *this; }
    
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    
    void do_display(std::ostream &os) const { os << contents; }
};

inline char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

inline Screen &Screen::move(pos r, pos c)   // 在函数定义时设为内联
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
    contents[r * width + col] = ch;
    return *this;
}







#endif /* __27_Screen_h */
