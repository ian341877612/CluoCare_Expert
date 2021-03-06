//
//  NSManagedObject+Savers.h
//  SugarNursing
//
//  Created by Dan on 14-12-29.
//  Copyright (c) 2014年 Tisson. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSManagedObject (Savers)

+ (void)updateCoreDataWithListArray:(NSArray *)array identifierKey:(NSString *)identifierKey;

+ (void)coverCoreDataWithArray:(NSArray *)array;

- (void)updateCoreDataForData:(NSDictionary *)data withKeyPath:(NSString *)keyPath;



@end
