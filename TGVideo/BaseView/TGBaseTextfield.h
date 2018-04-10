//
//  TGBaseTextfield.h
//  TGVideo
//
//  Created by XFS_zang on 2018/4/9.
//  Copyright © 2018年 XFS_zang. All rights reserved.
//

#import <Foundation/Foundation.h>
@class TGBaseTextfield;

@protocol TGBaseTextfieldDelegate <NSObject>

- (void)baseTextFieldSureButtonDidselected:(TGBaseTextfield *)textField;

@end
@interface TGBaseTextfield : UITextField
@property (nonatomic,assign) id<TGBaseTextfieldDelegate> selectedDelegate;
@end
