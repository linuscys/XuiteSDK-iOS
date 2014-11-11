//
//  XUApiManager.h
//  XuiteMusic
//
//  Created by Chen Yang-Shen on 2014/4/28.
//  Copyright (c) 2014年 CHT Xuite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFHTTPSessionManager.h>

@interface XUApiManager : AFHTTPSessionManager

+ (instancetype)sharedManager;

- (void)getFolders:(NSString *)type
           success:(void (^)(NSDictionary *response, id responseObject))successBlock
           failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failureBlock;

- (void)getMetadataByFolder:(NSString *)path
                    andType:(NSString *)type
                    success:(void (^)(NSDictionary *response, id responseObject))successBlock
                    failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failureBlock;

- (void)getSingleMedia:(NSString *)key
               success:(void (^)(NSDictionary *response, id responseObject))successBlock
               failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failureBlock;
- (void)getVlogPlaylists:(NSString *)type
                 success:(void (^)(NSDictionary *response, id responseObject))successBlock
                 failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failureBlock;
- (void)getMyPlaylist:(NSString *)site
              success:(void (^)(NSDictionary *response, id responseObject))successBlock
              failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failureBlock;

- (void)getPlaylistItemByPlid:(NSString *)plid
                      success:(void (^)(NSDictionary *response, id responseObject))successBlock
                      failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failureBlock;
- (void)getMyFavoritePlaylists:(NSString *)site
                       success:(void (^)(NSDictionary *response, id responseObject))successBlock
                       failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failureBlock;
- (void)addPlaylist:(NSString *)title
          withItems:(NSArray *)items
            andSite:(NSString *)site
            success:(void (^)(NSDictionary *response, id responseObject))successBlock
            failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failureBlock;
- (void)delPlaylist:(NSString *)plid
            success:(void (^)(NSDictionary *response, id responseObject))successBlock
            failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failureBlock;
- (void)getVlog:(NSString *)vlog_id
        success:(void (^)(NSDictionary *response, id responseObject))successBlock
        failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failureBlock;
- (void)searchVlogs:(NSString *)keyword
              start:(NSUInteger)start
            success:(void (^)(NSDictionary *response, id responseObject))successBlock
            failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failureBlock;
- (void)getQuotaCardLog:(NSString *)pcode
                success:(void (^)(NSDictionary *response, id responseObject))successBlock
                failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failureBlock;
- (void)addQuotaByCode:(NSString *)pcode
               success:(void (^)(NSDictionary *response, id responseObject))successBlock
               failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failureBlock;
- (void)setSSOLoginWithSuccess:(void (^)(NSDictionary *response, id responseObject))successBlock
                       failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failureBlock;
@end
