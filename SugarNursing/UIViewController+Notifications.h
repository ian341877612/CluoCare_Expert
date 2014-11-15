//
//  UIViewController+Notifications.h
//  SugarNursing
//
//  Created by Dan on 14-11-14.
//  Copyright (c) 2014年 Tisson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController(Notifications)<UITextFieldDelegate>

- (void)registerForKeyboardNotification:(SEL)keyboarWillShow :(SEL)keyboarWillHide;
- (void)removeKeyboardNotification;

@end
