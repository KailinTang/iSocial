//
//  SCCreatePostViewController.h
//  iSocial
//
//  Created by Kailin Tang on 1/21/18.
//  Copyright © 2018 Kailin Tang. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCCreatePostViewControllerDelegate <NSObject>

- (void)didCreatePost;

@end
@interface SCCreatePostViewController : UIViewController

@property (nonatomic, weak) id<SCCreatePostViewControllerDelegate> delegate;

@end

