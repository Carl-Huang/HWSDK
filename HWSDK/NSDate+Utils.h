//
//  NSDate+Utils.h
//  SafeCampus
//
//  Created by Carl on 13-11-6.
//  Copyright (c) 2013年 carl. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Utils)
#pragma mark - Class Methods
/*
 * @desc 根据传入的时间字符串(格式:yyyy-MM-dd)
 *       获得对应的日期
 * @param NSString dateString 时间字符串(yyyy-MM-dd)
 * @return NSDate 返回对应的日期
 */
+ (NSDate *)dateFromString:(NSString *)dateString;
/*
 * @desc 根据传入的时间字符串和时间格式
 *       获得对应的日期
 * @param NSString dateString 时间字符串
 * @param NSString format 时间格式
 * @return NSDate 返回对应的日期
 */
+ (NSDate *)dateFromString:(NSString *)dateString withFormat:(NSString *)format;
#pragma mark - Instance Methods
/*
 * @desc 获取当前日期的星期数
 * @return NSString 星期数(Sample:星期一)
 */
- (NSString *)weekDayForCurrentDate;
/*
 * @desc 根据传入的日期格式取得当前日期对应的日期字符串
 * @param NSString format 日期格式
 * @return NSString 星期数(Sample:星期一)
 */
- (NSString *)formatDateString:(NSString *)format;


@end
