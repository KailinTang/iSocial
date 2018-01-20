//
//  SCUser.m
//  iSocial
//
//  Created by Kailin Tang on 1/20/18.
//  Copyright © 2018 Kailin Tang. All rights reserved.
//

#import "SCUser.h"

@implementation SCUser

- (instancetype)initWithUsername:(NSString *)username andPassword:(NSString *)password
{
    if (self = [super init]) {
        self.userName = username;
        self.password = password;
    }
    return self;
}

@end

