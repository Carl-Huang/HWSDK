//
//  UIViewController+BarItem.h
//  HWSDK
//
//  Created by Carl_Huang on 13-11-19.
//  Copyright (c) 2013年 HelloWorld. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (BarItem)
#pragma mark - Instance Methods
- (void)setLeftCustomBarItem:(NSString *)imageName action:(SEL)selector;
- (void)setRightCustomBarItem:(NSString *)imageName action:(SEL)selector;
- (UIBarButtonItem *)customBarItem:(NSString *)imageName action:(SEL)selector;
- (UIBarButtonItem *)customBarItem:(NSString *)imageName action:(SEL)selector size:(CGSize)itemSize;
@end
