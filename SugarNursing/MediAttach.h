//
//  MediAttach.h
//  SugarNursing
//
//  Created by Ian on 15-1-30.
//  Copyright (c) 2015年 Tisson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class MediRecord;

@interface MediAttach : NSManagedObject

@property (nonatomic, retain) NSString * attachPath;
@property (nonatomic, retain) NSString * attachName;
@property (nonatomic, retain) MediRecord *mediRecord;

@end
