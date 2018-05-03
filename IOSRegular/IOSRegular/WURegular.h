//
//  WURegular.h
//  IOSRegular
//
//  Created by 武昌 on 2018/5/3.
//  Copyright © 2018年 武昌. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WURegular : NSObject

//邮箱
+ (BOOL) checkEmail:(NSString *)email;
//手机号码验证
+ (BOOL) checkMobile:(NSString *)mobile;
//车牌号验证
+ (BOOL) checkCarNo:(NSString *)carNo;
//车型
+ (BOOL) checkCarType:(NSString *)CarType;
//用户名
+ (BOOL) checkUserName:(NSString *)name;
//密码
+ (BOOL) checkPassword:(NSString *)passWord;
//昵称
+ (BOOL) checkNickname:(NSString *)nickname;
//身份证号
+ (BOOL) checkIdentityCard: (NSString *)identityCard;

@end
