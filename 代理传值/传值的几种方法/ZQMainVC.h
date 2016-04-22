//
//  ZQMainVC.h
//  传值的几种方法
//
//  Created by lin zhi qing on 16/3/28.
//  Copyright © 2016年 linzhiqing. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ViewController.h"

@interface ZQMainVC : UIViewController<ViewControllerDelegate>
@property(nonatomic,strong)NSString *userName;

@property(nonatomic,strong)NSString *passWord;

-(id)initWithUserName:(NSString *)userName WithPassWord:(NSString *)passWord ;
@end
