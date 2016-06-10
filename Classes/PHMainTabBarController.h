//
//  PHMainTabBarController.h
//  PrepHero
//
//  Created by John Pacheco on 6/29/15.
//  Copyright (c) 2015 PrepHero, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PHMainTabBarController : UITabBarController

// Create a custom UIButton and add it to the center of our tab bar
-(void) addCenterButtonWithImage:(UIImage*)buttonImage highlightImage:(UIImage*)highlightImage;

@end
