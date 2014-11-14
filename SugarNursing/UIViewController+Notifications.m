//
//  UIViewController+Notifications.m
//  SugarNursing
//
//  Created by Dan on 14-11-14.
//  Copyright (c) 2014年 Tisson. All rights reserved.
//

#import "UIViewController+Notifications.h"

@implementation UIViewController (Notifications)

- (void)registerForKeyboardNotification:(SEL)keyboarWillShow :(SEL)keyboarWillHide
{
    [[NSNotificationCenter defaultCenter] addObserver:self selector:keyboarWillShow name:UIKeyboardWillShowNotification object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:keyboarWillHide name:UIKeyboardWillHideNotification object:nil];
}

- (void)removeKeyboardNotification
{
    [[NSNotificationCenter defaultCenter] removeObserver:self name:UIKeyboardWillShowNotification object:nil];
    [[NSNotificationCenter defaultCenter] removeObserver:self name:UIKeyboardWillHideNotification object:nil];
}

@end
