//
//  XUUser.h
//  XuiteMusic
//
//  Created by Chen Yang-Shen on 2014/9/5.
//  Copyright (c) 2014年 CHT Xuite. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XUUser : NSObject <NSCoding>

@property (nonatomic, strong) NSString *nickname;
@property (nonatomic, strong) NSString *sn;
@property (nonatomic, strong) NSString *uid;
@property (nonatomic, strong) NSString *userType;

+ (instancetype)sharedUser;
- (void) save;
- (void) saveWithDictionary:(NSDictionary *)data;
- (void) reset;
- (BOOL)haveUserData;
- (BOOL) savePasswordToKeychain: (NSString *)password;
- (NSString *)passwordInKeyChain;
@end
