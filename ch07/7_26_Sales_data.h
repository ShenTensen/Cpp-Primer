//
//  7_26_Sales_data.h
//  ch07
//
//  Created by ShenTensen on 16/7/29.
//  Copyright © 2016年 ShenTensen. All rights reserved.
//

#ifndef __26_Sales_data_h
#define __26_Sales_data_h



class Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
public:
    inline double avg_price() const;
    
}

inline double Sales_data::avg_price() const
{
    return units_sold ? revenue / units_sold : 0;
}

#endif /* __26_Sales_data_h */
