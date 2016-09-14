//
//  7_32.h
//  ch07
//
//  Created by ShenTensen on 16/7/30.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#ifndef __32_h
#define __32_h

#include <string>
#include <vector>

class Screen;

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
    Window_mgr();
    
//private:
    std::vector<Screen> screens;
    //std::vector<Screen> screens{Screen(24, 80, ' ')};    // 此路不通。难道就不能有初始值了吗？！
};

class Screen {
    friend void Window_mgr::clear(ScreenIndex);
public:
    typedef std::string::size_type pos;     // 类型成员
    
    // 构造函数
    Screen() = default;
    Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') { }
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { }
    
    const Screen display(std::ostream &os) const
    { do_display(os); return *this; }
    Screen display(std::ostream &os)
    { do_display(os); return *this; }
    
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    
    void do_display(std::ostream &os) const { os << contents; }
};

// 类 window_mgr 的构造函数，因为无法使用类内初始值！
Window_mgr::Window_mgr()
{
    screens.push_back(Screen(24, 80, ' '));
}

//
void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}


#endif /* __32_h */
