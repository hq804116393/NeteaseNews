//
//  MySubscribeTableView.h
//  NeteasyNews
//
//  Created by 004 on 15/6/9.
//  Copyright (c) 2015年 新果. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MySubscribeTableView : UITableView
@property (nonatomic, strong) UIViewController *rootViewController;

- (instancetype)initWithFrame:(CGRect)frame RootViewControler:(UIViewController *)rootiewController;
@end
