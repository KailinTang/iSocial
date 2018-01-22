//
//  SCPost.m
//  iSocial
//
//  Created by Kailin Tang on 1/21/18.
//  Copyright © 2018 Kailin Tang. All rights reserved.
//


#import "SCPost.h"

@implementation SCPost

- (instancetype)initWithDictionary:(NSDictionary *)dict
{
    if (self = [super init]) {
        self.name = dict[@"user"];
        self.message = dict[@"message"];
        CLLocationDegrees latitute = [dict[@"location"][@"lat"] doubleValue];
        CLLocationDegrees longtitude = [dict[@"location"][@"lon"] doubleValue];
        self.location = [[CLLocation alloc] initWithLatitude:latitute longitude:longtitude];
        self.imageURL = dict[@"url"];
    }
    return self;
}



@end


