//
//  THCoreDataStack.h
//  Diary
//
//  Created by Michael Bardwell-Scott on 10/12/14.
//  Copyright (c) 2014 BardwellTech. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface THCoreDataStack : NSObject



@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;


//Create singleton init
+ (instancetype) defaultStack;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;



@end
