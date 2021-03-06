//
//  SectionHeaderView.h
//  SugarNursing
//
//  Created by Dan on 14-11-27.
//  Copyright (c) 2014年 Tisson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomLabel.h"

@protocol SectionHeaderViewDelegate;

@interface SectionHeaderView : UITableViewHeaderFooterView


@property (weak, nonatomic) IBOutlet CustomLabel *titleLabel;
@property (weak, nonatomic) IBOutlet CustomLabel *dateLabel;
@property (weak, nonatomic) IBOutlet UIButton *arrowBtn;
@property (weak, nonatomic) IBOutlet id <SectionHeaderViewDelegate> delegate;

@property (nonatomic) NSInteger section;

- (void)toggleOpenWithUserAction:(BOOL)userAction;

@end

@protocol SectionHeaderViewDelegate <NSObject>

@optional
- (void)sectionHeaderView:(SectionHeaderView *)sectionHeaderView sectionOpened:(NSInteger)section;
- (void)sectionHeaderView:(SectionHeaderView *)sectionHeaderView sectionClosed:(NSInteger)section;

@end