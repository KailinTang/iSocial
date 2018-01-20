//
//  SCUserManager.h
//  iSocial
//
//  Created by Kailin Tang on 1/20/18.
//  Copyright © 2018 Kailin Tang. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SCUser;

@interface SCUserManager : NSObject

+ (SCUserManager *_Nonnull)sharedUserManager;
- (SCUser *_Nullable)currentUser;

- (BOOL)isUserLogin;

- (void)loginWithUsername:(NSString * _Nonnull)username password:(NSString * _Nonnull)password andCompletionBlock:(void(^_Nullable)(NSError * _Nullable error))completionBlock;
- (void)signupWithUsername:(NSString * _Nonnull)username password:(NSString * _Nonnull)password andCompletionBlock:(void(^_Nullable)(NSError * _Nullable error))completionBlock;

@end

