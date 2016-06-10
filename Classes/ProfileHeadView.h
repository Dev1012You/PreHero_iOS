//
//  ProfileHeadView.h
//  PrepHero
//
//  Created by John Pacheco on 9/21/15.
//  Copyright © 2015 PrepHero, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PHProfileImageNode.h"
@interface ProfileHeadView : UIView

@property (nonatomic, strong) ASTextNode *userName;
@property (nonatomic, strong) ASTextNode *gradYear;
@property (nonatomic, strong) PHProfileImageNode *profileImageView;

@end
