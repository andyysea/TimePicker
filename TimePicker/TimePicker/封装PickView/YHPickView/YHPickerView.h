//
//  YHPickerView.h
//  TimePicker
//
//  Created by 杨应海 on 2016/11/27.
//  Copyright © 2016年 YYH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YHPickerView : UIView



/**
 通过plistName添加一个pickerView

 @param array               需要显示的数据
 @param isHaveNavController 是否在NavController之内

 @return 带有toolbar的pickerView
 */
- (instancetype)initPickerViewWithArray:(NSArray *)array isHaveNavController:(BOOL)isHaveNavController;


/**
 通过时间创建一个DatePicker
 
 @param defaulDate         默认选中时间
 @param datePickerMode     呈现模式
 @param isHaveNavControler 是否在NavControler之内
 
 @return 带有toolbar的datePicker
 */
- (instancetype)initDatePickerWithDate:(NSDate *)defaulDate datePickerMode:(UIDatePickerMode)datePickerMode isHaveNavControler:(BOOL)isHaveNavControler;


/**
 显示本自定义的控件
 */
- (void)show;


/**
 移除自定义的控件
 */
- (void)remove;


@end
