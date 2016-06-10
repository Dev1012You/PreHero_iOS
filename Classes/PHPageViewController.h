//
//  PHPageViewController.h
//  PrepHero
//
//  Created by John Pacheco on 8/19/15.
//  Copyright (c) 2015 PrepHero, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PHPageViewController : UIViewController

@property (assign, nonatomic) NSInteger index;

- (instancetype)initWithIndex:(NSUInteger)index;

@end
