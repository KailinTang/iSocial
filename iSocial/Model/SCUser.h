//
//  SCUser.h
//  iSocial
//
//  Created by Kailin Tang on 1/20/18.
//  Copyright © 2018 Kailin Tang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SCUser : NSObject

@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *token;

- (instancetype)initWithUsername:(NSString *)username andPassword:(NSString *)password;

@end

