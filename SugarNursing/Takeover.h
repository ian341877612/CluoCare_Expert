//
//  Takeover.h
//  SugarNursing
//
//  Created by Ian on 15-1-14.
//  Copyright (c) 2015年 Tisson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Takeover : NSManagedObject

@property (nonatomic, retain) NSString * apprTime;
@property (nonatomic, retain) NSString * linkManBirthday;
@property (nonatomic, retain) NSString * linkManId;
@property (nonatomic, retain) NSString * linkManUserName;
@property (nonatomic, retain) NSString * linkManSex;
@property (nonatomic, retain) NSString * queryFlag;
@property (nonatomic, retain) NSString * reqtExptId;
@property (nonatomic, retain) NSString * reqtExptName;
@property (nonatomic, retain) NSString * reqtId;
@property (nonatomic, retain) NSString * reqtTime;
@property (nonatomic, retain) NSString * trusBeginTime;
@property (nonatomic, retain) NSString * trusEndTime;

@end
