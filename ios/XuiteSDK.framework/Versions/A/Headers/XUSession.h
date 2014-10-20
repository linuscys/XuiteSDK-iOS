//
//  XUSession.h
//  XuiteSDK
//
//  Created by Chen Yang-Shen on 2014/4/21.
//  Copyright (c) 2014年 CHT Xuite. All rights reserved.
//

#import <Foundation/Foundation.h>

@class XUSession;
@class XUAuth;

typedef enum {
    XUSessionStateGuest,
    XUSessionStateNeedRefreshToken,
    XUSessionStateReloginFail,
    XUSessionStateOk
} XUSessionState;


@protocol XUSessionDelegate <NSObject>
@optional
- (void)loginSuccess:(XUSession *)session;
- (void)loginFail:(XUSession *)session message:(NSString *)message;
- (void)reloginFail:(XUSession *)session message:(NSString *)message WithUserId:(NSString *)userId AndPassword:(NSString *)password;
- (void)logoutSuccess:(XUSession *)session;
@end

@interface XUSession : NSObject
- (instancetype)initWithApiKey:(NSString *)apiKey secretKey:(NSString *)secretKey;
+ (XUSession*)sharedSession;
+ (void)setSharedSession:(XUSession *)session;
- (void) startLoginWithUserId: (NSString *)userId andPassword: (NSString *)password;
- (void)startRelogin;
- (void) logout;
- (NSString *)getAccessToken;
- (NSString *)getApiKey;
- (NSString *)getSecretKey;
- (NSString *)getSN;
- (NSString *)getAccount;
- (NSString *)getNickname;

@property (nonatomic, assign) XUSessionState sessionState;

- (void)addDelegate:(id<XUSessionDelegate>)delegate;
- (void)removeDelegate:(id<XUSessionDelegate>)delegate;
@end

