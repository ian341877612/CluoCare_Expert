//
//  MyPatientsCell.h
//  SugarNursing
//
//  Created by Ian on 14-11-21.
//  Copyright (c) 2014年 Tisson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyPatientsCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *patientImageView;

@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *genderLabel;
@property (weak, nonatomic) IBOutlet UILabel *ageLabel;
@property (weak, nonatomic) IBOutlet UILabel *serviceRankLabel;
@property (weak, nonatomic) IBOutlet UILabel *bindingDateLabel;
@property (weak, nonatomic) IBOutlet UILabel *stateLabel;


- (void)configureCellWithParameter:(NSDictionary *)parameter;

@end
