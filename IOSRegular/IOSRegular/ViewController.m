//
//  ViewController.m
//  IOSRegular
//
//  Created by 武昌 on 2018/5/3.
//  Copyright © 2018年 武昌. All rights reserved.
//

#import "ViewController.h"
#import "WURegular.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSString *Email = @"9078829372@qq.com";
    if ([WURegular checkEmail:Email]) {
        NSLog(@"邮箱格式正确");
    }else{
        NSLog(@"邮箱格式不正确");
    }
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
