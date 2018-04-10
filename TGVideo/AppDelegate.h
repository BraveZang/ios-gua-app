//
//  AppDelegate.h
//  TGVideo
//
//  Created by XFS_zang on 2018/4/9.
//  Copyright © 2018年 XFS_zang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "PushManager.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate,CLLocationManagerDelegate,UIAlertViewDelegate>

//是否切换到了后台
@property (assign, nonatomic) BOOL isInForeground;
@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UINavigationController * rootNav;
@property (nonatomic,strong) PushManager *iPushManager;


@end

