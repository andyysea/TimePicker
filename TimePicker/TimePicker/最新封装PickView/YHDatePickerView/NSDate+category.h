//
//  NSDate+category.h
//  TimePicker
//
//  Created by junde on 2017/3/22.
//  Copyright © 2017年 YYH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (category)

/** 给定的时间字符串和日期格式返回日期 */
+ (NSDate *)date:(NSString *)datestr withFormat:(NSString *)format;


@end
