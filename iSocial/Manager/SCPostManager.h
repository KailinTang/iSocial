//
//  SCPostManager.h
//  iSocial
//
//  Created by Kailin Tang on 1/21/18.
//  Copyright © 2018 Kailin Tang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class SCPost;
@class CLLocation;

@interface SCPostManager : NSObject

/*
 * Create posts with message and image
 */
+ (void)createPostWithMessage:(NSString *)message imageFile:(UIImage *)image andCompletion:(void(^)(NSError *error))completionBlock;

/*
 * load all posts within a givin location and range
 */
+ (void)getPostsWithLocation:(CLLocation *)location range:(NSInteger)range andCompletion:(void(^)(NSArray <SCPost *>* posts, NSError *error))completionBlock;

@end


