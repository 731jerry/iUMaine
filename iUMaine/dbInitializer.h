//
//  dbInitializer.h
//  iUMaine
//
//  Created by RKing on 4/20/11.
//  Copyright 2011 UMaineIRL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface DBInitializer : NSObject {
    
    NSManagedObjectContext* managedObjectContext;
}

@property (nonatomic, strong) NSManagedObjectContext* managedObjectContext;

- (void) initDatabase;
- (void) initLotsOfType:(NSString*) permitType withFile:(NSString*) filePath;
- (void) initBuildingsWithFile:(NSString*) filePath;
- (void) initEmployeesWithFile:(NSString*) filePath;
- (void) initCoursesForSeason: (NSString*) season andYear: (NSString*) year;

@end
