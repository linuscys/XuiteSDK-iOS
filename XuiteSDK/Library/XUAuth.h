//
//  XUAuth.h
//  XuiteSDK
//
//  Created by Chen Yang-Shen on 2014/4/21.
//  Copyright (c) 2014年 CHT Xuite. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const kXUAuthApiKey;
extern NSString * const kXUAuthSecretKey;

@interface XUAuth : NSObject <NSCoding>

@property (nonatomic, strong) NSString *apiKey;
@property (nonatomic, strong) NSString *secretKey;
@property (nonatomic, strong) NSString *accessToken;
@property (nonatomic, strong) NSString *code;
@property (nonatomic, strong) NSString *expiredIn;

+ (instancetype)sharedAuth;
- (void) save;
- (void) saveWithDictionary:(NSDictionary *)data;
- (void) reset;
- (BOOL) isAccessTokenValid;
@end
