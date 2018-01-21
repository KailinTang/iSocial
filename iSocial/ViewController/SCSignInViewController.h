//
//  SCSignInViewController.h
//  iSocial
//
//  Created by Kailin Tang on 1/21/18.
//  Copyright © 2018 Kailin Tang. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCSignInViewControllerDelegate <NSObject>

- (void)loginSuccess;

@end

@interface SCSignInViewController : UIViewController

@property (nonatomic, weak) id<SCSignInViewControllerDelegate> delegate;
@end

