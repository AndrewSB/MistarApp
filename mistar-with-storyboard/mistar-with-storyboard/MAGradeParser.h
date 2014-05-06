//
//  MAGradeParser.h
//  MistarApp
//
//  Created by Andrew Breckenridge on 3/26/14.
//  Copyright (c) 2014 Andrew Breckenridge. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TFHpple.h"
#import "MAAssignment.h"
#import "MATeacher.h"


@interface MAGradeParser : NSObject

- (NSDictionary *)parseWithData:(NSData *)data;

- (NSArray *)getTeachersWithData:(NSData *)data;
- (NSArray *)getClassesWithData:(NSData *)data;
- (NSArray *)getAssignmentsWithData:(NSData *)data;
- (NSArray *)getGradesWithData:(NSData *)data;

@end
