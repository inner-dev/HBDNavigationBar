//
//  HBDNavigationBar.h
//  HBDNavigationBar
//
//  Created by Listen on 2018/3/23.
//

#import <UIKit/UIKit.h>
#import "UIViewController+HBD.h"
#import "HBDNavigationController.h"


//! Project version number for HBDNavigationBar.
FOUNDATION_EXPORT double HBDNavigationBarVersionNumber;

//! Project version string for HBDNavigationBar.
FOUNDATION_EXPORT const unsigned char HBDNavigationBarVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <HBDNavigationBar/PublicHeader.h>

@interface HBDNavigationBar : UINavigationBar

@property (nonatomic, strong, readonly) UIImageView *shadowImageView;
@property (nonatomic, strong, readonly) UIVisualEffectView *fakeView;
@property (nonatomic, strong, readonly) UIImageView *backgroundImageView;
@property (nonatomic, strong, readonly) UILabel *backButtonLabel;

@end
