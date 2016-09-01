//
//  AppDelegate.h
//  TipTracker
//
//  Created by Michael Kozy on 1/31/16.
//  Copyright © 2016 Michael Kozy. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class KeychainItemWrapper;

@interface AppDelegate : UIResponder <UIApplicationDelegate>


@property (strong, nonatomic) UIWindow *window;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;




- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;




@end
