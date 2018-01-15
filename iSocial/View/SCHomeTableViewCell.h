//
//  SCHomeTableViewCell.h
//  iSocial
//
//  Created by Kailin Tang on 1/14/18.
//  Copyright © 2018 Kailin Tang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCHomeTableViewCell : UITableViewCell
- (void)loadCellWithPost:(SCPost *)post;
+ (CGFloat)cellHeight;

@end
