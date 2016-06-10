//
//  PHSettingsViewController.h
//  PrepHero
//
//  Created by John Pacheco on 6/29/15.
//  Copyright (c) 2015 PrepHero, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ProfileHeadView.h"
@interface PHSettingsViewController : UITableViewController


@property (strong, nonatomic) NSMutableArray *settingOptions;
@property (strong, nonatomic) ProfileHeadView *profileHeadView;

@end
