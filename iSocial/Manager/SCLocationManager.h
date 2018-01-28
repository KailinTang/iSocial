//
//  SCLocationManager.h
//  iSocial
//
//  Created by Kailin Tang on 1/27/18.
//  Copyright © 2018 Kailin Tang. All rights reserved.
//



#import <Foundation/Foundation.h>
@class CLLocation;

extern NSString * const SCLocationUpdateNotification;

@interface SCLocationManager : NSObject

+ (instancetype)sharedManager;
- (void)getUserPermission;
+ (BOOL)isLocationServicesEnabled;
- (void)startLoadUserLocation;
- (void)stopLoadUserLocation;
- (CLLocation *)getUserCurrentLocation;

@end
